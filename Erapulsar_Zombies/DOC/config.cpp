class CfgPatches
{
	class Erapulsar_Zombies_ClientModded
	{
		units[]= {"Hermit_NewAI","ZmbM_Lite_Base","ZmbM_GO_Base_Base","ZmbM_Hard_Base"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= {"DZ_Characters","Era_Zombies"};
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
	class Era_ZombieBase: ZombieBase
	{
		scope = 0;
		faction = "dz_Civ_US";
		rarityUrban = -1;
		simulation = "dayzinfected";
		attachments[] = {"Vest","Back","Headgear"};
		class enfanimsys
		{
			meshObject = "dz\characters\zombies\z_hermit_m.xob";
			graphname = "dz\anims\workspaces\infected\infected_main\infected.agr";
			defaultinstance = "dz\anims\workspaces\infected\infected_main\infected_main.asi";
			skeletonName = "hermit_newbindpose.xob";
			startnode = "MasterControl";
		};
		class InputController
		{
			movementSpeedMapping[] = {0.0,1.5,2.9,8.9};
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 1.57;
		};
		accuracy = 0;
		threat[] = {1,0.05,0.05};
		displayName = "$STR_cfgvehicles_infected0";
		descriptionShort = "$STR_cfgvehicles_infected1";
		vehicleClass = "Zombie";
		zombieLoot = "civilian";
		storageCategory = 3;
		attackSounds = "zombie_attack";
		spottedSounds = "zombie_spotted";
		chaseSounds = "zombie_chase";
		idleSounds = "zombie_idle";
		hiddenSelections[] = {"camo"};
		languages[] = {};
		htMin = 60;
		htMax = 1800;
		afMax = 30;
		mfMax = 0;
		mFact = 1;
		tBody = 37;
		selectionPersonality = "personality";
		faceType = "MaleWhiteHeadNew";
		launcherBone = "launcher";
		handGunBone = "RightHand";
		weaponBone = "weapon";
		selectionHeadWound = "injury_head";
		selectionBodyWound = "injury_body";
		selectionLArmWound = "injury_hands";
		selectionRArmWound = "injury_hands";
		selectionLLegWound = "injury_legs";
		selectionRLegWound = "injury_legs";
		memoryPointLStep = "footstepL";
		memoryPointRStep = "footstepR";
		memoryPointAim = "aimPoint";
		memoryPointCameraTarget = "camera";
		memoryPointCommonDamage = "l_femur_hit";
		memoryPointLeaningAxis = "leaning_axis";
		memoryPointAimingAxis = "aiming_axis";
		memoryPointHeadAxis = "head_axis";
		selectionLBrow = "lBrow";
		selectionMBrow = "mBrow";
		selectionRBrow = "rBrow";
		selectionLMouth = "lMouth";
		selectionMMouth = "mMouth";
		selectionRMouth = "rMouth";
		selectionEyelid = "Eyelids";
		selectionLip = "LLip";
		class InventoryEquipment
		{
			playerSlots[] = {"Slot_Vest","Slot_Back","Slot_Headgear"};
		};
		class Cargo
		{
			itemsCargoSize[] = {3,4};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"dz\characters\zombies\data\coveralls.rvmat","dz\characters\zombies\data\coveralls_injury.rvmat","dz\characters\zombies\data\coveralls_injury.rvmat"};
		};
		aiAgentTemplate = "Infected";
		class NoiseTemplates
		{
			class StepNoise
			{
				strength = 10.0;
				type = "sound";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 30;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1.5;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 0.7;
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
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 1.2;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 2;
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
						hitpoints = 100;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
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
						hitpoints = 100;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
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
	class Era_ZombieFemaleBase: Era_ZombieBase{
		scope = 0;
		meleeAmmo = "MeleeZombieFemale";
		aiAgentTemplate = "InfectedFemale";
		woman = 1;
		clothingType = "female";
		class Wounds: Wounds
		{
			tex[] = {};
			mat[] = {"dz\characters\zombies\data\shortskirt.rvmat","dz\characters\zombies\data\shortskirt_injury.rvmat","dz\characters\zombies\data\shortskirt_injury.rvmat"};
		};
		class AttackActions
		{
			class AttackLong
			{
				attackName = "attackLong";
				ammoType = "MeleeZombieFemale";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 0.75;
				distance = 1.75;
				time = 2.5;
				yawAngle = 0;
				pitchAngle = 0;
				attackWidth = 2.2;
				repeatable = 0;
				cooldown = 2.75;
			};
			class AttackRun
			{
				attackName = "attackRun";
				ammoType = "MeleeZombieFemale";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 0.5;
				distance = 1.3;
				time = 1.0;
				yawAngle = 0;
				pitchAngle = 0;
				attackWidth = 1.5;
				repeatable = 1;
				cooldown = 1.25;
			};
			class AttackShort
			{
				attackName = "attackShort";
				ammoType = "MeleeZombieFemale";
				stanceName = "erect";
				moveAnimNames[] = {"idle","walk"};
				minDistance = 0.5;
				distance = 1.3;
				time = 1.0;
				yawAngle = 0;
				pitchAngle = 0;
				attackWidth = 1.5;
				repeatable = 1;
				cooldown = 1.25;
			};
			class AttackShortLow
			{
				attackName = "attackShortLow";
				ammoType = "MeleeZombieFemale";
				stanceName = "erect";
				moveAnimNames[] = {"idle","walk","run"};
				minDistance = 0;
				distance = 2;
				time = 1.0;
				yawAngle = 0;
				pitchAngle = -45;
				attackWidth = 2;
				repeatable = 1;
				cooldown = 1.25;
			};
			class CrawlAttackMove
			{
				attackName = "crawlAttackMove";
				ammoType = "MeleeZombieFemale";
				stanceName = "crawl";
				moveAnimNames[] = {"walk"};
				distance = 2;
				time = 1.5;
				yawAngle = 0;
				pitchAngle = 45;
				attackWidth = 2;
				cooldown = 1.25;
			};
			class CrawlAttackStill
			{
				attackName = "crawlAttackStill";
				ammoType = "MeleeZombieFemale";
				stanceName = "crawl";
				moveAnimNames[] = {"idle"};
				distance = 2;
				time = 1.1;
				yawAngle = 0;
				pitchAngle = 45;
				attackWidth = 2;
				cooldown = 1.25;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 30;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1.5;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 0.3; //0.7
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
						hitpoints = 150;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.8; //1.2
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 2;
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
						hitpoints = 140;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
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
						hitpoints = 140;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
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
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "walkErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "walkErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "walkErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "walkErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "runErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "runErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "runErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "runErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 8;
				};
				class Sprint1
				{
					soundLookupTable = "sprintErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 9;
				};
				class Sprint2
				{
					soundLookupTable = "sprintErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 10;
				};
				class Sprint3
				{
					soundLookupTable = "sprintErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 11;
				};
				class Sprint4
				{
					soundLookupTable = "sprintErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 12;
				};
				class Scuff1
				{
					soundLookupTable = "scuffErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 17;
				};
				class Scuff2
				{
					soundLookupTable = "scuffErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 18;
				};
				class Sccuff3
				{
					soundLookupTable = "scuffErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 19;
				};
				class Scuff4
				{
					soundLookupTable = "scuffErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 20;
				};
				class landFeetErc
				{
					soundLookupTable = "landFeetErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 21;
				};
				class landFootErc
				{
					soundLookupTable = "landFootErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 22;
				};
				class Bodyfall
				{
					soundLookupTable = "bodyfall_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable = "bodyfall_hand_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable = "bodyfall_slide_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 25;
				};
				class Prone_Walk_L
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 27;
				};
				class Prone_Walk_R
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 28;
				};
				class Prone_Run_L
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 29;
				};
				class Prone_Run_R
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet = "Zmb_Attack_Light1_SoundSet";
					id = 1;
				};
				class Attack_Light2
				{
					soundSet = "Zmb_Attack_Light2_SoundSet";
					id = 2;
				};
				class Attack_Heavy1
				{
					soundSet = "Zmb_Attack_Heavy1_SoundSet";
					id = 3;
				};
				class Attack_Heavy2
				{
					soundSet = "Zmb_Attack_Heavy2_SoundSet";
					id = 4;
				};
				class TwoHands
				{
					soundSet = "Zmb_Attack_TwoHands_SoundSet";
					id = 5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet = "ZmbF_Era_Female_LightHit_Soundset";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "ZmbF_Era_Female_HeavyHit_Soundset";
					id = 2;
				};
				class Attack
				{
					soundSet = "ZmbF_Era_Female_Attack_Soundset";
					id = 5;
				};
				class Jump
				{
					soundSet = "ZmbF_Era_Female_Jump_Soundset";
					id = 10;
				};
				class Land
				{
					soundSet = "ZmbF_Era_Female_Land_Soundset";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "ZmbF_Era_Female_CallToArmsShort_Soundset";
					id = 20;
				};
			};
		};
	};
	class Era_ZombieMaleBase: Era_ZombieBase{
		scope = 0;
		meleeAmmo = "MeleeZombieMale";
		aiAgentTemplate = "InfectedMale";
		woman = 0;
		clothingType = "male";
		class Wounds: Wounds
		{
			tex[] = {};
			mat[] = {"dz\characters\zombies\data\jacket.rvmat","dz\characters\zombies\data\jacket_injury.rvmat","dz\characters\zombies\data\jacket_injury.rvmat"};
		};
		class AttackActions
		{
			class AttackLong
			{
				attackName = "attackLong";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 0.75;
				distance = 1.75;
				time = 2.5;
				yawAngle = 0;
				pitchAngle = 0;
				attackWidth = 2.2;
				repeatable = 0;
				cooldown = 2.75;
			};
			class AttackRun
			{
				attackName = "attackRun";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 0.5;
				distance = 1.3;
				time = 1.0;
				yawAngle = 0;
				pitchAngle = 0;
				attackWidth = 1.5;
				repeatable = 1;
				cooldown = 1.25;
			};
			class AttackShort
			{
				attackName = "attackShort";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"idle","walk"};
				minDistance = 0.5;
				distance = 1.3;
				time = 1.0;
				yawAngle = 0;
				pitchAngle = 0;
				attackWidth = 1.5;
				repeatable = 1;
				cooldown = 1.25;
			};
			class AttackShortLow
			{
				attackName = "attackShortLow";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"idle","walk","run"};
				minDistance = 0;
				distance = 2;
				time = 1.0;
				yawAngle = 0;
				pitchAngle = -45;
				attackWidth = 2;
				repeatable = 1;
				cooldown = 1.25;
			};
			class CrawlAttackMove
			{
				attackName = "crawlAttackMove";
				ammoType = "MeleeZombieMale";
				stanceName = "crawl";
				moveAnimNames[] = {"walk"};
				distance = 2;
				time = 1.5;
				yawAngle = 0;
				pitchAngle = 45;
				attackWidth = 2;
				cooldown = 1.25;
			};
			class CrawlAttackStill
			{
				attackName = "crawlAttackStill";
				ammoType = "MeleeZombieMale";
				stanceName = "crawl";
				moveAnimNames[] = {"idle"};
				distance = 2;
				time = 1.1;
				yawAngle = 0;
				pitchAngle = 45;
				attackWidth = 2;
				cooldown = 1.25;
			};
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "walkErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "walkErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "walkErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "walkErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "runErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "runErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "runErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "runErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 8;
				};
				class Sprint1
				{
					soundLookupTable = "sprintErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 9;
				};
				class Sprint2
				{
					soundLookupTable = "sprintErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 10;
				};
				class Sprint3
				{
					soundLookupTable = "sprintErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 11;
				};
				class Sprint4
				{
					soundLookupTable = "sprintErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 12;
				};
				class Scuff1
				{
					soundLookupTable = "scuffErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 17;
				};
				class Scuff2
				{
					soundLookupTable = "scuffErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 18;
				};
				class Sccuff3
				{
					soundLookupTable = "scuffErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 19;
				};
				class Scuff4
				{
					soundLookupTable = "scuffErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 20;
				};
				class landFeetErc
				{
					soundLookupTable = "landFeetErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 21;
				};
				class landFootErc
				{
					soundLookupTable = "landFootErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 22;
				};
				class Bodyfall
				{
					soundLookupTable = "bodyfall_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable = "bodyfall_hand_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable = "bodyfall_slide_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 25;
				};
				class Prone_Walk_L
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 27;
				};
				class Prone_Walk_R
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 28;
				};
				class Prone_Run_L
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 29;
				};
				class Prone_Run_R
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet = "Zmb_Attack_Light1_SoundSet";
					id = 1;
				};
				class Attack_Light2
				{
					soundSet = "Zmb_Attack_Light2_SoundSet";
					id = 2;
				};
				class Attack_Heavy1
				{
					soundSet = "Zmb_Attack_Heavy1_SoundSet";
					id = 3;
				};
				class Attack_Heavy2
				{
					soundSet = "Zmb_Attack_Heavy2_SoundSet";
					id = 4;
				};
				class TwoHands
				{
					soundSet = "Zmb_Attack_TwoHands_SoundSet";
					id = 5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet = "ZmbM_Era_Male_LightHit_Soundset";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "ZmbM_Era_Male_HeavyHit_Soundset";
					id = 2;
				};
				class Attack
				{
					soundSet = "ZmbM_Era_Male_Attack_Soundset";
					id = 5;
				};
				class Jump
				{
					soundSet = "ZmbM_Era_Male_Jump_Soundset";
					id = 10;
				};
				class Land
				{
					soundSet = "ZmbM_Era_Male_Land_Soundset";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "ZmbM_Era_Male_CallToArmsShort_Soundset";
					id = 20;
				};
			};
		};
	};
	class Era_ZombieMaleMEDIUM_Base: Era_ZombieMaleBase{
		scope = 0;
		meleeAmmo = "MeleeZombieMale";
		aiAgentTemplate = "InfectedMale";
		woman = 0;
		clothingType = "male";
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
	class Era_ZombieMaleHARD_Base: Era_ZombieMaleBase{
		scope = 0;
		meleeAmmo = "MeleeZombieMale";
		aiAgentTemplate = "InfectedMale";
		woman = 0;
		clothingType = "male";
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
	class Era_ZombieFemaleMEDIUM_Base: Era_ZombieFemaleBase{
		scope = 0;
		meleeAmmo = "MeleeZombieFemale";
		aiAgentTemplate = "InfectedFemale";
		woman = 1;
		clothingType = "female";
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
	class Era_ZombieFemaleHARD_Base: Era_ZombieFemaleBase{
		scope = 0;
		meleeAmmo = "MeleeZombieFemale";
		aiAgentTemplate = "InfectedFemale";
		woman = 1;
		clothingType = "female";
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
