class ActionCreatePickledJarZucchini : ActionInteractBase
{
    void ActionCreatePickledJarZucchini()
    {
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_PICKUP_HANDS;
        m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
    }

    override void CreateConditionComponents()
    {
        m_ConditionItem = new CCINone();
        m_ConditionTarget = new CCTObject(1.5);
    }

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
        SzefKuchni_Table table = SzefKuchni_Table.Cast(target.GetObject());
        if (!table) return false;

        ItemBase jarIngredient = ItemBase.Cast(table.FindAttachmentBySlotName("JarIngredient"));
        if (!jarIngredient || jarIngredient.GetType() != "SzefFood_Vinegar_Jar")
            return false;

        ItemBase i1 = ItemBase.Cast(table.FindAttachmentBySlotName("Danie_1"));
        ItemBase i2 = ItemBase.Cast(table.FindAttachmentBySlotName("Danie_2"));
        ItemBase i3 = ItemBase.Cast(table.FindAttachmentBySlotName("Danie_3"));

        array<ItemBase> ingredients = {i1, i2, i3};
        int totalQty = 0;

        foreach (ItemBase ingredient : ingredients)
        {
            if (!ingredient) continue;
            if (ingredient.GetType() != "Zucchini") return false;

            Edible_Base edible = Edible_Base.Cast(ingredient);
            if (!edible) return false;

            FoodStage stage = edible.GetFoodStage();
            if (!stage || stage.GetFoodStageType() != FoodStageType.RAW)
                return false;

            totalQty += ingredient.GetQuantity();
        }

        float required = SzefKuchni_Config.GetRequiredPickle("Zucchini");
        return totalQty >= required;
    }

    override void OnStartServer(ActionData action_data)
    {
        SzefKuchni_Table table = SzefKuchni_Table.Cast(action_data.m_Target.GetObject());
        if (!table) return;

        ItemBase jarIngredient = ItemBase.Cast(table.FindAttachmentBySlotName("JarIngredient"));
        if (!jarIngredient || jarIngredient.GetType() != "SzefFood_Vinegar_Jar")
            return;

        ItemBase i1 = ItemBase.Cast(table.FindAttachmentBySlotName("Danie_1"));
        ItemBase i2 = ItemBase.Cast(table.FindAttachmentBySlotName("Danie_2"));
        ItemBase i3 = ItemBase.Cast(table.FindAttachmentBySlotName("Danie_3"));

        array<ItemBase> ingredients = {i1, i2, i3};

        float required = SzefKuchni_Config.GetRequiredPickle("Zucchini");
        float remaining = required;

        jarIngredient.Delete();

        foreach (ItemBase ingredient : ingredients)
        {
            if (!ingredient || remaining <= 0) continue;

            float q = ingredient.GetQuantity();
            if (q <= remaining)
            {
                remaining -= q;
                ingredient.Delete();
            }
            else
            {
                ingredient.SetQuantity(q - remaining);
                remaining = 0;
            }
        }

        SzefKuchni_Utils.SpawnOnTable(table, "SzefFood_Zucchini_Jar");
        SzefKuchni_Utils.SendChatMessage(action_data.m_Player, "#Stworzyles_cukinia_w_occie");
    }

    override bool HasTarget() { return true; }
    override string GetText() { return "#Wytworz_cukinia_w_occie"; }
}