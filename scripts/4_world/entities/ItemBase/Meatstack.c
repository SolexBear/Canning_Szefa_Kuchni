modded class Edible_Base
{
    static ref array<string> allowedMeats = {
    // Mięso
    "BearSteakMeat", "BoarSteakMeat", "ChickenBreastMeat", "CowSteakMeat",
    "DeerSteakMeat", "FoxSteakMeat", "GoatSteakMeat", "PigSteakMeat",
    "RabbitLegMeat", "ReindeerSteakMeat", "SheepSteakMeat", "WolfSteakMeat",

    // Ryby
    "CarpFilletMeat", "MackerelFilletMeat", "Sardines", "WalleyePollockFilletMeat",
    "SteelheadTroutFilletMeat",

    // Owoce i warzywa
    "Apple", "Plum", "Pear", "Banana", "Orange", "Tomato", "GreenBellPepper",
    "Zucchini", "SlicedPumpkin", "Potato", "Kiwi",

    // Jagody i tłuszcz
    "SambucusBerry", "CaninaBerry", "Lard",

    // Grzyby
    "PleurotusMushroom", "BoletusMushroom", "AuriculariaMushroom", "PsilocybeMushroom",
    "LactariusMushroom", "MacrolepiotaMushroom", "AmanitaMushroom",
    "AgaricusMushroom", "CraterellusMushroom"
};

    bool can_this_be_combined;

override void OnInventoryEnter(Man player)
{
    super.OnInventoryEnter(player);

    // Filtr: tylko jeśli obiekt jest na liście "allowedMeats"
    if (!IsAllowedMeatType(this))
        return;

    can_this_be_combined = false;

    if (IsInsideMeatBowl(this))
    {
        if (IsAllowedMeatType(this))
        {
            Print("✅ W misce - można stakować!");
            can_this_be_combined = true;
        }
        else
        {
            Print("❌ W garnku, ale nie na liście - zachowanie domyślne.");
        }
    }
    else
    {
        Print("⚠️ Poza miską - zachowanie domyślne.");
    }
}

    bool IsInsideMeatBowl(ItemBase item)
    {
        if (!item) return false;

        EntityAI parent = item.GetHierarchyParent();
        if (!parent) return false;

        return parent.GetType() == "Pot";
    }

    bool IsAllowedMeatType(ItemBase item)
    {
        if (!item) return false;

        return allowedMeats.Find(item.GetType()) != -1;
    }
void SpawnEmptyJar(string jarType)
{
    PlayerBase player = PlayerBase.Cast(GetHierarchyRootPlayer());
    if (!player)
    {
        Print("❌ Błąd: Nie znaleziono gracza.");
        return;
    }

    if (!GetGame().ConfigIsExisting("CfgVehicles " + jarType))
    {
        Print("Obiekt " + jarType + " nie istnieje! Używam domyślnego słoika.");
        jarType = "SzefFood_Emty_Jar";
    }

    vector spawnPos = player.GetPosition();
    EntityAI emptyJar = EntityAI.Cast(GetGame().CreateObject(jarType, spawnPos, false));
       if (emptyJar)
    {
        Print("✅ Spawned jar: " + jarType + " at " + spawnPos);
    }
        else
    {
        Print("❌ Błąd: Nie udało się stworzyć obiektu typu EntityAI: " + jarType);
    }
}


} // ⬅️ Zamykający nawias klasy
