# CfgPatches — this is the configuration block where you declare your mod.
It specifies which classes and dependencies the mod has.

class EZF_Era_ZombieBaseMDF — this is the name of your mod/patch.

# EZF_Era_ZombieBase — this is the original base from EZF (the original mod).

The suffix MDF at the end was added by you to clearly indicate that this is a modification of the original class.

Thus, EZF_Era_ZombieBaseMDF is already your new mod package that is applied on top of the original EZF.

requiredAddons[]= {"DZ_Characters","EZF_Era_ZombieBase"};

Here you specify that your mod cannot be loaded without:

# DZ_Characters (the default DayZ characters package).

# EZF_Era_ZombieBase (the original EZF zombie base class).

This means that the game will first load the original base and only then apply your modification.

# Meaning:

The original EZF contains EZF_Era_ZombieBase.

You are creating the mod EZF_Era_ZombieBaseMDF, which modifies and extends the original base.

The suffix MDF is simply your way to mark that the class is modified.
