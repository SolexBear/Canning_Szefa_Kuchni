class ActionCreateJarOcet : ActionInteractBase
{
    void ActionCreateJarOcet()
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

        ItemBase jar = ItemBase.Cast(table.FindAttachmentBySlotName("JarEmpty")); // pusty słoik
        ItemBase ocet = ItemBase.Cast(table.FindAttachmentBySlotName("Szef_ocet")); // surowy ocet

        if (!jar || !ocet)
            return false;

        float requiredOcet = SzefKuchni_Config.GetRequiredOcet();
        if (ocet.GetQuantity() < requiredOcet)
            return false;

        return true;
    }

    override void OnStartServer(ActionData action_data)
    {
        SzefKuchni_Table table = SzefKuchni_Table.Cast(action_data.m_Target.GetObject());
        if (!table) return;

        PlayerBase player = action_data.m_Player;
        ItemBase jar = ItemBase.Cast(table.FindAttachmentBySlotName("JarEmpty"));
        ItemBase ocet = ItemBase.Cast(table.FindAttachmentBySlotName("Szef_ocet"));
        float requiredOcet = SzefKuchni_Config.GetRequiredOcet();

        if (!jar || !ocet || ocet.GetQuantity() < requiredOcet)
            return;

        jar.Delete();

        ocet.AddQuantity(-requiredOcet);
        if (ocet.GetQuantity() <= 0)
            ocet.Delete();

        // Tworzenie obiektu z wykorzystaniem helpera
        vector pos = SzefKuchni_Utils.GetSpawnOffset(table, -0.25, 0.9, 0.0);
        GetGame().CreateObjectEx("SzefFood_Vinegar_Jar", pos, ECE_PLACE_ON_SURFACE);
        player.MessageStatus("#Stworzono_sloik_z_octem");
    }

    override bool HasTarget() { return true; }
    override string GetText() { return "#Wytworz_sloik_z_octem"; }
}