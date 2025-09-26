////////////////////////////////////////////////////////////////////
//DeRap: models\table_kitchen\config.bin
//Produced from mikero's Dos Tools Dll version 9.94
//https://mikero.bytex.digital/Downloads
//'now' is Fri Sep 26 17:53:01 2025 : 'file' last modified on Sat Sep 20 16:18:05 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class SzefKuchni_Table
	{
		units[] = {"SzefKuchni_Table","SzefKuchni_Table_Holo","SzefKuchni_Table_Kit","Pot","AlarmClock_ColorBase"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Gear_Tools","DZ_Gear_Consumables","DZ_Weapons_Melee"};
	};
};
class CfgSlots
{
	class Slot_Szef_Pot
	{
		name = "Szef_Pot";
		displayName = "#Gar";
		ghostIcon = "set:dayz_inventory image:cookingequipment";
	};
	class Slot_Szef_Alarmclock
	{
		name = "Szef_Alarmclock";
		displayName = "#ClockAlarm";
		ghostIcon = "set:szefkuchni image:szef_budzik";
	};
	class Slot_Szef_book
	{
		name = "Szef_book";
		displayName = "#Szef_book";
		ghostIcon = "set:szefkuchni image:szef_book";
	};
	class Slot_Szef_Sugar
	{
		name = "Szef_Sugar";
		displayName = "#Szef_cukier";
		ghostIcon = "set:szefkuchni image:szef_sugar";
	};
	class Slot_Szef_Ocet
	{
		name = "Szef_ocet";
		displayName = "#Szef_ocet";
		ghostIcon = "set:szefkuchni image:szef_ocet";
	};
	class Slot_Salt
	{
		name = "Salt";
		displayName = "#SaltStone";
		ghostIcon = "set:szefkuchni image:szef_sugar";
	};
	class Slot_CanOcet
	{
		name = "CanOcet";
		displayName = "#CanOcet";
		ghostIcon = "set:dayz_inventory image:tincan";
	};
	class Slot_CanSugar
	{
		name = "CanSugar";
		displayName = "#CanSugar";
		ghostIcon = "set:dayz_inventory image:tincan";
	};
	class Slot_CanEmpty
	{
		name = "CanEmpty";
		displayName = "#CanEmpty";
		ghostIcon = "set:dayz_inventory image:tincan";
	};
	class Slot_SaltStone
	{
		name = "SaltStone";
		displayName = "#SaltStone";
		ghostIcon = "set:szefkuchni image:szef_stonesalt";
	};
	class Slot_CanSalt
	{
		name = "CanSalt";
		displayName = "#CanSalt";
		ghostIcon = "set:dayz_inventory image:tincan";
	};
	class Slot_CanIngredient
	{
		name = "canIngredient";
		displayName = "#CanIngredient";
		ghostIcon = "set:dayz_inventory image:tincan";
	};
	class Slot_JarEmpty
	{
		name = "JarEmpty";
		displayName = "#JarEmpty";
		ghostIcon = "set:szefkuchni image:szef_jar";
	};
	class Slot_JarIngredient
	{
		name = "JarIngredient";
		displayName = "#JarIngredient";
		ghostIcon = "set:szefkuchni image:szef_jar";
	};
	class Slot_Danie_1
	{
		name = "Danie_1";
		displayName = "#Ingredient_1";
		selection = "Danie_1";
		ghostIcon = "set:dayz_inventory image:food";
		show = 1;
	};
	class Slot_Danie_2
	{
		name = "Danie_2";
		displayName = "#Ingredient_2";
		selection = "Danie_2";
		ghostIcon = "set:dayz_inventory image:food";
		show = 1;
	};
	class Slot_Danie_3
	{
		name = "Danie_3";
		displayName = "#Ingredient_3";
		selection = "Danie_3";
		ghostIcon = "set:dayz_inventory image:food";
		show = 1;
	};
};
class SzefKuchni_Table
{
	dir = "SzefKuchni";
	picture = "";
	action = "";
	hideName = 1;
	hidePicture = 1;
	name = "SzefKuchni";
	credits = "";
	author = "Mudarken";
	authorID = "0";
	version = "1.0";
	extra = 0;
	type = "mod";
	dependencies[] = {"Game","World","Mission"};
	class defs
	{
		class gameScriptModule
		{
			value = "";
			files[] = {"SzefKuchni/scripts/3_Game"};
		};
		class worldScriptModule
		{
			value = "";
			files[] = {"SzefKuchni/scripts/4_world"};
		};
		class missionScriptModule
		{
			value = "";
			files[] = {"SzefKuchni/scripts/5_Mission"};
		};
		class imageSets
		{
			files[] = {"SzefKuchni\GUI\ImageSets\szefkuchni_icon.imageset"};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class Bottle_Base;
	class MushroomBase;
	class WoodenCrate;
	class PeachesCan_Opened;
	class Rice;
	class SzefKuchni_Table: Container_Base
	{
		scope = 2;
		displayName = "$STR_table";
		descriptionShort = "$STR_Opis_table";
		model = "SzefKuchni\models\table_kitchen\kitchen_table_a.p3d";
		forceFarBubble = "true";
		physLayer = "item_large";
		weight = 100000;
		itemSize[] = {10,50};
		itemBehaviour = 0;
		soundImpactType = "metal";
		overrideDrawArea = "8.0";
		slopeTolerance = 0.2;
		yawPitchRollLimit[] = {45,45,45};
		allowOwnedCargoManipulation = 1;
		destroyOnEmpty = 0;
		class Cargo
		{
			itemsCargoSize[] = {10,4};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		attachments[] = {"Szef_Pot","Szef_book","Szef_Alarmclock","Szef_Sugar","Szef_ocet","CanEmpty","SaltStone","CanSalt","CanIngredient","JarEmpty","jarIngredient","Danie_1","Danie_2","Danie_3","Salt"};
		class GUIInventoryAttachmentsProps
		{
			class SzefKuchniTools
			{
				name = "#Narzędzia";
				description = "";
				attachmentSlots[] = {"Szef_Pot","Szef_book","Szef_Alarmclock"};
				icon = "set:dayz_inventory image:tools";
			};
			class SzefKuchniMaterials
			{
				name = "#puszka";
				description = "";
				attachmentSlots[] = {"CanEmpty","JarEmpty","Salt","Szef_Sugar","Szef_ocet"};
				icon = "set:dayz_inventory image:tincan";
			};
			class SzefKuchniCanning
			{
				name = "#Konserwa";
				description = "";
				attachmentSlots[] = {"canIngredient","jarIngredient","Danie_1","Danie_2","Danie_3"};
				icon = "set:dayz_inventory image:tincan";
			};
		};
	};
	class SzefKuchni_Table_Holo: SzefKuchni_Table
	{
		scope = 2;
		displayName = "#Table_HOLO";
		model = "SzefKuchni\models\table_kitchen\kitchen_table_a.p3d";
	};
	class SzefKuchni_Table_Kit: WoodenCrate
	{
		scope = 2;
		displayName = "$STR_Kit_SzefKuchni_Table";
		descriptionShort = "";
		itemSize[] = {7,5};
		class Cargo{};
	};
	class Pot: Bottle_Base
	{
		scope = 2;
		inventorySlot[] += {"Szef_Pot"};
	};
	class AlarmClock_ColorBase: Inventory_Base
	{
		scope = 2;
		inventorySlot[] += {"Szef_Alarmclock"};
	};
	class Edible_Base: Inventory_Base
	{
		varTemperatureMax = 100;
	};
	class GoatSteakMeat: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class MouflonSteakMeat: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class BoarSteakMeat: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class PigSteakMeat: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class DeerSteakMeat: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class WolfSteakMeat: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class BearSteakMeat: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class CowSteakMeat: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class RabbitLegMeat: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class ChickenBreastMeat: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class BoletusMushroom: MushroomBase
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class AgaricusMushroom: MushroomBase
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class AmanitaMushroom: MushroomBase
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class MacrolepiotaMushroom: MushroomBase
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class LactariusMushroom: MushroomBase
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class PsilocybeMushroom: MushroomBase
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class AuriculariaMushroom: MushroomBase
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class PleurotusMushroom: MushroomBase
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class GreenBellPepper: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class Tomato: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class Zucchini: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class SlicedPumpkin: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class Potato: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class Apple: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class Pear: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class Plum: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class SambucusBerry: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class CaninaBerry: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class CarpFilletMeat: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class MackerelFilletMeat: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class Bitterlings: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class Sardines: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class WalleyePollockFilletMeat: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class SteelheadTroutFilletMeat: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class FoxSteakMeat: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class ReindeerSteakMeat: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class SheepSteakMeat: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
	class Lard: Edible_Base
	{
		inventorySlot[] += {"Danie_1","Danie_2","Danie_3"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySzef_PotProx: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Szef_Pot";
		model = "\SzefKuchni\models\table_kitchen\Proxy\Szef_PotProx.p3d";
	};
	class ProxySzef_AlarmclockProx: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Szef_Alarmclock";
		model = "\SzefKuchni\models\table_kitchen\Proxy\Szef_AlarmclockProx.p3d";
	};
	class ProxyCanEmptyProx: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "CanEmpty";
		model = "\SzefKuchni\models\table_kitchen\Proxy\CanEmptyProx.p3d";
	};
	class ProxySzef_bookProx: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Szef_book";
		model = "\SzefKuchni\models\table_kitchen\Proxy\Szef_bookProx.p3d";
	};
	class ProxySzef_SugarProx: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Szef_Sugar";
		model = "\SzefKuchni\models\table_kitchen\Proxy\Szef_SugarProx.p3d";
	};
	class ProxySzef_OcetProx: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Szef_Ocet";
		model = "\SzefKuchni\models\table_kitchen\Proxy\Szef_OcetProx.p3d";
	};
	class ProxySaltProx: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Salt";
		model = "\SzefKuchni\models\table_kitchen\Proxy\SaltProx.p3d";
	};
	class ProxyJarEmptyProx: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "JarEmpty";
		model = "\SzefKuchni\models\table_kitchen\Proxy\JarEmptyProx.p3d";
	};
	class ProxyDanie_1Prox: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Danie_1";
		model = "\SzefKuchni\models\table_kitchen\Proxy\Danie_1Prox.p3d";
	};
	class ProxyDanie_2Prox: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Danie_2";
		model = "\SzefKuchni\models\table_kitchen\Proxy\Danie_2Prox.p3d";
	};
	class ProxyDanie_3Prox: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Danie_3";
		model = "\SzefKuchni\models\table_kitchen\Proxy\Danie_3Prox.p3d";
	};
	class ProxyJarIngredientProx: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "jarIngredient";
		model = "\SzefKuchni\models\table_kitchen\Proxy\JarIngredientProx.p3d";
	};
	class ProxyCanIngredientProx: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "CanIngredient";
		model = "\SzefKuchni\models\table_kitchen\Proxy\CanIngredientProx.p3d";
	};
};
