class SK_BookcookMenu : UIScriptedMenu
{
    protected RichTextWidget m_TextWidget;
    protected ButtonWidget m_NextButton;
    protected ButtonWidget m_PrevButton;
    protected ButtonWidget m_CloseButton;  // Nowe: Przycisk zamykania
    protected TextWidget m_PageCounter;    // Nowe: Licznik stron
    protected TextWidget m_TitleWidget; 

    // Przycisk do linków
    protected ButtonWidget m_SteamButton;
    protected ButtonWidget m_SiteButton;
    protected ButtonWidget m_GithubButton;
    protected ButtonWidget m_DiscordButton;
    protected int m_CurrentPage;

    protected EffectSound m_NextPageSound;
    protected EffectSound m_CloseBookSound;
    protected vector soundPos; // Pozycja odtwarzania dźwięku

    ref BookLinkData links;

    override Widget Init()
    {
        layoutRoot = GetGame().GetWorkspace().CreateWidgets("SK_Bookcook/gui/layouts/book.layout");
        
        // Powiązanie widgetów
        m_TitleWidget = TextWidget.Cast(layoutRoot.FindAnyWidget("book_title"));
        m_TextWidget = RichTextWidget.Cast(layoutRoot.FindAnyWidget("book_text"));
        m_NextButton = ButtonWidget.Cast(layoutRoot.FindAnyWidget("btn_next"));
        m_PrevButton = ButtonWidget.Cast(layoutRoot.FindAnyWidget("btn_prev"));
        m_CloseButton = ButtonWidget.Cast(layoutRoot.FindAnyWidget("btn_close"));
        m_PageCounter = TextWidget.Cast(layoutRoot.FindAnyWidget("page_counter"));
        m_SteamButton = ButtonWidget.Cast(layoutRoot.FindAnyWidget("btn_steam"));
        m_SiteButton = ButtonWidget.Cast(layoutRoot.FindAnyWidget("btn_site"));
        m_GithubButton = ButtonWidget.Cast(layoutRoot.FindAnyWidget("btn_github"));
        m_DiscordButton = ButtonWidget.Cast(layoutRoot.FindAnyWidget("btn_discord"));

        m_CurrentPage = 0;
        ShowPage();
        UpdateButtons();
        ShowTitle();

        return layoutRoot;
    }

    // Zablokowanie gracza po otwarciu menu
    override void OnShow()
    {
        super.OnShow();
        
        PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
        if (player)
            soundPos = player.GetPosition();
        else
            soundPos = "0 0 0"; // Domyślna pozycja

        GetGame().GetMission().PlayerControlDisable(INPUT_EXCLUDE_ALL);
        GetGame().GetInput().ChangeGameFocus(1);
        GetGame().GetUIManager().ShowUICursor(true);
        GetGame().GetMission().GetHud().Show(false);
        
        Print("[SK_Bookcook] Menu otwarte – sterowanie zablokowane");
    }

    override void OnHide()
    {
        super.OnHide();
        
        if (g_SK_BookcookGUIManager && g_SK_BookcookGUIManager.m_BookMenu == this)
        {
            g_SK_BookcookGUIManager.m_BookMenu = null;
        }

        if (GetGame().GetMission())
            GetGame().GetMission().PlayerControlEnable(true);

        GetGame().GetInput().ChangeGameFocus(-1);
        GetGame().GetUIManager().ShowUICursor(false);
        GetGame().GetMission().GetHud().Show(true);
        
        Print("[SK_Bookcook] Menu zamknięte – sterowanie przywrócone");
    }

    void ShowPage()
    {
        if (m_TextWidget)
        {
            string pageText = BookContent.GetPage(m_CurrentPage);
            m_TextWidget.SetText(pageText);
        }

        if (m_PageCounter)
        {
            string counter = string.Format("%1/%2", m_CurrentPage + 1, BookContent.GetPageCount());
            m_PageCounter.SetText(counter);
        }
    }
    
    void UpdateButtons()
    {
        if (m_PrevButton)
            m_PrevButton.Enable(m_CurrentPage > 0);
        if (m_NextButton)
            m_NextButton.Enable(m_CurrentPage < BookContent.GetPageCount() - 1);
    }

    void ShowTitle()
    {
        if (m_TitleWidget)
        {
            string title = BookContent.GetTitle();
            m_TitleWidget.SetText(title);
        }
    }

    override bool OnClick(Widget w, int x, int y, int button)
    {
        if (w == m_NextButton)
        {
            if (m_CurrentPage < BookContent.GetPageCount() - 1)
            {
                m_CurrentPage++;
                ShowPage();
                UpdateButtons();
                m_NextPageSound = SEffectManager.PlaySound("DynamicBookPage_SoundSet", soundPos);
                if (m_NextPageSound)
                {
                    m_NextPageSound.SetSoundVolume(20.0);
                    m_NextPageSound.SetAutodestroy(true);
                }
            }
            return true;
        }

        if (w == m_PrevButton)
        {
            if (m_CurrentPage > 0)
            {
                m_CurrentPage--;
                ShowPage();
                UpdateButtons();
                m_NextPageSound = SEffectManager.PlaySound("DynamicBookPage_SoundSet", soundPos);
                if (m_NextPageSound)
                {
                    m_NextPageSound.SetSoundVolume(20.0);
                    m_NextPageSound.SetAutodestroy(true);
                }
            }
            return true;
        }

        if (w == m_CloseButton)
        {
            m_CloseBookSound = SEffectManager.PlaySound("DynamicBookClose_SoundSet", soundPos);
            if (m_CloseBookSound)
            {
                m_CloseBookSound.SetSoundVolume(20.0);
                m_CloseBookSound.SetAutodestroy(true);
            }
            Close();
            return true;
        }

        links = BookContent.GetLinks();

        if (w == m_SiteButton && links && links.youtube != "")
        {
            GetGame().OpenURL(links.youtube);
            return true;
        }

        if (w == m_GithubButton && links && links.github != "")
        {
            GetGame().OpenURL(links.github);
            return true;
        }

        if (w == m_DiscordButton && links && links.discord != "")
        {
            GetGame().OpenURL(links.discord);
            return true;
        }

        if (w == m_SteamButton && links && links.steam != "")
        {
            GetGame().OpenURL(links.steam);
            return true;
        }

        return false;
    }

    override void Update(float timeslice)
    {
        super.Update(timeslice);

        PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
        if (player && !player.IsAlive())
        {
            Print("[SK_Bookcook] Zamknięcie menu – gracz nie żyje");
            Close();
            return;
        }
    }
}
