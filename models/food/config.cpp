////////////////////////////////////////////////////////////////////
//DeRap: models\food\config.bin
//Produced from mikero's Dos Tools Dll version 9.94
//https://mikero.bytex.digital/Downloads
//'now' is Fri Sep 26 17:53:01 2025 : 'file' last modified on Sat Sep 20 16:18:05 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class SZEF_GEAR_FOOD
	{
		units[] = {"SzefFood_CanEmpty","SzefFood_CanSalt","SzefFood_CanSugar","SzefFood_CanOcet","SzefFood_MeatMackerel","SzefFood_MeatMackerel_Opened","SzefFood_MeatCarp","SzefFood_MeatCarp_Opened","SzefFood_MeatRabbit","SzefFood_MeatRabbit_Opened","SzefFood_MeatChicken","SzefFood_MeatChicken_Opened","SzefFood_MeatSheep","SzefFood_MeatSheep_Opened","SzefFood_MeatCow","SzefFood_MeatCow_Opened","SzefFood_MeatBear","SzefFood_MeatBear_Opened","SzefFood_MeatWolf","SzefFood_MeatWolf_Opened","SzefFood_MeatPig","SzefFood_MeatPig_Opened","SzefFood_MeatBoar","SzefFood_MeatBoar_Opened","SzefFood_MeatGoat","SzefFood_MeatGoat_Opened","SzefFood_MeatDeer","SzefFood_MeatDeer_Opened","SzefFood_MeatReindeer","SzefFood_MeatReindeer_Opened","SzefFood_MeatFox","SzefFood_MeatFox_Opened","SzefFood_MeatTrout","SzefFood_MeatTrout_Opened","SzefFood_MeatWalleyePollock","SzefFood_MeatWalleyePollock_Opened","SzefFood_MeatSardines","SzefFood_MeatSardines_Opened","SzefFood_CanTomatoes","SzefFood_CanTomatoes_Opened","SzefFood_CanPlum","SzefFood_CanPlum_Opened","SzefFood_CanPear","SzefFood_CanPear_Opened","SzefFood_CanApple","SzefFood_CanApple_Opened","SzefFood_CanPepper","SzefFood_CanPepper_Opened","SzefFood_CanPumpkin","SzefFood_CanPumpkin_Opened","SzefFood_CanPotato","SzefFood_CanPotato_Opened","SzefFood_MeatLard","SzefFood_MeatLard_Opened"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Food"};
	};
};
class CfgVehicles
{
	class PeachesCan;
	class PeachesCan_Opened;
	class SzefFood_CanEmpty: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_CanEmpty_0";
		descriptionShort = "$STR_SzefFood_CanEmpty_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 50;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		inventorySlot[] = {"CanEmpty"};
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_empty.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 0;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_CanSalt: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_CanSalt_0";
		descriptionShort = "$STR_SzefFood_CanSalt_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 50;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		inventorySlot[] = {"canIngredient"};
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_salt.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 40;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_CanSugar: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_CanSugar_0";
		descriptionShort = "$STR_SzefFood_CanSugar_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 50;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		inventorySlot[] = {"CanIngredient"};
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_sugart.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 50;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_CanOcet: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_CanOcet_0";
		descriptionShort = "$STR_SzefFood_CanOcet_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 50;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		inventorySlot[] = {"CanIngredient"};
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_ocet.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 0;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatMackerel: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatMackerel_0";
		descriptionShort = "$STR_SzefFood_MeatMackerel_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_mackerel.paa"};
	};
	class SzefFood_MeatMackerel_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatMackerel_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatMackerel_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_mackerel.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 180;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatCarp: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatCarp_0";
		descriptionShort = "$STR_SzefFood_MeatCarp_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_carp.paa"};
	};
	class SzefFood_MeatCarp_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatCarp_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatCarp_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_carp.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 200;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatRabbit: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatRabbit_0";
		descriptionShort = "$STR_SzefFood_MeatRabbit_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_rabbit.paa"};
	};
	class SzefFood_MeatRabbit_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatRabbit_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatRabbit_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_rabbit.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 200;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatChicken: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatChicken_0";
		descriptionShort = "$STR_SzefFood_MeatChicken_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_chicken.paa"};
	};
	class SzefFood_MeatChicken_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatChicken_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatChicken_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_chicken.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 230;
			water = 60;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatSheep: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatSheep_0";
		descriptionShort = "$STR_SzefFood_MeatSheep_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_sheep.paa"};
	};
	class SzefFood_MeatSheep_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatSheep_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatSheep_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_sheep.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 60;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatCow: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatCow_0";
		descriptionShort = "$STR_SzefFood_MeatCow_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_cow.paa"};
	};
	class SzefFood_MeatCow_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatCow_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatCow_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_cow.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 220;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatBear: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatBear_0";
		descriptionShort = "$STR_SzefFood_MeatBear_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_bear.paa"};
	};
	class SzefFood_MeatBear_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatBear_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatBear_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_bear.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 300;
			water = 80;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatWolf: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatWolf_0";
		descriptionShort = "$STR_SzefFood_MeatWolf_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_wolf.paa"};
	};
	class SzefFood_MeatWolf_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatWolf_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatWolf_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_wolf.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 230;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatPig: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatPig_0";
		descriptionShort = "$STR_SzefFood_MeatPig_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_pig.paa"};
	};
	class SzefFood_MeatPig_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatPig_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatPig_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_pig.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 40;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatBoar: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatBoar_0";
		descriptionShort = "$STR_SzefFood_MeatBoar_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_boar.paa"};
	};
	class SzefFood_MeatBoar_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatBoar_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatBoar_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_boar.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 240;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatGoat: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatGoat_0";
		descriptionShort = "$STR_SzefFood_MeatGoat_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_goat.paa"};
	};
	class SzefFood_MeatGoat_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatGoat_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatGoat_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_goat.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 210;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatDeer: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatDeer_0";
		descriptionShort = "$STR_SzefFood_MeatDeer_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_deer.paa"};
	};
	class SzefFood_MeatDeer_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatDeer_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatDeer_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_deer.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 240;
			water = 60;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatReindeer: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatReindeer_0";
		descriptionShort = "$STR_SzefFood_MeatReindeer_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_reindeer"};
	};
	class SzefFood_MeatReindeer_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatReindeer_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatReindeer_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_reindeer"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 260;
			water = 60;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatFox: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatFox_0";
		descriptionShort = "$STR_SzefFood_MeatFox_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_fox"};
	};
	class SzefFood_MeatFox_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatFox_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatFox_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_fox"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 200;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatTrout: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatTrout_0";
		descriptionShort = "$STR_SzefFood_MeatTrout_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_trout"};
	};
	class SzefFood_MeatTrout_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatTrout_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatTrout_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_trout"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 150;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatWalleyePollock: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatWalleyePollock_0";
		descriptionShort = "$STR_SzefFood_MeatWalleyePollock_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_pollock"};
	};
	class SzefFood_MeatWalleyePollock_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatWalleyePollock_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatWalleyePollock_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_pollock"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 150;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatSardines: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatSardines_0";
		descriptionShort = "$STR_SzefFood_MeatSardines_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_Sardines.paa"};
	};
	class SzefFood_MeatSardines_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatSardines_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatSardines_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\can_meat_Sardines.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 100;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_CanTomatoes: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_cantomatoes_0";
		descriptionShort = "$STR_SzefFood_cantomatoes_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\cantomatoes.paa"};
	};
	class SzefFood_CanTomatoes_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_cantomatoes_Opened_0";
		descriptionShort = "$STR_SzefFood_cantomatoes_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\cantomatoes.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 400;
			water = 100;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_CanPlum: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_canplum_0";
		descriptionShort = "$STR_SzefFood_canplum_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\canplum.paa"};
	};
	class SzefFood_CanPlum_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_canplum_Opened_0";
		descriptionShort = "$STR_SzefFood_canplum_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\canplum.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 400;
			water = 100;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_CanPear: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_canpear_0";
		descriptionShort = "$STR_SzefFood_canpear_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\canpear.paa"};
	};
	class SzefFood_CanPear_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_canpear_Opened_0";
		descriptionShort = "$STR_SzefFood_canpear_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\canpear.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 450;
			water = 150;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_CanApple: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_canapple_0";
		descriptionShort = "$STR_SzefFood_canapple_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\canapple.paa"};
	};
	class SzefFood_CanApple_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_canapple_Opened_0";
		descriptionShort = "$STR_SzefFood_canapple_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\canapple.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 300;
			water = 80;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_CanPepper: PeachesCan
	{
		scope = 2;
		displayName = "$STR_marinated_peppers_0";
		descriptionShort = "$STR_marinated_peppers_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\canpepper.paa"};
	};
	class SzefFood_CanPepper_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_canpepper_Opened_0";
		descriptionShort = "$STR_SzefFood_canpepper_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\canpepper.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 400;
			water = 90;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_CanPumpkin: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_canpumpkin_0";
		descriptionShort = "$STR_SzefFood_canpumpkin_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\canpumpkin.paa"};
	};
	class SzefFood_CanPumpkin_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_canpumpkin_Opened_0";
		descriptionShort = "$STR_SzefFood_canpumpkin_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\canpumpkin.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 350;
			water = 60;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_CanPotato: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_CanPotato_0";
		descriptionShort = "$STR_SzefFood_CanPotato_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\potatos.paa"};
	};
	class SzefFood_CanPotato_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_CanPotato_Opened_0";
		descriptionShort = "$STR_SzefFood_CanPotato_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\potatos.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 400;
			water = 30;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_MeatLard: PeachesCan
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatLard_0";
		descriptionShort = "$STR_SzefFood_MeatLard_1";
		model = "\dz\gear\food\food_can.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\słonina.paa"};
	};
	class SzefFood_MeatLard_Opened: PeachesCan_Opened
	{
		scope = 2;
		displayName = "$STR_SzefFood_MeatLard_Opened_0";
		descriptionShort = "$STR_SzefFood_MeatLard_Opened_1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 440;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\food\data\słonina.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 450;
			water = 90;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
};
