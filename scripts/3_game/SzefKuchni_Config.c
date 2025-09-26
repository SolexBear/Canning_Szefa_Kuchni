class SzefKuchni_Config
{
    static ref SzefKuchni_ConfigData m_Config;
    static const string FOLDER = "$profile:SzefKuchni";
    static const string FILE = FOLDER + "/canning_ingredient.json";

    static void Init()
    {
        if (!FileExist(FOLDER))
            MakeDirectory(FOLDER);

        if (!FileExist(FILE))
        {
            m_Config = new SzefKuchni_ConfigData();
            JsonFileLoader<SzefKuchni_ConfigData>.JsonSaveFile(FILE, m_Config);
        }
        else
        {
            m_Config = new SzefKuchni_ConfigData();
            JsonFileLoader<SzefKuchni_ConfigData>.JsonLoadFile(FILE, m_Config);
        }
    }

    static float GetRequiredSalt()
    {
        if (!m_Config) Init();
        return m_Config.RequiredSalt;
    }

    static float GetRequiredSugar()
    {
        if (!m_Config) Init();
        return m_Config.RequiredSugar;
    }

    static float GetRequiredOcet()
    {
        if (!m_Config) Init();
        return m_Config.RequiredOcet;
    }

    static float GetRequiredMeat(string meatType)
    {
        if (!m_Config) Init();
        if (m_Config.RequiredMeat.Contains(meatType))
            return m_Config.RequiredMeat.Get(meatType);
        return 300;
    }

    static float GetRequiredFruit(string fruitType)
    {
        if (!m_Config) Init();
        if (m_Config.RequiredFruit.Contains(fruitType))
            return m_Config.RequiredFruit.Get(fruitType);
        return 200;
    }

    static float GetRequiredPickle(string type)
    {
        if (!m_Config) Init();
        if (m_Config.RequiredPickle.Contains(type))
            return m_Config.RequiredPickle.Get(type);
        return 150;
    }

    static float GetRequiredJam(string type)
    {
        if (!m_Config) Init();
        if (m_Config.RequiredJam.Contains(type))
            return m_Config.RequiredJam.Get(type);
        return 150;
    }
}