//MissionServer.c
modded class MissionServer
{
    override void OnInit()
    {
        super.OnInit();
        
        // Rejestracja RPC dla SK_Bookcook
        GetRPCManager().AddRPC("SK_Bookcook", "RequestBookData", this, SingeplayerExecutionType.Server);
        GetRPCManager().AddRPC("SK_Bookcook", "ReceiveBookData", this, SingeplayerExecutionType.Client);
		//BookContent.GetBookData("SK_Bookcook"); // Wymusza wygenerowanie JSON przy starcie serwera
        
        Print("[SK_Bookcook] System JSON zainicjowany.");
    }
    
    // RPC po stronie serwera: odbiera żądanie z nazwą klasy
    void RequestBookData(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target)
    {
        if (type == CallType.Server && sender)
        {
            Param1<string> data;
            if (!ctx.Read(data)) return;
            
            string className = data.param1;
            Print("[SK_Bookcook] Żądanie danych dla klasy '" + className + "' od: " + sender.GetName());
            
            // Pobierz dane książki dla tej klasy (zawsze przeładowuje JSON)
            BookData bookData = BookContent.GetBookData(className);
            
            if (bookData)
            {
                // Wyślij dane książki do klienta
                GetRPCManager().SendRPC("SK_Bookcook", "ReceiveBookData", new Param3<string, BookLinkData, array<string>>(bookData.title, bookData.links, bookData.pages), true, sender);

                
                Print("[SK_Bookcook] Wysłano dane dla '" + className + "': " + bookData.title);
            }
            else
            {
                Print("[SK_Bookcook] BŁĄD: Nie udało się pobrać danych dla klasy: " + className);
            }
        }
    }

}

