class SK_BookcookGUIManager
{
    ref SK_BookcookMenu m_BookMenu;

    // Obsługa naciśnięcia klawisza
    void OnKeyPress(int key)
    {
        switch (key)
        {
            case KeyCode.KC_ESCAPE:
                CloseGUI();
            break;
        }
    }

    // Otwórz interfejs książki
    void OpenGUI(ref array<string> pages)
    {
        // Zamknij poprzednie menu, jeśli istnieje
        CloseGUI();
        
        // Utwórz i otwórz nowe menu (dane są już ustawione w BookContent)
        m_BookMenu = new SK_BookcookMenu();
        GetGame().GetUIManager().ShowScriptedMenu(m_BookMenu, null);
        
        Print("[SK_Bookcook] Menu otwarte przez menedżera");
    }

    // Zamknij interfejs książki
    void CloseGUI()
    {
        if (m_BookMenu)
        {
            m_BookMenu.Close();
            m_BookMenu = null;
            Print("[SK_Bookcook] Menu zamknięte przez menedżera");
        }
    }
    
    // Sprawdź, czy menu jest otwarte
    bool IsMenuOpen()
    {
        return m_BookMenu != null;
    }
}

// Zmienna globalna
ref SK_BookcookGUIManager g_SK_BookcookGUIManager;
