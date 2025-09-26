class BookLinkData
{
    string youtube;
    string github; 
    string discord;
    string steam;
    
    void BookLinkData()
    {
        youtube = "";
        github = "";
        discord = "";
        steam = "";
    }
}

class BookData
{
    string title;
    ref BookLinkData links;
    ref array<string> pages;
    
    void BookData()
    {
        title = "";
        links = new BookLinkData();
        pages = new array<string>;
    }
}

class BooksConfigData
{
    // Mapowanie: Nazwa klasy → zawartość książki
    ref map<string, ref BookData> books;
    
    void BooksConfigData()
    {
        books = new map<string, ref BookData>;
    }
}

class BookContent
{
    static ref BooksConfigData s_BooksConfig;
    static ref BookData s_CurrentBookData; // Dane aktualnie otwartej książki

    // Wczytaj konfigurację książek z pliku JSON
    static void LoadBooksConfig()
    {
        string configPath = "$profile:SK_Bookcook/BooksConfig.json";
        
        if (FileExist(configPath))
        {
            s_BooksConfig = new BooksConfigData();
            JsonFileLoader<BooksConfigData>.JsonLoadFile(configPath, s_BooksConfig);
            Print("[SK_Bookcook] Konfiguracja załadowana z " + s_BooksConfig.books.Count() + " książkami");
        }
        else
        {
            CreateDefaultBooksConfig();
        }
    }
    
    // Utwórz domyślną konfigurację, jeśli plik nie istnieje
    static void CreateDefaultBooksConfig()
    {
        if (!FileExist("$profile:SK_Bookcook"))
            MakeDirectory("$profile:SK_Bookcook");
            
        s_BooksConfig = new BooksConfigData();
        
        // Domyślna książka SK_Bookcook
        BookData defaultBook = new BookData();
        defaultBook.title = "Książka Szefa Kuchni";
        defaultBook.links.youtube = "";
        defaultBook.links.github = "";
        defaultBook.links.discord = "";
        defaultBook.links.steam = "https://steamcommunity.com/sharedfiles/filedetails/?id=3484925393";
        defaultBook.pages = {
           	    "<h1>PRZEPIS NA KONSERWOWANIE MIĘSA</h1> <br/> <h2>Pustą puszkę napełnić solą.</h2><h2>Włożyć do niej surowe mięso tego samego rodzaju w wystarczającej ilości i zamknąć.</h2> <br/> <p>Mięsa nadające się do konserwacji w puszce:</p> \n-  Makrela\n-  Karp\n-  Pstrąg\n-  Mintaj\n-  Sardynki\n-  Królik\n-  Kura\n-  Owca\n-  Krowa\n-  Niedźwiedź\n-  Wilk\n-  Świnia\n-  Koza\n-  Dzik\n-  Jeleń\n-  Renifer\n-  Lis<p>Dodatkowo do puszki z solą można włożyć:</p>\n-  Ziemniaki",
				"<h1>PRZEPIS NA PRZETWORY OWOCOWE</h1> <br/> <h2>Pustą puszkę napełnić cukrem.</h2><h2>Włożyć do niej świeże owoce tego samego rodzaju i zamknąć.</h2> <br/> <p>Owoce nadające się do przetworzenia:</p> \n-  Śliwki\n-  Gruszki\n-  Jabłka\n-  Dynia",
				"<h1>PRZEPIS NA MARYNATY W PUSZCE</h1><h2>Pustą puszkę napełnić octem.</h2><h2>Włożyć do niej świeże produkty do marynowania tego samego rodzaju i zamknąć.</h2><p>Produkty nadające się do marynowania:</p>\n-  Pomidory\n-  Papryka  <h1>PRZEPIS NA MARYNATY W SŁOIKACH</h1> <br/> <h2>Pusty słoik napełnić octem.</h2> <h2>Włożyć do niego świeże produkty do marynowania tego samego rodzaju i zamknąć.</h2> <br/> <p>Produkty nadające się do marynowania:</p> <br/>\n-  Cukinia\n-  Papryka\n-  Dynia\n-  Pieczarki\n-  Boczniaki\n-  Rydze\n-  Borowiki\n-  Kanie",
				"<h1>PRZEPIS NA DŻEMY I MUSY W SŁOIKACH</h1><h2>Pusty słoik napełnić cukrem.</h2><h2>Włożyć do niego świeże produkty tego samego rodzaju i zamknąć.</h2> <br/> <br/><br/> <p>Produkty nadające się do przetworzenia z cukrem:</p> \n-  Śliwki\n-  Gruszki\n-  Jabłka\n-  Dynia"
			};
        
        s_BooksConfig.books.Insert("SK_Bookcook", defaultBook);
        
        // Przykładowa dodatkowa książka
        BookData SK_BookcookEN = new BookData();
        SK_BookcookEN.title = "Chef's Cookbook";
        SK_BookcookEN.links.discord = "";
        SK_BookcookEN.pages = {
                "<h1>RECIPE FOR MEAT PRESERVATION</h1> <br/> <h2>Fill an empty can with salt.</h2><h2>Place raw meat of the same type inside in sufficient quantity and seal it.</h2> <br/> <p>Meats suitable for canning:</p> \n-  Mackerel\n-  Carp\n-  Trout\n-  Pollock\n-  Sardines\n-  Rabbit\n-  Chicken\n-  Sheep\n-  Cow\n-  Bear\n-  Wolf\n-  Pig\n-  Goat\n-  Boar\n-  Deer\n-  Reindeer\n-  Fox<p>Additionally, you can add to the salted can:</p>\n-  Potatoes",
				"<h1>RECIPE FOR FRUIT PRESERVES</h1> <br/> <h2>Fill an empty can with sugar.</h2><h2>Place fresh fruits of the same type inside and seal it.</h2> <br/> <p>Fruits suitable for preserving:</p> \n-  Plums\n-  Pears\n-  Apples\n-  Pumpkin",
				"<h1>RECIPE FOR PICKLED CANS</h1><h2>Fill an empty can with vinegar.</h2><h2>Place fresh pickling products of the same type inside and seal it.</h2><p>Products suitable for pickling:</p>\n-  Tomatoes\n-  Peppers  <h1>RECIPE FOR JAR PICKLES</h1> <br/> <h2>Fill an empty jar with vinegar.</h2> <h2>Place fresh pickling products of the same type inside and seal it.</h2> <br/> <p>Products suitable for pickling:</p> <br/>\n-  Zucchini\n-  Peppers\n-  Pumpkin\n-  Mushrooms\n-  Oyster mushrooms\n-  Saffron milk caps\n-  Boletus\n-  Parasol mushrooms",
				"<h1>RECIPE FOR JAMS AND PUREES IN JARS</h1><h2>Fill an empty jar with sugar.</h2><h2>Place fresh products of the same type inside and seal it.</h2> <br/> <br/><br/> <p>Products suitable for processing with sugar:</p> \n-  Plums\n-  Pears\n-  Apples\n-  Pumpkin"
			};
        
        s_BooksConfig.books.Insert("SK_BookcookEN", SK_BookcookEN);
		
		// Przykładowa dodatkowa książka
        BookData SK_DayZ = new BookData();
        SK_DayZ.title = "Zasady Serwera/Server Rules";
        SK_DayZ.links.discord = "";
        SK_DayZ.pages = {
                "<h1>Budownictwo</h1> <br/> <h2>RaG_BaseBuilding</h2> <br/> <p>Stawianie ścian</p>",
				"<h1>Construction</h1> <br/> <h2>RaG_BaseBuilding</h2><p>Building walls</p>"
			};
        
        s_BooksConfig.books.Insert("SK_DayZ", SK_DayZ);
        
        string configPath = "$profile:SK_Bookcook/BooksConfig.json";
        JsonFileLoader<BooksConfigData>.JsonSaveFile(configPath, s_BooksConfig);
        Print("[SK_Bookcook] Plik BooksConfig.json utworzony z domyślną konfiguracją");
    }
    
