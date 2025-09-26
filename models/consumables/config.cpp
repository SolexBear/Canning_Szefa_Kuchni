////////////////////////////////////////////////////////////////////
//DeRap: models\consumables\config.bin
//Produced from mikero's Dos Tools Dll version 9.94
//https://mikero.bytex.digital/Downloads
//'now' is Fri Sep 26 17:53:01 2025 : 'file' last modified on Sat Sep 20 16:18:05 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class SZEF_GEAR_CONS
	{
		units[] = {"SzefFood_SaltStone","SzefFood_ocet","SzefFood_Sugar","SzefFood_Emty_Jar","SzefFood_Zucchini_Jar","SzefFood_Peppers_Jar","SzefFood_Plum_Jar","SzefFood_Apple_Jar","SzefFood_PearMarynata_Jar","SzefFood_Pear_Jar","SzefFood_Sugar_Jar","SzefFood_Pieczarki_Jar","SzefFood_Boczniaki_Jar","SzefFood_Rydz_Jar","SzefFood_Borowik_Jar","SzefKuchni_Bookcook","SzefFood_Vinegar_Jar","SzefFood_Pumpkin_Jar","SzefFood_PumpkinMarynata_Jar","SzefFood_Kania_Jar","SzefFood_Salt","SzefFood_CaninaBerry_Jar","SzefFood_SambucusBerry_Jar"};
		weaons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Consumables","DZ_Gear_Food","SK_Bookcook"};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Bottle_Base;
	class Rice;
	class Edible_Base;
	class Marmalade;
	class ItemBook;
	class SzefKuchniBookBase: ItemBook
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\books\Data\book.rvmat"}},{0.7,{"DZ\gear\books\Data\book.rvmat"}},{0.5,{"DZ\gear\books\Data\book_damage.rvmat"}},{0.3,{"DZ\gear\books\Data\book_damage.rvmat"}},{0.0,{"DZ\gear\books\Data\book_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_SaltStone: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_SaltStone_0";
		descriptionShort = "$STR_SaltStone_1";
		model = "\dz\gear\consumables\SmallStone.p3d";
		animClass = "NoFireClass";
		weight = 50;
		itemSize[] = {1,1};
		canBeSplit = 1;
		inventorySlot[] = {"SaltStone"};
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 100;
		varStackMax = 100;
		rotationFlags = 17;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\consumables\data\salt_stone.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\consumables\data\stone.rvmat"}},{0.7,{"DZ\gear\consumables\data\stone.rvmat"}},{0.5,{"DZ\gear\consumables\data\stone_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\stone_damage.rvmat"}},{0,{"DZ\gear\consumables\data\stone_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefKuchni_Bookcook: SzefKuchniBookBase
	{
		scope = 2;
		title = "The_cookbook";
		author = "John Carter";
		model = "\DZ\gear\books\book_kniga.p3d";
		displayName = "$STR_cookbook_0";
		descriptionShort = "$STR_cookbook_1";
		inventorySlot[] = {"Szef_book"};
		itemSize[] = {2,2};
		weight = 1;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\consumables\data\book_cook_co.paa"};
	};
	class SzefFood_ocet: Bottle_Base
	{
		scope = 2;
		displayName = "$STR_Ocet_0";
		descriptionShort = "$STR_Ocet_1";
		model = "SzefKuchni\models\consumables\data\OcetPRL.p3d";
		weight = 450;
		itemSize[] = {1,3};
		inventorySlot[] = {"Szef_ocet"};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varQuantityInit = 700.0;
		varQuantityMin = 0.0;
		varQuantityMax = 700.0;
		varLiquidTypeInit = 702;
		varTemperatureFreezeTime = 4752;
		varTemperatureThawTime = 4752;
		soundImpactType = "glass";
		class AnimEvents
		{
			class SoundWeapon
			{
				class GlassBottle_in_B
				{
					soundSet = "GlassBottle_in_B_SoundSet";
					id = 202;
				};
				class GlassBottle_in_C
				{
					soundSet = "GlassBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class GlassBottle_out_A
				{
					soundSet = "GlassBottle_out_A_SoundSet";
					id = 205;
				};
				class GlassBottle_out_B
				{
					soundSet = "GlassBottle_out_B_SoundSet";
					id = 206;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
			};
		};
	};
	class SzefFood_Sugar: Rice
	{
		scope = 2;
		displayName = "$STR_SzefFood_Cukier_0";
		descriptionShort = "$STR_SzefFood_Cukier_1";
		model = "\dz\gear\food\Rice.p3d";
		inventorySlot[] = {"Szef_Sugar"};
		rotationFlags = 63;
		weight = 130;
		varQuantityInit = 1000.0;
		varQuantityMin = 0.0;
		varQuantityMax = 1000.0;
		itemSize[] = {1,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\consumables\data\cukier_polski_co.paa"};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 100;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_Salt: Rice
	{
		scope = 2;
		displayName = "$STR_SaltStone_0";
		descriptionShort = "$STR_SaltStone_1";
		model = "\dz\gear\food\Rice.p3d";
		inventorySlot[] = {"Salt"};
		rotationFlags = 63;
		weight = 130;
		varQuantityInit = 1000.0;
		varQuantityMin = 0.0;
		varQuantityMax = 1000.0;
		itemSize[] = {1,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\consumables\data\SólPolska.paa"};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 100;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SzefFood_Emty_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_SzefFood_JarEmpty_0";
		descriptionShort = "$STR_SzefFood_JarEmpty_1";
		model = "SzefKuchni\models\consumables\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		inventorySlot[] = {"JarEmpty"};
		class Nutrition
		{
			fullnessIndex = 0;
			energy = 0;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_Sugar_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_Sugar_Jar_0";
		descriptionShort = "$STR_Sugar_Jar_1";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 100;
		varQuantityMin = 0;
		varQuantityMax = 100;
		inventorySlot[] = {"JarIngredient"};
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\consumables\data\CukierJam_ca.paa","\SzefKuchni\models\consumables\data\CukierJam_ca.paa"};
		class Nutrition
		{
			fullnessIndex = 0;
			energy = 70;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_Vinegar_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_Vinegar_Jar_0";
		descriptionShort = "$STR_Vinegar_Jar_1";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 100;
		varQuantityMin = 0;
		varQuantityMax = 100;
		inventorySlot[] = {"JarIngredient"};
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\consumables\data\OcetJar.paa","\SzefKuchni\models\consumables\data\OcetJar.paa"};
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 0;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_Zucchini_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_marinated_zucchini_0";
		descriptionShort = "$STR_marinated_zucchini_1";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\consumables\data\cukiniaOcet.paa","\SzefKuchni\models\consumables\data\cukiniaOcet.paa"};
		class Nutrition
		{
			fullnessIndex = 5;
			energy = 400;
			water = 80;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_Peppers_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_marinated_peppers_0";
		descriptionShort = "$STR_marinated_peppers_1";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\consumables\data\papryka maryn_ca.paa","\SzefKuchni\models\consumables\data\papryka maryn_ca.paa"};
		class Nutrition
		{
			fullnessIndex = 5;
			energy = 410;
			water = 80;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_Plum_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_plum_jam_0";
		descriptionShort = "$STR_plum_jam_1";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\consumables\data\powidla_ca.paa","\SzefKuchni\models\consumables\data\powidla_ca.paa"};
		class Nutrition
		{
			fullnessIndex = 5;
			energy = 450;
			water = 80;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_Apple_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_apple_jam_0";
		descriptionShort = "$STR_apple_jam_1";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\consumables\data\AppleJam_ca.paa","SzefKuchni\models\consumables\data\AppleJam_ca.paa"};
		class Nutrition
		{
			fullnessIndex = 5;
			energy = 350;
			water = 90;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_Pear_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_pear_jam_0";
		descriptionShort = "$STR_pear_jam_1";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\consumables\data\gruszkaJam_ca.paa","\SzefKuchni\models\consumables\data\gruszkaJam_ca.paa"};
		class Nutrition
		{
			fullnessIndex = 5;
			energy = 440;
			water = 90;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_Pumpkin_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_Pumpkin_jam_0";
		descriptionShort = "$STR_Pumpkin_jam_1";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\consumables\data\PupkinJam_ca.paa","\SzefKuchni\models\consumables\data\PupkinJam_ca.paa"};
		class Nutrition
		{
			fullnessIndex = 5;
			energy = 480;
			water = 100;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_CaninaBerry_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_CaninaBerry_jam_0";
		descriptionShort = "$STR_CaninaBerry_jam_1";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\consumables\data\Konfitura_Roza_ca.paa","\SzefKuchni\models\consumables\data\Konfitura_Roza_ca.paa"};
		class Nutrition
		{
			fullnessIndex = 5;
			energy = 480;
			water = 100;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_SambucusBerry_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_SambucusBerry_jam_0";
		descriptionShort = "$STR_SambucusBerry_jam_1";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\consumables\data\konfitura_bez_ca.paa","\SzefKuchni\models\consumables\data\konfitura_bez_ca.paa"};
		class Nutrition
		{
			fullnessIndex = 5;
			energy = 480;
			water = 100;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_PumpkinMarynata_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_Pumpkin_marynata_0";
		descriptionShort = "$STR_Pumpkin_marynata_1";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\consumables\data\dyniamarynata_ca.paa","\SzefKuchni\models\consumables\data\dyniamarynata_ca.paa"};
		class Nutrition
		{
			fullnessIndex = 5;
			energy = 440;
			water = 90;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_PearMarynata_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_Pear_marynata_0";
		descriptionShort = "$STR_Pear_marynata_1";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\consumables\data\gruszkaMaryn_ca.paa","\SzefKuchni\models\consumables\data\gruszkaMaryn_ca.paa"};
		class Nutrition
		{
			fullnessIndex = 5;
			energy = 430;
			water = 80;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_Pieczarki_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_marinated_Pieczarki_0";
		descriptionShort = "$STR_marinated_Pieczarki_1";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\consumables\data\piczarki marynowane.paa","\SzefKuchni\models\consumables\data\piczarki marynowane.paa"};
		class Nutrition
		{
			fullnessIndex = 5;
			energy = 450;
			water = 70;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_Boczniaki_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_marinated_Boczniaki_0";
		descriptionShort = "$STR_marinated_Boczniaki_1";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\consumables\data\boczniaki_ca.paa","\SzefKuchni\models\consumables\data\boczniaki_ca.paa"};
		class Nutrition
		{
			fullnessIndex = 5;
			energy = 450;
			water = 70;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_Rydz_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_marinated_Rydz_0";
		descriptionShort = "$STR_marinated_Rydz_1";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\consumables\data\rydz_ca.paa","\SzefKuchni\models\consumables\data\rydz_ca.paa"};
		class Nutrition
		{
			fullnessIndex = 5;
			energy = 450;
			water = 70;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_Borowik_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_marinated_Borowik_0";
		descriptionShort = "$STR_marinated_Borowik_1";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\consumables\data\borowik_ca.paa","\SzefKuchni\models\consumables\data\borowik_ca.paa"};
		class Nutrition
		{
			fullnessIndex = 5;
			energy = 450;
			water = 70;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
	class SzefFood_Kania_Jar: Marmalade
	{
		scope = 2;
		displayName = "$STR_marinated_Kania_0";
		descriptionShort = "$STR_marinated_Kania_1";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = {2,2};
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\consumables\data\Kania_ca.paa","\SzefKuchni\models\consumables\data\Kania_ca.paa"};
		class Nutrition
		{
			fullnessIndex = 5;
			energy = 450;
			water = 70;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.7,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.3,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
	};
};
class cfgLiquidDefinitions
{
	class VINEGARLiquid
	{
		type = 702;
		displayName = "OCET";
		flammability = 60;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = -10;
			water = 0;
			nutritionalIndex = 75;
			toxicity = 1;
			digestibility = 2;
			agents = 16;
		};
	};
};
