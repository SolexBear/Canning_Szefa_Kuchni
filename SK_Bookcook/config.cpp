////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.94
//https://mikero.bytex.digital/Downloads
//'now' is Fri Sep 26 17:50:47 2025 : 'file' last modified on Sat Sep 20 15:07:15 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class SK_Bookcook
	{
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Sounds_Effects","DZ_Sounds_Environment"};
		units[] = {"SK_Bookcook","SK_BookcookEN","SK_DayZ"};
		weapons[] = {};
	};
};
class CfgMods
{
	class SK_Bookcook
	{
		dir = "SK_Bookcook";
		name = "DayZ SK_Bookcook";
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"SK_Bookcook/scripts/3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"SK_Bookcook/scripts/4_world"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"SK_Bookcook/scripts/5_mission"};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class SK_Bookcook_Base: Inventory_Base
	{
		scope = 0;
		author = "John Carter";
		title = "Książka Szefa Kuchni";
		descriptionShort = "Zawiera przepisy i porady.";
		model = "\DZ\gear\books\Book_kniga.p3d";
		itemSize[] = {2,2};
		rotationFlags = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SK_Bookcook\data\Book.paa"};
		inventorySlot[] = {"Szef_book","OpenBook","Book1","Book2","Book3","Book4","Book5","Book6","Book7","Book8","Book9","Book10","Book11","Book12","Book13","Book14","Book15","Book16","Book17","Book18","Book19","Book20","Book21","Book22","Book23","Book24","Book25","Book26","Book27","Book28","Book29","Book30","Book31","Book32","Book33","Book34","Book35","Book36","Book37","Book38","Book39","Book40","Book41","Book42","Book43","Book44","Book45","Book46","Book47","Book48","Book49","Book50"};
		physLayer = "item_small";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.0;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.0;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.0;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.0;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.0;
					};
				};
			};
		};
	};
	class SK_Bookcook: SK_Bookcook_Base
	{
		scope = 2;
		displayName = "$STR_cookbook_0";
		descriptionShort = "$STR_cookbook_1";
		hiddenSelectionsTextures[] = {"SK_Bookcook\data\bookcook_co.paa"};
	};
	class SK_BookcookEN: SK_Bookcook
	{
		scope = 2;
		displayName = "$STR_cookbook_0";
		descriptionShort = "$STR_cookbook_1";
		hiddenSelectionsTextures[] = {"SK_Bookcook\data\bookcook_co.paa"};
	};
	class SK_DayZ: SK_Bookcook
	{
		scope = 2;
		displayName = "$STR_Server";
		descriptionShort = "$STR_Server_1";
		hiddenSelectionsTextures[] = {"SK_Bookcook\data\Bookserver.paa"};
	};
};
class CfgSoundSets
{
	class SK_BookcookPage_SoundSet
	{
		soundShaders[] = {"SK_BookcookPage_SoundShader"};
		volumeFactor = 1.0;
		frequencyFactor = 1.0;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SK_BookcookClose_SoundSet
	{
		soundShaders[] = {"SK_BookcookClose_SoundShader"};
		volumeFactor = 1.0;
		frequencyFactor = 1.0;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};
class CfgSoundShaders
{
	class SK_BookcookPage_SoundShader
	{
		samples[] = {{"SK_Bookcook\sounds\FoleandoPage",1}};
		volume = 20.0;
		range = 5;
		limitation = 1;
	};
	class SK_BookcookClose_SoundShader
	{
		samples[] = {{"SK_Bookcook\sounds\BookClose",1}};
		volume = 20.0;
		range = 5;
		limitation = 1;
	};
};
