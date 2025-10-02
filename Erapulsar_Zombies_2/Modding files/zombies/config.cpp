class CfgPatches
{
	class Erapulsar_Zombies_2MDF
	{
		units[]= {"Era_Zombies_2_Hazmatsuit","",""};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= {"DZ_Characters","EZF_Era_ZombieBase","Erapulsar_Zombies_2"};
	};
};
class CfgVehicles
{
	class ZmbM_SoldierNormal_Base;
	class Era_ZombieBase;
	class Erapulsar_Zombies_2_ZombieBase: Era_ZombieBase
	{
		scope = 0;
		faction = "dz_Civ_US";
		rarityUrban = -1;
		simulation = "dayzinfected";
		attachments[] = {"Vest","Back","Headgear"};
		class InventoryEquipment
		{
			playerSlots[] = {"Slot_Vest","Slot_Back","Slot_Headgear"};
		};
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
		class Cargo
		{
			itemsCargoSize[] = {6,8};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		aiAgentTemplate = "Infected";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 3500;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 1750;
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
					
					inventorySlots[] = {"Headgear","Mask"};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
				};
				class LeftArm: Torso
				{
					componentNames[] = {"LeftArm","LeftForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					
				};
				class RightArm: LeftArm
				{
					componentNames[] = {"RightArm","RightForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Legs"};
				};
				class RightLeg: LeftLeg
				{
					componentNames[] = {"RightLeg","RightUpLeg"};
					
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Feet"};
				};
				class RightFoot: LeftFoot
				{
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					
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
					soundSet = "ZmbM_Skinny_Old_LightHit_Soundset";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "ZmbM_Skinny_Old_HeavyHit_Soundset";
					id = 2;
				};
				class Attack
				{
					soundSet = "ZmbM_Skinny_Old_Attack_Soundset";
					id = 5;
				};
				class Jump
				{
					soundSet = "ZmbM_Skinny_Old_Jump_Soundset";
					id = 10;
				};
				class Land
				{
					soundSet = "ZmbM_Skinny_Old_Land_Soundset";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "ZmbM_Skinny_Old_CallToArmsShort_Soundset";
					id = 20;
				};
			};
		};
	};
	class Erapulsar_Zombies_2_ZombieMaleBase: Erapulsar_Zombies_2_ZombieBase{
		scope = 0;
		meleeAmmo = "MeleeZombieMale";
		aiAgentTemplate = "InfectedMale";
		woman = 0;
		clothingType = "male";
		attachments[] = {"Vest","Back","Headgear"};
				class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 3500;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 1750;
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
					
					inventorySlots[] = {"Headgear","Mask"};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
				};
				class LeftArm: Torso
				{
					componentNames[] = {"LeftArm","LeftForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					
				};
				class RightArm: LeftArm
				{
					componentNames[] = {"RightArm","RightForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Legs"};
				};
				class RightLeg: LeftLeg
				{
					componentNames[] = {"RightLeg","RightUpLeg"};
					
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Feet"};
				};
				class RightFoot: LeftFoot
				{
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					
					inventorySlots[] = {"Feet"};
				};
			};
		};
		class InventoryEquipment
		{
			playerSlots[] = {"Slot_Vest","Slot_Back","Slot_Headgear"};
		};
		class Cargo
		{
			itemsCargoSize[] = {6,8};
			allowOwnedCargoManipulation = 1;
			openable = 0;
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
	};
	class Erapulsar_Zombies_2_ZombieFemaleBase: Erapulsar_Zombies_2_ZombieBase{
		scope = 0;
		meleeAmmo = "MeleeZombieFemale";
		aiAgentTemplate = "InfectedFemale";
		woman = 1;
		clothingType = "female";
		attachments[] = {"Vest","Back","Headgear"};
				class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 3500;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 1750;
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
					
					inventorySlots[] = {"Headgear","Mask"};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
				};
				class LeftArm: Torso
				{
					componentNames[] = {"LeftArm","LeftForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					
				};
				class RightArm: LeftArm
				{
					componentNames[] = {"RightArm","RightForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Legs"};
				};
				class RightLeg: LeftLeg
				{
					componentNames[] = {"RightLeg","RightUpLeg"};
					
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Feet"};
				};
				class RightFoot: LeftFoot
				{
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					
					inventorySlots[] = {"Feet"};
				};
			};
		};
		class InventoryEquipment
		{
			playerSlots[] = {"Slot_Vest","Slot_Back","Slot_Headgear"};
		};
		class Cargo
		{
			itemsCargoSize[] = {6,8};
			allowOwnedCargoManipulation = 1;
			openable = 0;
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
	};
	class Erapulsar_Zombies_2_ZombieInfectedBase: Erapulsar_Zombies_2_ZombieMaleBase{
		scope = 0;
		meleeAmmo = "MeleeZombieMale";
		aiAgentTemplate = "InfectedMale";
		attachments[] = {"Vest","Back","Headgear"};
		class InventoryEquipment
		{
			playerSlots[] = {"Slot_Vest","Slot_Back","Slot_Headgear"};
		};
		class Cargo
		{
			itemsCargoSize[] = {6,8};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 3500;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 1750;
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
					
					inventorySlots[] = {"Headgear","Mask"};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
				};
				class LeftArm: Torso
				{
					componentNames[] = {"LeftArm","LeftForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					
				};
				class RightArm: LeftArm
				{
					componentNames[] = {"RightArm","RightForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Legs"};
				};
				class RightLeg: LeftLeg
				{
					componentNames[] = {"RightLeg","RightUpLeg"};
					
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Feet"};
				};
				class RightFoot: LeftFoot
				{
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					
					inventorySlots[] = {"Feet"};
				};
			};
		};
		class AnimEvents
		{
			class SoundVoice
			{
				class LightHit
				{
					soundSet="Zmb_Infected_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="Zmb_Infected_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="Zmb_Infected_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="Zmb_Infected_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="Zmb_Infected_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="Zmb_Infected_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class Erapulsar_Zombies_2_ZombieMillitaryBase: ZmbM_SoldierNormal_Base{
		scope = 0;
		meleeAmmo = "MeleeZombieMale";
		aiAgentTemplate = "InfectedMale";
		attachments[] = {"Vest","Back","Headgear"};
		class InventoryEquipment
		{
			playerSlots[] = {"Slot_Vest","Slot_Back","Slot_Headgear"};
		};
		class Cargo
		{
			itemsCargoSize[] = {6,8};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 3500;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 1750;
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
					
					inventorySlots[] = {"Headgear","Mask"};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
				};
				class LeftArm: Torso
				{
					componentNames[] = {"LeftArm","LeftForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					
				};
				class RightArm: LeftArm
				{
					componentNames[] = {"RightArm","RightForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Legs"};
				};
				class RightLeg: LeftLeg
				{
					componentNames[] = {"RightLeg","RightUpLeg"};
					
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Feet"};
				};
				class RightFoot: LeftFoot
				{
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					
					inventorySlots[] = {"Feet"};
				};
			};
		};
		class AnimEvents
		{
			class SoundVoice
			{
				class LightHit
				{
					soundSet="Zmb_Infected_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="Zmb_Infected_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="Zmb_Infected_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="Zmb_Infected_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="Zmb_Infected_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="Zmb_Infected_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class Erapulsar_Zombies_2_ZombiePrawnBase: Erapulsar_Zombies_2_ZombieMaleBase{
		scope = 0;
		displayName = "$STR_ZombiesPlus_ZombiePrawnBase0";
		descriptionShort = "$STR_ZombiesPlus_ZombiePrawnBase1";
		meleeAmmo = "MeleeZombieMale";
		aiAgentTemplate = "InfectedMale";
		attachments[] = {"Vest","Back","Headgear"};
		class InventoryEquipment
		{
			playerSlots[] = {"Slot_Vest","Slot_Back","Slot_Headgear"};
		};
		class Cargo
		{
			itemsCargoSize[] = {6,8};
			allowOwnedCargoManipulation = 1;
			openable = 0;
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
					soundSet="Zmb_AttackPrawn_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="Zmb_AttackPrawn_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="Zmb_AttackPrawn_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="Zmb_AttackPrawn_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="Zmb_AttackPrawn_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="Zmb_AttackPrawn_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class Era_Zombies_2_Prawn_Base: Erapulsar_Zombies_2_ZombiePrawnBase 
	{
		scope = 0;
		model = "Erapulsar_Zombies_2\data\Prawn.p3d";
		hiddenSelectionsTextures[]={""};
		hiddenSelectionsMaterials[]={"Erapulsar_Zombies_2\data\texts\Prawn\Alien_Prawn.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 3500;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 1750;
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
					
					inventorySlots[] = {"Headgear","Mask"};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
				};
				class LeftArm: Torso
				{
					componentNames[] = {"LeftArm","LeftForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					
				};
				class RightArm: LeftArm
				{
					componentNames[] = {"RightArm","RightForeArm"};
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,1.0};
					
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Legs"};
				};
				class RightLeg: LeftLeg
				{
					componentNames[] = {"RightLeg","RightUpLeg"};
					
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 2500;
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
					
					inventorySlots[] = {"Feet"};
				};
				class RightFoot: LeftFoot
				{
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					
					inventorySlots[] = {"Feet"};
				};
			};
		};
	};
	class Era_Zombies_2_Prawn_green: Era_Zombies_2_Prawn_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"Erapulsar_Zombies_2\data\texts\Prawn\PRAWN_green.paa"};
		class Skinning
		{
			class ObtainedPelt
			{
				item="Era_Zombies_2_sk_PrawnTentacle_green";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="Era_Zombies_2_sk_PrawnHead_green";
				count=1;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
		};
	};
	class Era_Zombies_2_Prawn_greygreen: Era_Zombies_2_Prawn_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"Erapulsar_Zombies_2\data\texts\Prawn\PRAWN_greygreen.paa"};
		class Skinning
		{
			
			class ObtainedPelt
			{
				item="Era_Zombies_2_sk_PrawnTentacle_greygreen";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="Era_Zombies_2_sk_PrawnHead_greygreen";
				count=1;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
		};
	};
	class Era_Zombies_2_Prawn_black: Era_Zombies_2_Prawn_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"Erapulsar_Zombies_2\data\texts\Prawn\PRAWN_black.paa"};
		class Skinning
		{
			class ObtainedPelt
			{
				item="Era_Zombies_2_sk_PrawnTentacle_black";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="Era_Zombies_2_sk_PrawnHead_black";
				count=1;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
		};
	};
	class Era_Zombies_2_Prawn_Yellow: Era_Zombies_2_Prawn_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"Erapulsar_Zombies_2\data\texts\Prawn\PRAWN_Yellow.paa"};
		class Skinning
		{
			class ObtainedPelt
			{
				item="Era_Zombies_2_sk_PrawnTentacle_Yellow";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="Era_Zombies_2_sk_PrawnHead_Yellow";
				count=1;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
		};
	};
	class Era_Zombies_2_Prawn_red: Era_Zombies_2_Prawn_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"Erapulsar_Zombies_2\data\texts\Prawn\PRAWN_red.paa"};
		class Skinning
		{
			class ObtainedPelt
			{
				item="Era_Zombies_2_sk_PrawnTentacle_Red";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="Era_Zombies_2_sk_PrawnHead_red";
				count=1;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
		};
	};
	class Era_Zombies_2_Hazmatsuit_Base: Erapulsar_Zombies_2_ZombieMaleBase {
		scope = 0;
		displayName = "$STR_ZombiesPlus_Hazmatsuit_Base0";
		descriptionShort = "$STR_ZombiesPlus_Hazmatsuit_Base1";
		model = "Erapulsar_Zombies_2\data\Hazmatsuit.p3d";
		hiddenSelections[]={"Body_2", "Body_1","EYE"};
		hiddenSelectionsMaterials[]={
			"Erapulsar_Zombies_2\data\texts\Hazmatsuit\Hazmat_body2.rvmat",
			"Erapulsar_Zombies_2\data\texts\Hazmatsuit\Hazmat_body.rvmat",
			""};
		hiddenSelectionsTextures[]={
			"Erapulsar_Zombies_2\data\texts\Hazmatsuit\body_2_co.paa",
			"Erapulsar_Zombies_2\data\texts\Hazmatsuit\body_1_co.paa",
			"Erapulsar_Zombies_2\data\texts\Hazmatsuit\eye.paa"};
		class AnimEvents
		{
			class SoundVoice
			{
				class LightHit
				{
					soundSet = "ZmbM_Frank_LightHit_Soundset";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "ZmbM_Frank_HeavyHit_Soundset";
					id = 2;
				};
				class Attack
				{
					soundSet="Zmb_Hazmatsuit_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet = "ZmbM_Skinny_Old_Jump_Soundset";
					id = 10;
				};
				class Land
				{
					soundSet = "ZmbM_Skinny_Old_Land_Soundset";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "ZmbM_Frank_CallToArmsShort_Soundset";
					id = 20;
				};
			};
		};
	};
	class Era_Zombies_2_Hazmatsuit_Red: Era_Zombies_2_Hazmatsuit_Base 	{
		scope = 2;
		class Skinning
		{
			class ObtainedGuts
			{
				item="Era_Zombies_2_sk_Hazmathead_Red";
				count=1;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
		};
	};
	class Era_Zombies_2_Hazmatsuit_Green: Era_Zombies_2_Hazmatsuit_Base 	{
		scope = 2;
		hiddenSelectionsTextures[]={
			"Erapulsar_Zombies_2\data\texts\Hazmatsuit\body_2_Green_co.paa",
			"Erapulsar_Zombies_2\data\texts\Hazmatsuit\body_1_Green_co.paa",
			"Erapulsar_Zombies_2\data\texts\Hazmatsuit\eye.paa"};
		class Skinning
		{
			
			class ObtainedGuts
			{
				item="Era_Zombies_2_sk_Hazmathead_Green";
				count=1;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
		};
	};
	class Era_Zombies_2_Hazmatsuit_Yellow: Era_Zombies_2_Hazmatsuit_Base 	{
		scope = 2;
		hiddenSelectionsTextures[]={
			"Erapulsar_Zombies_2\data\texts\Hazmatsuit\body_2_Yellow_co.paa",
			"Erapulsar_Zombies_2\data\texts\Hazmatsuit\body_1_Yellow_co.paa",
			"Erapulsar_Zombies_2\data\texts\Hazmatsuit\eye.paa"};
	
		class Skinning
		{
			class ObtainedGuts
			{
				item="Era_Zombies_2_sk_Hazmathead_Yellow";
				count=1;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
		};
	};
	class Era_Zombies_2_Hazmatsuit_Blue: Era_Zombies_2_Hazmatsuit_Base 	{
		scope = 2;
		hiddenSelectionsTextures[]={
			"Erapulsar_Zombies_2\data\texts\Hazmatsuit\body_2_Blue_co.paa",
			"Erapulsar_Zombies_2\data\texts\Hazmatsuit\body_1_Blue_co.paa",
			"Erapulsar_Zombies_2\data\texts\Hazmatsuit\eye.paa"
		};
		class Skinning
		{
			class ObtainedGuts
			{
				item="Era_Zombies_2_sk_Hazmathead_Blue";
				count=1;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
		};
	};
	class Era_Zombies_2_Infected: Erapulsar_Zombies_2_ZombieInfectedBase {
		scope = 2;
		displayName = "$STR_ZombiesPlus_Infected0";
		descriptionShort = "$STR_ZombiesPlus_Infected1";
		model = "Erapulsar_Zombies_2\data\Infected.p3d";
		class Skinning
		{
			class ObtainedPelt
			{
				item="Era_Zombies_2_sk_Infectedleg";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="Era_Zombies_2_sk_infectefcable";
				count=1;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
		};
	};
	class Era_Zombies_2_Comrade : Erapulsar_Zombies_2_ZombieMillitaryBase {
		scope = 2;
		displayName = "$STR_ZombiesPlus_Comrade0";
		descriptionShort = "$STR_ZombiesPlus_Comrade1";
		model = "Erapulsar_Zombies_2\data\Comrade.p3d";
		hiddenSelections[] = {""};
		class Skinning
		{
			
			class ObtainedGuts
			{
				item="Era_Zombies_2_sk_ComradeHead";
				count=1;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
		};
	};
	class Era_Zombies_2_Pighead: Erapulsar_Zombies_2_ZombieMaleBase 	{
		scope = 2;
		displayName = "$STR_ZombiesPlus_Pighead0";
		descriptionShort = "$STR_ZombiesPlus_Pighead1";
		model = "Erapulsar_Zombies_2\data\Pighead.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsMaterials[] = {"",""};
		hiddenSelectionsTextures[] =  {"",""}; 
		class Skinning
		{
			class ObtainedGuts
			{
				item="Era_Zombies_2_sk_PigHead";
				count=1;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
		};
		class AnimEvents
		{
			class SoundVoice
			{
				class LightHit
				{
					soundSet = "ZmbM_Frank_LightHit_Soundset";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "ZmbM_Frank_HeavyHit_Soundset";
					id = 2;
				};
				class Attack
				{
					soundSet = "ZmbM_Frank_Attack_Soundset";
					id = 5;
				};
				class Jump
				{
					soundSet = "ZmbM_Skinny_Old_Jump_Soundset";
					id = 10;
				};
				class Land
				{
					soundSet = "ZmbM_Skinny_Old_Land_Soundset";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "ZmbM_Frank_CallToArmsShort_Soundset";
					id = 20;
				};
			};
		};
	};
	class Era_Zombies_2_Rhino: Erapulsar_Zombies_2_ZombieMaleBase 	{
		scope = 2;
		displayName = "$STR_ZombiesPlus_Rhino0";
		descriptionShort = "$STR_ZombiesPlus_Rhino1";
		model = "Erapulsar_Zombies_2\data\Rhino.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsMaterials[] = {"",""};
		hiddenSelectionsTextures[] =  {"",""}; 
		
		class AnimEvents
		{
			class SoundVoice
			{
				class LightHit
				{
					soundSet = "ZmbM_Frank_LightHit_Soundset";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "ZmbM_Frank_HeavyHit_Soundset";
					id = 2;
				};
				class Attack
				{
					soundSet = "ZmbM_Frank_Attack_Soundset";
					id = 5;
				};
				class Jump
				{
					soundSet = "ZmbM_Skinny_Old_Jump_Soundset";
					id = 10;
				};
				class Land
				{
					soundSet = "ZmbM_Skinny_Old_Land_Soundset";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "ZmbM_Frank_CallToArmsShort_Soundset";
					id = 20;
				};
			};
		};
	};
	class Era_Zombies_2_Robed: Erapulsar_Zombies_2_ZombieMaleBase 	{
		scope = 2;
		displayName = "$STR_ZombiesPlus_Robed0";
		descriptionShort = "$STR_ZombiesPlus_Robed1";
		model = "Erapulsar_Zombies_2\data\Robed.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsMaterials[] = {"",""};
		hiddenSelectionsTextures[] =  {"",""}; 
		class Skinning
		{ 
			class ObtainedGuts
			{
				item="Era_Zombies_2_sk_RobedHead";
				count=1;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
		};
		class AnimEvents
		{
			class SoundVoice
			{
				class LightHit
				{
					soundSet = "ZmbM_Frank_LightHit_Soundset";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "ZmbM_Frank_HeavyHit_Soundset";
					id = 2;
				};
				class Attack
				{
					soundSet = "ZmbM_Frank_Attack_Soundset";
					id = 5;
				};
				class Jump
				{
					soundSet = "ZmbM_Skinny_Old_Jump_Soundset";
					id = 10;
				};
				class Land
				{
					soundSet = "ZmbM_Skinny_Old_Land_Soundset";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "ZmbM_Frank_CallToArmsShort_Soundset";
					id = 20;
				};
			};
		};
	};
	class Era_Zombies_2_ShadowyFigure: Erapulsar_Zombies_2_ZombieMaleBase 	{
		scope = 2;
		displayName = "$STR_ZombiesPlus_ShadowyFigure0";
		descriptionShort = "$STR_ZombiesPlus_ShadowyFigure1";
		model = "Erapulsar_Zombies_2\data\ShadowyFigure.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsMaterials[] = {"",""};
		hiddenSelectionsTextures[] =  {"",""}; 
		class AnimEvents
		{
			class SoundVoice
			{
				class LightHit
				{
					soundSet = "ZmbM_Frank_LightHit_Soundset";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "ZmbM_Frank_HeavyHit_Soundset";
					id = 2;
				};
				class Attack
				{
					soundSet = "ZmbM_Frank_Attack_Soundset";
					id = 5;
				};
				class Jump
				{
					soundSet = "ZmbM_Skinny_Old_Jump_Soundset";
					id = 10;
				};
				class Land
				{
					soundSet = "ZmbM_Skinny_Old_Land_Soundset";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "ZmbM_Frank_CallToArmsShort_Soundset";
					id = 20;
				};
			};
		};
	};
	class Era_Zombies_2_Sloth: Erapulsar_Zombies_2_ZombieMaleBase 	{
		scope = 2;
		displayName = "$STR_ZombiesPlus_Sloth0";
		descriptionShort = "$STR_ZombiesPlus_Sloth1";
		model = "Erapulsar_Zombies_2\data\Sloth.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsMaterials[] = {"",""};
		hiddenSelectionsTextures[] =  {"",""}; 
		class AnimEvents
		{
			class SoundVoice
			{
				class LightHit
				{
					soundSet = "ZmbM_Frank_LightHit_Soundset";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "ZmbM_Frank_HeavyHit_Soundset";
					id = 2;
				};
				class Attack
				{
					soundSet = "ZmbM_Frank_Attack_Soundset";
					id = 5;
				};
				class Jump
				{
					soundSet = "ZmbM_Skinny_Old_Jump_Soundset";
					id = 10;
				};
				class Land
				{
					soundSet = "ZmbM_Skinny_Old_Land_Soundset";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "ZmbM_Frank_CallToArmsShort_Soundset";
					id = 20;
				};
			};
		};
	};
	class Era_Zombies_2_Twins: Erapulsar_Zombies_2_ZombieMaleBase 	{
		scope = 2;
		displayName = "$STR_ZombiesPlus_Twins0";
		descriptionShort = "$STR_ZombiesPlus_Twins1";
		model = "Erapulsar_Zombies_2\data\Twins.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsMaterials[] = {"",""};
		hiddenSelectionsTextures[] =  {"",""}; 
		class Skinning
		{
			class ObtainedPelt
			{
				item="Era_Zombies_2_sk_TwinsHead";
				count=1;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
		};
		class AnimEvents
		{
			class SoundVoice
			{
				class LightHit
				{
					soundSet = "ZmbM_Frank_LightHit_Soundset";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "ZmbM_Frank_HeavyHit_Soundset";
					id = 2;
				};
				class Attack
				{
					soundSet = "ZmbM_Frank_Attack_Soundset";
					id = 5;
				};
				class Jump
				{
					soundSet = "ZmbM_Skinny_Old_Jump_Soundset";
					id = 10;
				};
				class Land
				{
					soundSet = "ZmbM_Skinny_Old_Land_Soundset";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "ZmbM_Frank_CallToArmsShort_Soundset";
					id = 20;
				};
			};
		};
	};
};
