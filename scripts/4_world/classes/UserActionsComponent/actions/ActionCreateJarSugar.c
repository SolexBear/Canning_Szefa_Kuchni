class ActionCreateJarSugar : ActionInteractBase
{
    void ActionCreateJarSugar()
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
        if (!table)
            return false;

        ItemBase jar = ItemBase.Cast(table.FindAttachmentBySlotName("JarEmpty"));
        ItemBase sugar = ItemBase.Cast(table.FindAttachmentBySlotName("Szef_Sugar"));

        if (!jar)
            return false;

        if (!sugar)
            return false;

        float requiredSugar = SzefKuchni_Config.GetRequiredSugar();
        if (sugar.GetQuantity() < requiredSugar)
            return false;

        return true;
    }

    override void OnStartServer(ActionData action_data)
    {
        SzefKuchni_Table table = SzefKuchni_Table.Cast(action_data.m_Target.GetObject());
        if (!table) return;

        PlayerBase player = action_data.m_Player;
        ItemBase jar = ItemBase.Cast(table.FindAttachmentBySlotName("JarEmpty"));
        ItemBase sugar = ItemBase.Cast(table.FindAttachmentBySlotName("Szef_Sugar"));
        float requiredSugar = SzefKuchni_Config.GetRequiredSugar();

        if (!jar || !sugar || sugar.GetQuantity() < requiredSugar)
            return;

        jar.Delete();
        sugar.AddQuantity(-requiredSugar);
        if (sugar.GetQuantity() <= 0)
            sugar.Delete();

        vector pos = SzefKuchni_Utils.GetSpawnOffset(table, -0.25, 0.9, 0.0);
        GetGame().CreateObjectEx("SzefFood_Sugar_Jar", pos, ECE_PLACE_ON_SURFACE);

        player.MessageStatus("#Stworzono_sloik_z_Cukrem");
    }

    override bool HasTarget() { return true; }
    override string GetText() { return "#Wytworz_sloik_z_cukrem"; }
}