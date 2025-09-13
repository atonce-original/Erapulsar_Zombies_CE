class CfgPatches
{
	class Erapulsar_Zombies_ClientModded
	{
		units[]= {"Hermit_NewAI","ZmbM_Lite_Base","ZmbM_GO_Base_Base","ZmbM_Hard_Base"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= {"DZ_Characters","Erapulsar_Zombies_Client","EZF_Era_ZombieBase"};
	};
};
class CfgMods 
{
    class Erapulsar_Zombies_ClientModdedCFG
    {
        name = "Erapulsar_Zombies_ClientModdedCFG";
        author = "atonce";
        version = 2.0;
        type = "mod";
		dependencies[]=
		{
			""
		};
		class defs 
		{
		};
    };
}; 
class CfgVehicles
{
	class DZ_LightAI;
	class DayZInfected: DZ_LightAI{};
	//Модификация ванильных
	class ZombieBase; 
	class Era_ZombieMaleBase;
	class Era_ZombieFemaleBase;
	class Era_Zombies_ZombieMaleBase;
	class Era_Zombies_ZombieMaleMEDIUMBase: Era_ZombieMaleBase{
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 700; //GLOBAL HP
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 350; // HEAD HP
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile //firearm damage
						{
							class Health
							{
								damage = 1.0; //0.01 = 1% damage ,1.0 = 100% damage firearm shot
							};
						};
						class Melee // melee damage
						{
							class Health
							{
								damage = 1.0;
							};
						};
						class FragGrenade // explosive damage
						{
							class Health
							{
								damage = 3; //3 = 300% damage grenade explosion
							};
						};
					};
					componentNames[] = {"Head","Neck"};
					fatalInjuryCoef = 0.1;
					inventorySlots[] = {"Headgear","Mask"};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 700;
						transferToGlobalCoef = 0.7;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.4; //1.2
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3; //2
							};
						};
					};
					componentNames[] = {"Spine1","Spine3"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
				};
				class LeftArm: Torso
				{
					componentNames[] = {"LeftArm","LeftForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					fatalInjuryCoef = -1;
				};
				class RightArm: LeftArm
				{
					componentNames[] = {"RightArm","RightForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 700;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 3; //2
							};
						};
					};
					componentNames[] = {"LeftLeg","LeftUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class RightLeg: LeftLeg
				{
					componentNames[] = {"RightLeg","RightUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 700;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 3;//2
							};
						};
					};
					transferToZonesNames[] = {"LeftLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"LeftFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
				class RightFoot: LeftFoot
				{
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
			};
		};
	};
	class Era_Zombies_ZombieMaleHARDBase: Era_ZombieMaleBase{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 750;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1.0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 1.0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
						};
					};
					componentNames[] = {"Head","Neck"};
					fatalInjuryCoef = 0.1;
					inventorySlots[] = {"Headgear","Mask"};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 1500;
						transferToGlobalCoef = 0.7;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.4; //1.2
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3; //2
							};
						};
					};
					componentNames[] = {"Spine1","Spine3"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
				};
				class LeftArm: Torso
				{
					componentNames[] = {"LeftArm","LeftForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					fatalInjuryCoef = -1;
				};
				class RightArm: LeftArm
				{
					componentNames[] = {"RightArm","RightForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 1500;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 3; //2
							};
						};
					};
					componentNames[] = {"LeftLeg","LeftUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class RightLeg: LeftLeg
				{
					componentNames[] = {"RightLeg","RightUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 1500;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 3;//2
							};
						};
					};
					transferToZonesNames[] = {"LeftLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"LeftFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
				class RightFoot: LeftFoot
				{
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
			};
		};
	};
	class Era_Zombies_ZombieFemaleBase;
	class Era_Zombies_ZombieFemaleMEDIUMBase: Era_ZombieFemaleBase{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 700;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 350;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1.0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 1.0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
						};
					};
					componentNames[] = {"Head","Neck"};
					fatalInjuryCoef = 0.1;
					inventorySlots[] = {"Headgear","Mask"};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 700;
						transferToGlobalCoef = 0.7;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.4; //1.2
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3; //2
							};
						};
					};
					componentNames[] = {"Spine1","Spine3"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
				};
				class LeftArm: Torso
				{
					componentNames[] = {"LeftArm","LeftForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					fatalInjuryCoef = -1;
				};
				class RightArm: LeftArm
				{
					componentNames[] = {"RightArm","RightForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 700;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 3; //2
							};
						};
					};
					componentNames[] = {"LeftLeg","LeftUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class RightLeg: LeftLeg
				{
					componentNames[] = {"RightLeg","RightUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 700;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 3;//2
							};
						};
					};
					transferToZonesNames[] = {"LeftLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"LeftFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
				class RightFoot: LeftFoot
				{
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
			};
		};
	};
	class Era_Zombies_ZombieFemaleHARDBase: Era_ZombieFemaleBase{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 750;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1.0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 1.0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
						};
					};
					componentNames[] = {"Head","Neck"};
					fatalInjuryCoef = 0.1;
					inventorySlots[] = {"Headgear","Mask"};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 1500;
						transferToGlobalCoef = 0.7;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.4; //1.2
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3; //2
							};
						};
					};
					componentNames[] = {"Spine1","Spine3"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
				};
				class LeftArm: Torso
				{
					componentNames[] = {"LeftArm","LeftForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					fatalInjuryCoef = -1;
				};
				class RightArm: LeftArm
				{
					componentNames[] = {"RightArm","RightForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 1500;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 3; //2
							};
						};
					};
					componentNames[] = {"LeftLeg","LeftUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class RightLeg: LeftLeg
				{
					componentNames[] = {"RightLeg","RightUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 1500;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 3;//2
							};
						};
					};
					transferToZonesNames[] = {"LeftLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"LeftFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
				class RightFoot: LeftFoot
				{
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
			};
		};
	};
	class Era_Zombies_BabyZmb: Era_Zombies_ZombieFemaleBase 
	{
		//SAMPLE - add me DamageSystem class if you need change me
		//i added DamageSystem and change Zmb HP 
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350; //GLOBAL HP 700 > 350 (ALL ZONES GLOBAL HP MAX) 
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 175; // HEAD HP old 350 > new sample 175
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile //HEAD firearm damage
						{
							class Health
							{
								damage = 0.5; // old 1.0 (100%) > new sample 0.5 (50%)HEAD damage firearm shot
							};
						};
						class Melee //HEAD melee damage
						{
							class Health
							{
								damage = 0.5; //old 1.0 (100%) >new sample 0.5 (50%)HEAD damage firearm shot
							};
						};
						class FragGrenade //HEAD explosive damage
						{
							class Health
							{
								damage = 1; //old 3 (300%) > new sample 1 (100%)HEAD damage grenade explosion
							};
						};
					};
					componentNames[] = {"Head","Neck"};
					fatalInjuryCoef = 0.1;
					inventorySlots[] = {"Headgear","Mask"};
				};
				// change if you need a more/less Zmb HP in TORSO dmg zone, same same settings in other zones
				class Torso
				{
					class Health
					{
						hitpoints = 700; 
						transferToGlobalCoef = 0.7;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.4; // original dayz = 1.2(120%)
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3; // original dayz = 2 (200%)
							};
						};
					};
					componentNames[] = {"Spine1","Spine3"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
				};
				//DONT touch
				class LeftArm: Torso
				{
					componentNames[] = {"LeftArm","LeftForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					fatalInjuryCoef = -1;
				};
				//DONT touch
				class RightArm: LeftArm
				{
					componentNames[] = {"RightArm","RightForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 700;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 3; // original dayz = 2 (200%)
							};
						};
					};
					componentNames[] = {"LeftLeg","LeftUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class RightLeg: LeftLeg
				{
					componentNames[] = {"RightLeg","RightUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 700;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 3;//// original dayz = 2 (200%)
							};
						};
					};
					transferToZonesNames[] = {"LeftLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"LeftFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
				class RightFoot: LeftFoot
				{
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
			};
		};
	};
	class Era_Zombies_BabyZmb_MEDIUM :Era_Zombies_ZombieFemaleMEDIUMBase 
	{
		//add me DamageSystem class if you need change me
	};
	class Era_Zombies_BabyZmb_HARD :Era_Zombies_ZombieFemaleHARDBase 
	{
		//add me DamageSystem class if you need change me
	};
	class Era_Zombies_Clot :Era_Zombies_ZombieMaleBase 
	{
		//add me DamageSystem class if you need change me
	};
	class Era_Zombies_Clot_MEDIUM :Era_Zombies_ZombieMaleMEDIUMBase 
	{
		
	};
	class Era_Zombies_Clot_HARD :Era_Zombies_ZombieMaleHARDBase 
	{

	};
	class Era_Zombies_feeder :Era_Zombies_ZombieMaleBase 
	{

	};
	class Era_Zombies_feeder_MEDIUM :Era_Zombies_ZombieMaleMEDIUMBase 
	{

	};
	class Era_Zombies_feeder_HARD :Era_Zombies_ZombieMaleHARDBase 
	{

	};
	class Era_Zombies_Golovastik :Era_Zombies_ZombieMaleBase 
	{

	};
	class Era_Zombies_Golovastik_MEDIUM :Era_Zombies_ZombieMaleMEDIUMBase 
	{

	};
	class Era_Zombies_Golovastik_HARD :Era_Zombies_ZombieMaleHARDBase 
	{

	};
	class Era_Zombies_Kleshni :Era_Zombies_ZombieMaleBase 
	{

	};
	class Era_Zombies_Kleshni_MEDIUM :Era_Zombies_ZombieMaleMEDIUMBase 
	{

	};
	class Era_Zombies_Kleshni_HARD :Era_Zombies_ZombieMaleHARDBase 
	{

	};
	class Era_Zombies_Krovosos :Era_Zombies_ZombieMaleBase 
	{

	};
	class Era_Zombies_Krovosos_MEDIUM :Era_Zombies_ZombieMaleMEDIUMBase 
	{

	};
	class Era_Zombies_Krovosos_HARD :Era_Zombies_ZombieMaleHARDBase 
	{

	};
	class Era_Zombies_MumiaSlowZmb :Era_Zombies_ZombieMaleBase 
	{

	};
	class Era_Zombies_MumiaSlowZmb_MEDIUM :Era_Zombies_ZombieMaleMEDIUMBase 
	{

	};
	class Era_Zombies_MumiaSlowZmb_HARD :Era_Zombies_ZombieMaleHARDBase 
	{

	};
	class Era_Zombies_MurderZmb :Era_Zombies_ZombieMaleBase 
	{

	};
	class Era_Zombies_MurderZmb_MEDIUM :Era_Zombies_ZombieMaleMEDIUMBase 
	{
	};
	class Era_Zombies_MurderZmb_HARD :Era_Zombies_ZombieMaleHARDBase 
	{

	};
	class Era_Zombies_snork :Era_Zombies_ZombieMaleBase 
	{

	};
	class Era_Zombies_snork_MEDIUM :Era_Zombies_ZombieMaleMEDIUMBase 
	{

	};
	class Era_Zombies_snork_HARD :Era_Zombies_ZombieMaleHARDBase 
	{
		
	};
	class Era_Zombies_StlZomb1 :Era_Zombies_ZombieMaleBase 
	{
	
	};
	class Era_Zombies_StlZomb2 :Era_Zombies_StlZomb1 
	{
	};
	class Era_Zombies_StlZomb3 :Era_Zombies_StlZomb1 
	{
	};
	class Era_Zombies_StlZomb4 :Era_Zombies_StlZomb1 
	{
	};
	class Era_Zombies_StlZomb5 :Era_Zombies_StlZomb1 
	{
	};
	class Era_Zombies_StlZomb6 :Era_Zombies_StlZomb1 
	{
	};
	class Era_Zombies_StlZomb7 :Era_Zombies_StlZomb1 
	{
	};
	class Era_Zombies_StlZomb8 :Era_Zombies_StlZomb1 
	{
	};
	class Era_Zombies_Zombie :Era_Zombies_ZombieMaleBase 
	{
		
	};
	class Era_Zombies_Zombie_MEDIUM :Era_Zombies_ZombieMaleMEDIUMBase 
	{
		
	};
	class Era_Zombies_Zombie_HARD :Era_Zombies_ZombieMaleHARDBase 
	{
		
	};
	class Era_Zombies_Zubastik1 :Era_Zombies_ZombieMaleBase 
	{
		
	};
	class Era_Zombies_Zubastik1_MEDIUM :Era_Zombies_ZombieMaleMEDIUMBase 
	{
	
	};
	class Era_Zombies_Zubastik1_HARD :Era_Zombies_ZombieMaleHARDBase 
	{
		
	};
	class Era_Zombies_Zubastik2 :Era_Zombies_ZombieMaleBase 
	{
	
	};
	class Era_Zombies_Zubastik2_MEDIUM :Era_Zombies_ZombieMaleMEDIUMBase 
	{
	
	};
	class Era_Zombies_Zubastik2_HARD :Era_Zombies_ZombieMaleHARDBase 
	{
	
	};
	class Era_Zombies_Zubastik3 :Era_Zombies_ZombieMaleBase 
	{
	
	};
	class Era_Zombies_Zubastik3_MEDIUM :Era_Zombies_ZombieMaleMEDIUMBase 
	{
		
	};
	class Era_Zombies_Zubastik3_HARD :Era_Zombies_ZombieMaleHARDBase 
	{
	
	};
	class Era_Zombies_Possessed: Era_Zombies_ZombieMaleBase 
	{
	
	};
	class Era_Zombies_Possessed_MEDIUM :Era_Zombies_ZombieMaleMEDIUMBase 
	{
	
	};
	class Era_Zombies_Possessed_HARD :Era_Zombies_ZombieMaleHARDBase 
	{
		
	};
};
