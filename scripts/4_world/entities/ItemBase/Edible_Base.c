modded class Edible_Base extends ItemBase
{
	void SpawnEmptyCan (string typeName)
	{
		PlayerBase player = PlayerBase.Cast(GetHierarchyRootPlayer());
		if (player)
		{
            ItemBase item = ItemBase.Cast(GetGame().CreateObject(typeName, player.GetPosition()));
		}
	}
}
class SzefFood_MeatMackerel : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SzefFood_MeatMackerel_Opened");
	}	
}
class SzefFood_MeatCarp : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SzefFood_MeatCarp_Opened");
	}
}
class SzefFood_MeatRabbit : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SzefFood_MeatRabbit_Opened");
	}
}
class SzefFood_MeatChicken : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SzefFood_MeatChicken_Opened");
	}
}
class SzefFood_MeatSheep : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SzefFood_MeatSheep_Opened");
	}
}
class SzefFood_MeatCow : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SzefFood_MeatCow_Opened");
	}
}
class SzefFood_MeatBear : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SzefFood_MeatBear_Opened");
	}
}
class SzefFood_MeatWolf : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SzefFood_MeatWolf_Opened");
	}
}
class SzefFood_MeatPig : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SzefFood_MeatPig_Opened");
	}
}
class SzefFood_MeatBoar : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SzefFood_MeatBoar_Opened");
	}
}
class SzefFood_MeatGoat : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SzefFood_MeatGoat_Opened");
	}
}
class SzefFood_MeatDeer : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SzefFood_MeatDeer_Opened");
	}
}
class SzefFood_MeatReindeer : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SzefFood_MeatReindeer_Opened");
	}
}
class SzefFood_MeatFox : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SzefFood_MeatFox_Opened");
	}
}
class SzefFood_MeatTrout : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SzefFood_MeatTrout_Opened");
	}
}
class SzefFood_MeatWalleyePollock : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SzefFood_MeatWalleyePollock_Opened");
	}
}
class SzefFood_MeatSardines : Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SzefFood_MeatSardines_Opened");
	}
}