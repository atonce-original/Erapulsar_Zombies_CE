class CfgPatches
{
	class EZF_Era_ZombieBaseMDF
	{
		units[]= {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= {"DZ_Characters","EZF_Era_ZombieBase"};
	};
};
class CfgVehicles
{
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
			class StepNoise 	{ strength = 10.0; type = "sound"; 	};
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
					class Health 	{ hitpoints = 30; transferToGlobalCoef = 1; 	};
					class ArmorType
					{
						class Projectile
						{
							class Health 	{ damage = 1.5; };
						};
						class Melee
						{
							class Health 	{ damage = 0.7; };
						};
						class FragGrenade
						{
							class Health { damage = 3; };
						};
					};
					componentNames[] = {"Head","Neck"};
					
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
							class Health 	{ damage = 1.2; };
						};
						class FragGrenade
						{
							class Health { damage = 2; };
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
						hitpoints = 100;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health 	{ damage = 2; };
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
						hitpoints = 100;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health 	{ damage = 2; };
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
};