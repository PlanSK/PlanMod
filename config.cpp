class CfgPatches
{
	class FirstMod
	{
		requiredAddons[]=
		{
			// ""
		};
	};
};

class CfgMods
{
	class FirstMod
	{
		type = "mod";

		class defs
		{
			class gameScriptModule
			{
				value=""; // when value is filled, default script module entry function name is overwritten by it
				files[]={"PlanMod/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"PlanMod/Scripts/4_World"};
			};
		};
	};
};
