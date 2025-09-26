////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.94
//https://mikero.bytex.digital/Downloads
//'now' is Fri Sep 26 17:53:01 2025 : 'file' last modified on Sat Sep 20 16:18:05 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class SzefKuchni
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools"};
		units[] = {};
	};
};
class CfgMods
{
	class SzefKuchni
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
		version = "0.1";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class imageSets
			{
				files[] = {"SzefKuchni/GUI/ImageSets/szefkuchni_icon.imageset"};
			};
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
		};
	};
};
