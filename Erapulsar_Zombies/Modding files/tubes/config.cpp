class CfgPatches
{
	class Erapulsar_Zombies_Items_TubesMDF
	{
		units[] = {"Era_Z_tubeR_red_s","Era_Z_tubeR_blue_s","Era_Z_tubeR_yellow_s","Era_Z_tubeR_green_s","Era_Z_tubeO_red_m","Era_Z_tubeO_blue_m","Era_Z_tubeO_yellow_m","Era_Z_tubeO_green_m","Era_Z_tubeB_red_h","Era_Z_tubeB_blue_h","Era_Z_tubeB_yellow_h","Era_Z_tubeB_green_h"};
		requiredVersion = 0.1;
		requiredAddons[]= {"DZ_Data","Erapulsar_Zombies_Items_Tubes"};
	};
};
class CfgVehicles
{
    //Standart zombie tubes "tubeR" = tube red, "_s" = standart
    //Medium zombie tubes "tubeO" = tube orange, "_m" = medium
    //Medium zombie tubes "tubeB" = tube blue , "_h" = hard
    class Inventory_Base;
	class Era_Z_TubesBase: Inventory_Base
	{
		scope = 0;
		itemSize[]={1,2};
		weight=50;
		model = "Erapulsar_Zombies\data\tubes\tube.p3d";
		hiddenSelections[] = {"camoVirus"};
		hiddenSelectionsMaterials[] = {"Erapulsar_Zombies\data\tubes\data\tube.rvmat"};
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\tubes\data\tube_co.paa"};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"Erapulsar_Zombies\data\tubes\data\tube.rvmat"}},{0.7,{"Erapulsar_Zombies\data\tubes\data\tube.rvmat"}},{0.5,{"Erapulsar_Zombies\data\tubes\data\tube_damage.rvmat"}},{0.3,{"Erapulsar_Zombies\data\tubes\data\tube_damage.rvmat"}},{0.0,{"Erapulsar_Zombies\data\tubes\data\tube_destruct.rvmat"}}};
				};
			};
		};
	};
	class Era_Z_tubeR_red_s: Era_Z_TubesBase
	{
		scope = 2;
		displayName = "$STR_EraTubes_VirusStandart0";
		descriptionShort = "$STR_EraTubes_VirusStandart1";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\tubes\data\tubeR_red_s_co.paa"};
	};
	class Era_Z_tubeR_blue_s: Era_Z_TubesBase
	{
		scope = 2;
		displayName = "$STR_EraTubes_VirusStandart0";
		descriptionShort = "$STR_EraTubes_VirusStandart1";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\tubes\data\tubeR_blue_s_co.paa"};
	};
	class Era_Z_tubeR_yellow_s: Era_Z_TubesBase
	{
		scope = 2;
		displayName = "$STR_EraTubes_VirusStandart0";
		descriptionShort = "$STR_EraTubes_VirusStandart1";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\tubes\data\tubeR_yellow_s_co.paa"};
	};
	class Era_Z_tubeR_green_s: Era_Z_TubesBase
	{
		scope = 2;
		displayName = "$STR_EraTubes_VirusStandart0";
		descriptionShort = "$STR_EraTubes_VirusStandart1";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\tubes\data\tubeR_green_s_co.paa"};
	};
	class Era_Z_tubeO_red_m: Era_Z_TubesBase
	{
		scope = 2;
		displayName = "$STR_EraTubes_VirusMedium0";
		descriptionShort = "$STR_EraTubes_VirusMedium1";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\tubes\data\tubeO_red_m_co.paa"};
	};
	class Era_Z_tubeO_blue_m: Era_Z_TubesBase
	{
		scope = 2;
		displayName = "$STR_EraTubes_VirusMedium0";
		descriptionShort = "$STR_EraTubes_VirusMedium1";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\tubes\data\tubeO_blue_m_co.paa"};
	};
	class Era_Z_tubeO_yellow_m: Era_Z_TubesBase
	{
		scope = 2;
		displayName = "$STR_EraTubes_VirusMedium0";
		descriptionShort = "$STR_EraTubes_VirusMedium1";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\tubes\data\tubeO_yellow_m_co.paa"};
	};
	class Era_Z_tubeO_green_m: Era_Z_TubesBase
	{
		scope = 2;
		displayName = "$STR_EraTubes_VirusMedium0";
		descriptionShort = "$STR_EraTubes_VirusMedium1";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\tubes\data\tubeO_green_m_co.paa"};
	};
	class Era_Z_tubeB_red_h: Era_Z_TubesBase
	{
		scope = 2;
		displayName = "$STR_EraTubes_VirusHard0";
		descriptionShort = "$STR_EraTubes_VirusHard1";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\tubes\data\tubeB_red_h_co.paa"};
	};
	class Era_Z_tubeB_blue_h: Era_Z_TubesBase
	{
		scope = 2;
		displayName = "$STR_EraTubes_VirusHard0";
		descriptionShort = "$STR_EraTubes_VirusHard1";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\tubes\data\tubeB_blue_h_co.paa"};
	};
	class Era_Z_tubeB_yellow_h: Era_Z_TubesBase
	{
		scope = 2;
		displayName = "$STR_EraTubes_VirusHard0";
		descriptionShort = "$STR_EraTubes_VirusHard1";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\tubes\data\tubeB_yellow_h_co.paa"};
	};
	class Era_Z_tubeB_green_h: Era_Z_TubesBase
	{
		scope = 2;
		displayName = "$STR_EraTubes_VirusHard0";
		descriptionShort = "$STR_EraTubes_VirusHard1";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\tubes\data\tubeB_green_h_co.paa"};
	};
}; 