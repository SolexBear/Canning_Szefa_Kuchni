////////////////////////////////////////////////////////////////////
//DeRap: models\tools\config.bin
//Produced from mikero's Dos Tools Dll version 9.94
//https://mikero.bytex.digital/Downloads
//'now' is Fri Sep 26 17:53:02 2025 : 'file' last modified on Sat Sep 20 16:18:05 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class SZEF_GEAR_TOOLS
	{
		units[] = {"SzefTool_WeaponCleaningKit","SzefTool_Whetstone","SzefTool_LeatherSewingKit","SzefTool_SewingKit"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Tools"};
	};
};
class CfgVehicles
{
	class WeaponCleaningKit;
	class SzefTool_WeaponCleaningKit: WeaponCleaningKit
	{
		scope = 2;
		displayName = "#SzefTool_WeaponCleaningKit_0";
		descriptionShort = "#SzefTool_WeaponCleaningKit_1";
		model = "\dz\gear\tools\cleaning_kit_wood.p3d";
		debug_ItemCategory = 2;
		animClass = "Knife";
		rotationFlags = 17;
		stackedUnit = "percentage";
		quantityBar = 1;
		varQuantityInit = 1000;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		weight = 3500;
		itemSize[] = {3,3};
		fragility = 0.01;
		repairKitType = 1;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\tools\data\new_cleaning_kit.paa"};
	};
	class Whetstone;
	class SzefTool_Whetstone: Whetstone
	{
		scope = 2;
		debug_ItemCategory = 2;
		displayName = "#SzefTool_Whetstone_0";
		descriptionShort = "#SzefTool_Whetstone_1";
		model = "\dz\gear\tools\whetstone.p3d";
		animClass = "Knife";
		rotationFlags = 34;
		stackedUnit = "percentage";
		quantityBar = 1;
		varQuantityInit = 1000;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		weight = 1500;
		itemSize[] = {1,2};
		repairKitType = 4;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SzefKuchni\models\tools\data\new_whetstone.paa"};
	};
	class LeatherSewingKit;
	class SzefTool_LeatherSewingKit: LeatherSewingKit
	{
		scope = 2;
		displayName = "#SzefTool_LeatherSewingKit_0";
		descriptionShort = "#SzefTool_LeatherSewingKit_1";
		model = "\dz\gear\tools\leather_sewing_kit.p3d";
		debug_ItemCategory = 2;
		animClass = "Knife";
		rotationFlags = 1;
		stackedUnit = "percentage";
		quantityBar = 1;
		varQuantityInit = 1000;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		weight = 5000;
		weightPerQuantityUnit = 0.3;
		itemSize[] = {2,3};
		fragility = 0.01;
		repairKitType = 3;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\tools\data\new_leather_sewing_kit.paa"};
	};
	class SewingKit;
	class SzefTool_SewingKit: SewingKit
	{
		scope = 2;
		displayName = "#SzefTool_SewingKit_0";
		descriptionShort = "#SzefTool_SewingKit_1";
		model = "\dz\gear\tools\sewing_kit.p3d";
		debug_ItemCategory = 2;
		animClass = "Knife";
		rotationFlags = 17;
		stackedUnit = "percentage";
		quantityBar = 1;
		varQuantityInit = 1000;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		itemSize[] = {1,2};
		weight = 1500;
		fragility = 0.01;
		repairKitType = 2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"\SzefKuchni\models\tools\data\new_sewingkit.paa"};
	};
};
