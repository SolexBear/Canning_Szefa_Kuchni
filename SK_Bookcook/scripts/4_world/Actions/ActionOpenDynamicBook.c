modded class ActionConstructor
{
    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);
        actions.Insert(ActionOpenSK_Bookcook);
    }
};

class ActionOpenSK_BookcookCB : ActionSingleUseBaseCB
{
    override void CreateActionComponent()
    {
        m_ActionData.m_ActionComponent = new CASingleUseTurnOnPlugged();
    }
}

class ActionOpenSK_Bookcook : ActionSingleUseBase
{
    void ActionOpenSK_Bookcook()
    {
        m_CallbackClass     = ActionOpenSK_BookcookCB;
        m_CommandUID        = DayZPlayerConstants.CMD_ACTIONFB_PICKUP_INVENTORY;
        m_CommandUIDProne   = DayZPlayerConstants.CMD_ACTIONFB_PICKUP_INVENTORY;
    }

    override void CreateConditionComponents()  
    {   
        m_ConditionItem     = new CCINonRuined();
        m_ConditionTarget   = new CCTNone();
    }

    override string GetText()
    {
        return "Czytaj książkę";
    }

    override bool HasTarget()
    {
        return false;
    }
    
    override bool HasProneException()
    {
        return true;
    }

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
        if (!item || !item.IsKindOf("SK_Bookcook"))
            return false;

        // Sprawdzenie czy inne menu jest otwarte (tylko po stronie klienta)
        if (GetGame().IsClient())
        {
            if (GetGame().GetUIManager().IsMenuOpen(MENU_ANY))
            {
                Print("[SK_Bookcook] Inne menu jest otwarte – akcja zablokowana");
                return false;
            }
        }

        return true;
    }

    override void OnExecuteClient(ActionData action_data)
    {
        super.OnExecuteClient(action_data);
        PlayerBase player = action_data.m_Player;
        ItemBase item = action_data.m_MainItem;
        
        // Pobierz automatycznie nazwę klasy przedmiotu
        string className = item.GetType();
        
        // Wyślij nazwę klasy przez RPC do serwera
        GetRPCManager().SendRPC("SK_Bookcook", "RequestBookData", new Param1<string>(className), true, null, player);
        Print("[SK_Bookcook] Wysłano żądanie dla klasy: " + className);
    }
}