    // Pobierz dane książki na podstawie nazwy klasy (zawsze przeładowuje JSON)
    static BookData GetBookData(string className)
{
   string configPath = "$profile:SK_Bookcook/BooksConfig.json";

    if (!FileExist(configPath))
    {
        Print("[SK_Bookcook] Plik JSON nie istnieje — tworzenie domyślnego");
        CreateDefaultBooksConfig();
    }

    LoadBooksConfig();

    if (s_BooksConfig.books.Contains(className))
    {
        Print("[SK_Bookcook] Znaleziono konfigurację dla klasy: " + className);
        return s_BooksConfig.books.Get(className);
    }

    Print("[SK_Bookcook] Brak konfiguracji dla '" + className + "', użycie domyślnej");
    if (s_BooksConfig.books.Contains("SK_Bookcook"))
    {
        return s_BooksConfig.books.Get("SK_Bookcook");
    }

    // Fallback
    BookData fallback = new BookData();
    fallback.title = "Nie skonfigurowano książki: " + className;
    fallback.links = new BookLinkData();
    fallback.pages = {
        "Ta książka nie została skonfigurowana w BooksConfig.json",
        "Dodaj sekcję dla '" + className + "' w pliku:",
        "$profile:SK_Bookcook/BooksConfig.json"
    };
    return fallback;
}

    
    // Ustaw dane aktualnej książki
    static void SetCurrentBookData(ref BookData bookData)
    {
        s_CurrentBookData = bookData;
    }
    
    // Metody używane przez GUI
    static string GetPage(int index)
    {
        if (s_CurrentBookData && index >= 0 && index < s_CurrentBookData.pages.Count())
            return s_CurrentBookData.pages[index];
        return "Strona nie istnieje.";
    }

    static int GetPageCount()
    {
        if (s_CurrentBookData)
            return s_CurrentBookData.pages.Count();
        return 0;
    }

    static string GetTitle()
    {
        if (s_CurrentBookData && s_CurrentBookData.title != "")
            return s_CurrentBookData.title;
        return "Książka Kucharska";
    }
    
    static BookLinkData GetLinks()
    {
        if (s_CurrentBookData)
            return s_CurrentBookData.links;
        return new BookLinkData();
    }
}
