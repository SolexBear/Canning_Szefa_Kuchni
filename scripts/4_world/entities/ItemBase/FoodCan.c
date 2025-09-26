class SzefKuchni_MeatMackerel_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefKuchni_MeatLard_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefKuchni_MeatCarp_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefKuchni_MeatRabbit_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefKuchni_MeatChicken_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefKuchni_MeatSheep_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_MeatCow_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_MeatPig_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_MeatBoar_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_MeatGoat_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_MeatWolf_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_MeatDeer_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_MeatReindeer_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_MeatFox_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_MeatTrout_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_MeatWalleyePollock_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_MeatSardines_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_MeatBear_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_CanOcet: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_CanSugar: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_CanSalt: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_CanTomatoes_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_CanPlum_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_CanPear_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_CanApple_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_CanPepper_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_CanPumpkin_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
class SzefFood_CanPotato_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedCan);
		AddAction(ActionEatCan);
	}
};
modded class BakedBeansCan_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
};


modded class UnknownFoodCan_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
};

modded class PeachesCan_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
};

modded class SpaghettiCan_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
};
modded class TacticalBaconCan_Opened: Edible_Base
{
	override bool Consume(float amount, PlayerBase consumer)
	{
		AddQuantity(-amount, false, false);
		OnConsume(amount, consumer);
		if (GetQuantity() < 1)
		{
			SpawnEmptyCan("SzefFood_CanEmpty");
		}
		return true;
	}
};
