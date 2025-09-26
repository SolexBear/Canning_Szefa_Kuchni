class SzefFood_Ocet_jar: Edible_Base
{
    override bool Consume(float amount, PlayerBase consumer)
    {
        AddQuantity(-amount, false, false);
        OnConsume(amount, consumer);
        if (GetQuantity() < 1)
        {
            SpawnEmptyJar("SzefFood_Emty_Jar"); // ✅ Poprawione
        }
        return true;
    }
    
    override bool CanDecay() { return true; }
    override bool CanProcessDecay() { return !( GetAgents() & eAgents.FOOD_POISON ); }

    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionForceFeedCan);
        AddAction(ActionEatCan);
    }
};

// ⬇️ Powiel ten wzór dla reszty klas słoików! ⬇️

class SzefFood_Zucchini_Jar: Edible_Base
{
    override bool Consume(float amount, PlayerBase consumer)
    {
        AddQuantity(-amount, false, false);
        OnConsume(amount, consumer);
        if (GetQuantity() < 1)
        {
            SpawnEmptyJar("SzefFood_Emty_Jar"); // ✅ Poprawione
        }
        return true;
    }
    
    override bool CanDecay() { return true; }
    override bool CanProcessDecay() { return !( GetAgents() & eAgents.FOOD_POISON ); }

    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionForceFeedCan);
        AddAction(ActionEatCan);
    }
};

// 🛠 **Dla puszek pozostaw `SpawnEmptyCan()`, np. dla miodu i marmolady**
modded class Honey: Edible_Base
{
    override bool Consume(float amount, PlayerBase consumer)
    {
        AddQuantity(-amount, false, false);
        OnConsume(amount, consumer);
        if (GetQuantity() < 1)
        {
            SpawnEmptyJar("SzefFood_Emty_Jar"); // ✅ Poprawione
        }
        return true;
    }
};

modded class Marmalade: Edible_Base
{
    override bool Consume(float amount, PlayerBase consumer)
    {
        AddQuantity(-amount, false, false);
        OnConsume(amount, consumer);
        if (GetQuantity() < 1)
        {
            SpawnEmptyJar("SzefFood_Emty_Jar"); // ✅ Poprawione
        }
        return true;
    }
};
