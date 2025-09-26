class ActionCreateCanOcet : ActionInteractBase
{
    void ActionCreateCanOcet()
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

        ItemBase can = ItemBase.Cast(table.FindAttachmentBySlotName("CanEmpty"));
        ItemBase ocet = ItemBase.Cast(table.FindAttachmentBySlotName("Szef_ocet"));

        if (!can || !ocet)
            return false;

        float requiredOcet = SzefKuchni_Config.GetRequiredOcet();
        return ocet.GetQuantity() >= requiredOcet;
    }

    override void OnStartServer(ActionData action_data)
    {
        SzefKuchni_Table table = SzefKuchni_Table.Cast(action_data.m_Target.GetObject());
        if (!table) return;

        PlayerBase player = action_data.m_Player;
        ItemBase can = ItemBase.Cast(table.FindAttachmentBySlotName("CanEmpty"));
        ItemBase ocet = ItemBase.Cast(table.FindAttachmentBySlotName("Szef_ocet"));
        float requiredOcet = SzefKuchni_Config.GetRequiredOcet();

        if (!can || !ocet || ocet.GetQuantity() < requiredOcet)
            return;

        can.Delete();
        ocet.AddQuantity(-requiredOcet);
        if (ocet.GetQuantity() <= 0)
            ocet.Delete();

        // Użycie helpera z Utils
        vector pos = SzefKuchni_Utils.GetSpawnOffset(table, -0.25, 0.9, 0.0);
        GetGame().CreateObjectEx("SzefFood_CanOcet", pos, ECE_PLACE_ON_SURFACE);

        SzefKuchni_Utils.SendChatMessage(player, "#OcetCanCreated");
    }

    override bool HasTarget() { return true; }
    override string GetText() { return "#Wytworz_puszke_z_ocet"; }
}