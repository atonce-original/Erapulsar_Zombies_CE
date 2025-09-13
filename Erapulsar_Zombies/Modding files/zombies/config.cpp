class CfgPatches
{
	class Era_ZombiesMDF
	{
		units[]= 
		{
			"Hermit_NewAI","Era_Zombies_BabyZmb","Era_Zombies_BabyZmb_MEDIUM","Era_Zombies_BabyZmb_HARD","Era_Zombies_Clot","Era_Zombies_Clot_MEDIUM","Era_Zombies_Clot_HARD","Era_Zombies_feeder","Era_Zombies_feeder_MEDIUM","Era_Zombies_feeder_HARD","Era_Zombies_Golovastik","Era_Zombies_Golovastik_MEDIUM","Era_Zombies_Golovastik_HARD","Era_Zombies_Kleshni","Era_Zombies_Kleshni_MEDIUM","Era_Zombies_Kleshni_HARD","Era_Zombies_Krovosos","Era_Zombies_Krovosos_MEDIUM","Era_Zombies_Krovosos_HARD","Era_Zombies_MumiaSlowZmb","Era_Zombies_MumiaSlowZmb_MEDIUM","Era_Zombies_MumiaSlowZmb_HARD","Era_Zombies_MurderZmb","Era_Zombies_MurderZmb_MEDIUM","Era_Zombies_MurderZmb_HARD","Era_Zombies_snork","Era_Zombies_snork_MEDIUM","Era_Zombies_snork_HARD","Era_Zombies_StlZomb1","Era_Zombies_StlZomb2","Era_Zombies_StlZomb3","Era_Zombies_StlZomb4","Era_Zombies_StlZomb5","Era_Zombies_StlZomb6","Era_Zombies_StlZomb7","Era_Zombies_StlZomb8","Era_Zombies_Zombie","Era_Zombies_Zombie_MEDIUM","Era_Zombies_Zombie_HARD","Era_Zombies_Zubastik1","Era_Zombies_Zubastik1_MEDIUM","Era_Zombies_Zubastik1_HARD","Era_Zombies_Zubastik2","Era_Zombies_Zubastik2_MEDIUM","Era_Zombies_Zubastik2_HARD","Era_Zombies_Zubastik3","Era_Zombies_Zubastik3_MEDIUM","Era_Zombies_Zubastik3_HARD","Era_Zombies_Possessed","Era_Zombies_Possessed_MEDIUM","Era_Zombies_Possessed_HARD"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= {"DZ_Characters","EZF_Era_ZombieBase","Era_Zombies"}; 
	};
};
class CfgVehicles
{
	class DZ_LightAI;
	class DayZInfected: DZ_LightAI{};
	class Era_ZombieBase;
	class Era_ZombieFemaleBase;
	class Era_ZombieMaleBase;	
	class Era_ZombieFemaleMEDIUM_Base;
	class Era_ZombieMaleMEDIUM_Base;
	class Era_ZombieMaleHARD_Base;
	class Era_ZombieFemaleHARD_Base;
	class Era_Zombies_BabyZmb: Era_ZombieFemaleBase 
	{
		scope = 2;
		model = "Erapulsar_Zombies\data\BabyZmb.p3d";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\texts\baby\baby_jane02_co.paa"};
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeR_red_s";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_BabyZmb_MEDIUM : Era_ZombieFemaleMEDIUM_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\BabyZmb.p3d";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\texts\baby\baby_jane_medium_co.paa"};
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeO_red_m";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_BabyZmb_HARD :Era_ZombieFemaleHARD_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\BabyZmb.p3d";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\texts\baby\baby_jane_hard_co.paa"};
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeB_red_h";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Clot : Era_ZombieMaleBase 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Clot.p3d";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\texts\Clot\clot_co.paa"};
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeR_blue_s";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Clot_MEDIUM :Era_ZombieMaleMEDIUM_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Clot.p3d";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\texts\Clot\clot_Medium_co.paa"};
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeO_blue_m";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Clot_HARD :Era_ZombieMaleHARD_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Clot.p3d";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\texts\Clot\clot_Hard_co.paa"};
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeB_blue_h";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_feeder :Era_ZombieMaleBase 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\feeder.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeR_blue_s";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_feeder_MEDIUM :Era_ZombieMaleMEDIUM_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\feeder.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeO_blue_m";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_feeder_HARD :Era_ZombieMaleHARD_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\feeder.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeB_blue_h";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Golovastik :Era_ZombieMaleBase 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Golovastik.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeR_yellow_s";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Golovastik_MEDIUM :Era_ZombieMaleMEDIUM_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Golovastik.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeO_yellow_m";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Golovastik_HARD :Era_ZombieMaleHARD_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Golovastik.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeB_yellow_h";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Kleshni :Era_ZombieMaleBase 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Kleshni.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeR_yellow_s";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Kleshni_MEDIUM :Era_ZombieMaleMEDIUM_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Kleshni.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeO_yellow_m";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Kleshni_HARD :Era_ZombieMaleHARD_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Kleshni.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeB_yellow_h";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Krovosos :Era_ZombieMaleBase 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Krovosos.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeR_green_s";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Krovosos_MEDIUM :Era_ZombieMaleMEDIUM_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Krovosos.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeO_green_m";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Krovosos_HARD :Era_ZombieMaleHARD_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Krovosos.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeB_green_h";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_MumiaSlowZmb :Era_ZombieMaleBase 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\MumiaSlowZmb.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeR_green_s";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_MumiaSlowZmb_MEDIUM :Era_ZombieMaleMEDIUM_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\MumiaSlowZmb.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeO_green_m";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_MumiaSlowZmb_HARD :Era_ZombieMaleHARD_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\MumiaSlowZmb.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeB_green_h";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_MurderZmb :Era_ZombieMaleBase 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\MurderZmb.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeR_red_s";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_MurderZmb_MEDIUM :Era_ZombieMaleMEDIUM_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\MurderZmb.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeO_red_m";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_MurderZmb_HARD :Era_ZombieMaleHARD_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\MurderZmb.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeB_red_h";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_snork :Era_ZombieMaleBase 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\snork.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeR_green_s";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_snork_MEDIUM :Era_ZombieMaleMEDIUM_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\snork.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeO_green_m";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_snork_HARD :Era_ZombieMaleHARD_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\snork.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeB_green_h";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_StlZomb1 :Era_ZombieMaleBase 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\StlZomb.p3d";
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\texts\StlZomb\act_zombie_1.paa"};
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeR_red_s";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_StlZomb2 :Era_Zombies_StlZomb1 
	{
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\texts\StlZomb\act_zombie_2.paa"};
	};
	class Era_Zombies_StlZomb3 :Era_Zombies_StlZomb1 
	{
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\texts\StlZomb\act_zombie_3.paa"};
	};
	class Era_Zombies_StlZomb4 :Era_Zombies_StlZomb1 
	{
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\texts\StlZomb\act_zombie_4.paa"};
	};
	class Era_Zombies_StlZomb5 :Era_Zombies_StlZomb1 
	{
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\texts\StlZomb\act_zombie_5.paa"};
	};
	class Era_Zombies_StlZomb6 :Era_Zombies_StlZomb1 
	{
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\texts\StlZomb\act_zombie_6.paa"};
	};
	class Era_Zombies_StlZomb7 :Era_Zombies_StlZomb1 
	{
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\texts\StlZomb\act_zombie_7.paa"};
	};
	class Era_Zombies_StlZomb8 :Era_Zombies_StlZomb1 
	{
		hiddenSelectionsTextures[]={"Erapulsar_Zombies\data\texts\StlZomb\act_zombie_8.paa"};
	};
	class Era_Zombies_Zombie :Era_ZombieMaleBase 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Zombie.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeR_yellow_s";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Zombie_MEDIUM :Era_ZombieMaleMEDIUM_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Zombie.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeO_yellow_m";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Zombie_HARD :Era_ZombieMaleHARD_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Zombie.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeB_yellow_h";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Zubastik1 :Era_ZombieMaleBase 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Zubastik1.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeR_yellow_s";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Zubastik1_MEDIUM :Era_ZombieMaleMEDIUM_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Zubastik1.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeO_yellow_m";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Zubastik1_HARD :Era_ZombieMaleHARD_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Zubastik1.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeB_yellow_h";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Zubastik2 :Era_ZombieMaleBase 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Zubastik2.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeR_green_s";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Zubastik2_MEDIUM :Era_ZombieMaleMEDIUM_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Zubastik2.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeO_green_m";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Zubastik2_HARD :Era_ZombieMaleHARD_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Zubastik2.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeB_green_h";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Zubastik3 :Era_ZombieMaleBase 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Zubastik3.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeR_blue_s";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Zubastik3_MEDIUM :Era_ZombieMaleMEDIUM_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Zubastik3.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeO_blue_m";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Zubastik3_HARD :Era_ZombieMaleHARD_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Zubastik3.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeB_blue_h";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Possessed: Era_ZombieMaleBase 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Possessed.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeR_blue_s";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Possessed_MEDIUM :Era_ZombieMaleMEDIUM_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Possessed.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeO_blue_m";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
	class Era_Zombies_Possessed_HARD :Era_ZombieMaleHARD_Base 
	{
		scope = 2; 
		model = "Erapulsar_Zombies\data\Possessed.p3d";
		class Skinning
		{
			class ObtainedHead
			{
				itemZones[]= { "Head"};
				countByZone[]={1};
				item = "Era_Z_tubeB_blue_h";
				count = 1;
				quantityMinMaxCoef[] = {0, 1};
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				itemZones[]= { "Torso"};
				countByZone[]={1};
				item = "HumanSteakMeat";
				count = 1;
				quantityMinMaxCoef[] = {0, 0.3};
			};
		};
	};
};
