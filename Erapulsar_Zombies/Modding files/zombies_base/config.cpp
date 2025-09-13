class CfgPatches
{
	class Erapulsar_Zombies_ClientMDF
	{
		units[]= {"Era_ZombieFemaleBase","Era_ZombieMaleBase","Era_ZombieMaleMEDIUM_Base","Era_ZombieMaleHARD_Base","Era_ZombieFemaleMEDIUM_Base","Era_ZombieFemaleHARD_Base"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= {"DZ_Characters","EZF_Era_ZombieBase","Erapulsar_Zombies_Client"};
	};
};
class CfgMods 
{
    class Erapulsar_Zombies_ClientMDF
    {
        name = "Erapulsar_Zombies_ClientMDF";
        author = "atonce";
        version = 2.2;
        type = "mod";
    };
}; 
class CfgVehicles
{
	class Era_ZombieBase;
	class Era_ZombieFemaleBase: Era_ZombieBase{
		scope = 0;
		meleeAmmo = "MeleeZombieFemale";
		aiAgentTemplate = "InfectedFemale";
		woman = 1;
		clothingType = "female";
		class Wounds
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
		class Wounds
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