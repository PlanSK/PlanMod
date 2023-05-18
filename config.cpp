class CfgPatches {
	class FirstMod {
		requiredAddons[]={
			// ""
		};
	};
};

class CfgMods
{
	class FirstMod {
		type = "mod";

		class defs {
			class gameScriptModule {
				value="";
				files[]={"PlanMod/scripts/3_Game"};
			};
			class worldScriptModule {
				value = "";
				files[] = {"PlanMod/Scripts/4_World"};
			};
			class missionScriptModule {
				value = "";
				files[] = { "PlanMod/scripts/5_Mission" };
			};
		};
	};
};
