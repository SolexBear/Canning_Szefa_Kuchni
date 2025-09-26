class ActionCreateMeatCanBoar  : ActionInteractBase
{
    void ActionCreateMeatCanBoar ()
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

        ItemBase canIngredient = ItemBase.Cast(table.FindAttachmentBySlotName("CanIngredient"));
        if (!canIngredient || canIngredient.GetType() != "SzefFood_CanSalt")
            return false;

        ItemBase m1 = ItemBase.Cast(table.FindAttachmentBySlotName("Danie_1"));
        ItemBase m2 = ItemBase.Cast(table.FindAttachmentBySlotName("Danie_2"));
        ItemBase m3 = ItemBase.Cast(table.FindAttachmentBySlotName("Danie_3"));

        array<ItemBase> meats = {m1, m2, m3};
        int totalQty = 0;

        foreach (ItemBase meat : meats)
        {
            if (!meat) continue;
            if (meat.GetType() != "BoarSteakMeat") return false;

            Edible_Base edible = Edible_Base.Cast(meat);
            if (!edible) return false;

            FoodStage stage = edible.GetFoodStage();
            if (!stage || stage.GetFoodStageType() != FoodStageType.RAW)
                return false;

            totalQty += meat.GetQuantity();
        }

        float required = SzefKuchni_Config.GetRequiredMeat("BoarSteakMeat");
        return totalQty >= required;
    }

    override void OnStartServer(ActionData action_data)
    {
        SzefKuchni_Table table = SzefKuchni_Table.Cast(action_data.m_Target.GetObject());
        if (!table) return;

        ItemBase canIngredient = ItemBase.Cast(table.FindAttachmentBySlotName("CanIngredient"));
        if (!canIngredient || canIngredient.GetType() != "SzefFood_CanSalt")
            return;

        ItemBase m1 = ItemBase.Cast(table.FindAttachmentBySlotName("Danie_1"));
        ItemBase m2 = ItemBase.Cast(table.FindAttachmentBySlotName("Danie_2"));
        ItemBase m3 = ItemBase.Cast(table.FindAttachmentBySlotName("Danie_3"));

        array<ItemBase> meats = {m1, m2, m3};

        float required = SzefKuchni_Config.GetRequiredMeat("BoarSteakMeat");
        float remaining = required;

        canIngredient.Delete();

        foreach (ItemBase meat : meats) {
            if (!meat || remaining <= 0) continue;

            float q = meat.GetQuantity();
            if (q <= remaining) {
                remaining -= q;
                meat.Delete();
            } else {
                meat.SetQuantity(q - remaining);
                remaining = 0;
            }
        }

        SzefKuchni_Utils.SpawnOnTable(table, "SzefFood_MeatBoar"); // <-- ZMIEŃ NAZWĘ PRODUKTU
		SzefKuchni_Utils.SendChatMessage(action_data.m_Player, "#Stworzyles_puszke_Dzika");
    }

    override bool HasTarget() { return true; }
    override string GetText() { return "#Wytworz_puszke_Dzika"; }
}