class ActionCreateCanSalt : ActionInteractBase
{
    void ActionCreateCanSalt()
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
        ItemBase salt = ItemBase.Cast(table.FindAttachmentBySlotName("Salt"));

        if (!can)
            return false;

        if (!salt)
        {
            return false;
        }

        float requiredSalt = SzefKuchni_Config.GetRequiredSalt();
        if (salt.GetQuantity() < requiredSalt)
        {
            return false;
        }

        return true;
    }

    override void OnStartServer(ActionData action_data)
    {
        SzefKuchni_Table table = SzefKuchni_Table.Cast(action_data.m_Target.GetObject());
        if (!table) return;

        PlayerBase player = action_data.m_Player;
        ItemBase can = ItemBase.Cast(table.FindAttachmentBySlotName("CanEmpty"));
        ItemBase salt = ItemBase.Cast(table.FindAttachmentBySlotName("Salt"));
        float requiredSalt = SzefKuchni_Config.GetRequiredSalt();

        if (!can || !salt || salt.GetQuantity() < requiredSalt)
            return;

        can.Delete();
        salt.AddQuantity(-requiredSalt);
        if (salt.GetQuantity() <= 0)
            salt.Delete();

        // Tworzenie obiektu z wykorzystaniem helpera
        vector pos = SzefKuchni_Utils.GetSpawnOffset(table, -0.25, 0.9, 0.0);
        GetGame().CreateObjectEx("SzefFood_CanSalt", pos, ECE_PLACE_ON_SURFACE);
		
        player.MessageStatus("#Stworzono_puszke_z_Salt");
    }

    override bool HasTarget() { return true; }
    override string GetText() { return "#Wytworz_puszke_z_Salt"; }
}