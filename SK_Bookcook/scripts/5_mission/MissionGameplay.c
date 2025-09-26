modded class MissionGameplay
{
    ref SK_BookcookMenu m_BookMenu;

    override void OnInit()
    {
        super.OnInit();
        
        // Inicjalizacja menedżera GUI dla SK_Bookcook
        g_SK_BookcookGUIManager = new SK_BookcookGUIManager();

        // Rejestracja RPC klienta do odbioru danych książki
        GetRPCManager().AddRPC("SK_Bookcook", "ReceiveBookData", this, SingeplayerExecutionType.Client);
    }
    
    // RPC Client: Odbiera dane książki i otwiera menu
    void ReceiveBookData(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target)
    {
        if (type == CallType.Client)
        {
            Param3<string, BookLinkData, array<string>> param;
            if (ctx.Read(param))
            {
                string title = param.param1;
                ref BookLinkData links = param.param2;
                ref array<string> pages = param.param3;
                Print("[SK_Bookcook] Odebrano dane: " + title + " z " + pages.Count() + " stronami");
                
                // Tworzenie obiektu BookData z odebranymi danymi
                BookData bookData = new BookData();
                bookData.title = title;
                bookData.links = links;
                bookData.pages = pages;
                
                // Ustawienie aktualnej książki w systemie
                BookContent.SetCurrentBookData(bookData);
                
                // Otwarcie interfejsu książki przez menedżera GUI
                if (g_SK_BookcookGUIManager)
                {
                    g_SK_BookcookGUIManager.OpenGUI(pages);
                }
            }
        }
    }

    override void OnKeyPress(int key)
    {
        super.OnKeyPress(key);
        
        // Przekazanie naciśniętych klawiszy do menedżera GUI książki
        if (g_SK_BookcookGUIManager)
        {
            g_SK_BookcookGUIManager.OnKeyPress(key);
        }
    }
}
