//===========================================================================
// Name:			items.c
// Function:		item configuration
// Programmer:		Mr Elusive (MrElusive@idsoftware.com)
// Update:			Small-Killer (small-killer@centrum.sk)\n
// Last update:		2013-07-22
// Tab Size:		4 (real tabs)
//===========================================================================
#include "inv.h"
#define ITEM_NONE					0
#define ITEM_AMMO					1
#define ITEM_WEAPON					2
#define ITEM_HEALTH					3
#define ITEM_ARMOR					4
#define ITEM_POWERUP				5
#define ITEM_KEY					6
#define ITEM_FLAG					7
//===================================
// WEAPONS 4.1.1
//===================================
iteminfo "ut_weapon_knife"
{
	name					"Knife"
	model					"models/weapons2/knife/knife.md3"
	modelindex				MODELINDEX_KNIFE
	type					ITEM_WEAPON
	index					INVENTORY_KNIFE
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo
iteminfo "ut_weapon_beretta"
{
	name					"Beretta"
	model					"models/weapons2/beretta/beretta.md3"
	modelindex				MODELINDEX_BERETTA
	type					ITEM_WEAPON
	index					INVENTORY_BERETTA
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
}
iteminfo "ut_weapon_deagle"
{
	name					"Desert Eagle"
	model					"models/weapons2/deserteagle/deagle.md3"
	modelindex				MODELINDEX_DEAGLE
	type					ITEM_WEAPON
	index					INVENTORY_DEAGLE
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} 
iteminfo "ut_weapon_spas12"
{
	name					"SPAS-12"
	model					"models/weapons2/spas12/spas12.md3"
	modelindex				MODELINDEX_SPAS12
	type					ITEM_WEAPON
	index					INVENTORY_SPAS12
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
}
iteminfo "ut_weapon_mp5k"
{
	name					"MP5k"
	model					"models/weapons2/mp5k/mp5k.md3"
	modelindex				MODELINDEX_MP5K
	type					ITEM_WEAPON
	index					INVENTORY_MP5K
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
}
iteminfo "ut_weapon_ump45"
{
	name					"UMP-45"
	model					"models/weapons2/ump45/ump45.md3"
	modelindex				MODELINDEX_UMP45
	type					ITEM_WEAPON
	index					INVENTORY_UMP45
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
}
iteminfo "ut_weapon_hk69"
{
	name					"HK-69"
	model					"models/weapons2/hk69/hk69.md3"
	modelindex				MODELINDEX_HK69
	type					ITEM_WEAPON
	index					INVENTORY_HK69
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
}
iteminfo "ut_weapon_m4"
{
	name					"M4"
	model					"models/weapons2/m4/m4.md3"
	modelindex				MODELINDEX_M4
	type					ITEM_WEAPON
	index					INVENTORY_M4
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
}
iteminfo "ut_weapon_g36"
{
	name					"G36"
	model					"models/weapons2/g36/g36.md3"
	modelindex				MODELINDEX_G36
	type					ITEM_WEAPON
	index					INVENTORY_G36
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
}
iteminfo "ut_weapon_psg1"
{
	name					"PSG1"
	model					"models/weapons2/psg1/psg1.md3"
	modelindex				MODELINDEX_PSG1
	type					ITEM_WEAPON
	index					INVENTORY_PSG1
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} 
iteminfo "ut_weapon_grenade_he"
{
	name					"HE-Grenade"
	model					"models/weapons2/grenade/grenade.md3"
	modelindex				MODELINDEX_GRENADE_HE
	type					ITEM_WEAPON
	index					INVENTORY_GRENADE_HE
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} 
iteminfo "ut_weapon_negev"
{
	name					"Negev"
	model					"models/weapons2/negev/negev.md3"
	modelindex				MODELINDEX_NEGEV
	type					ITEM_WEAPON
	index					INVENTORY_NEGEV
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} 
iteminfo "ut_weapon_grenade_smoke"
{
	name					"Smoke-Grenade"
	model					"models/weapons2/grenade/grenade.md3"
	modelindex				MODELINDEX_GRENADE_SMOKE
	type					ITEM_WEAPON
	index					INVENTORY_GRENADE_SMOKE
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} 
iteminfo "ut_weapon_sr8"
{
	name					"SR-8"
	model					"models/weapons2/sr8/sr8.md3"
	modelindex				MODELINDEX_SR8
	type					ITEM_WEAPON
	index					INVENTORY_SR8
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} 
iteminfo "ut_weapon_ak103"
{
	name					"AK103"
	model					"models/weapons2/ak103/ak103.md3"
	modelindex				MODELINDEX_AK103
	type					ITEM_WEAPON
	index					INVENTORY_AK103
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} 
//===================================
// CTF flags
//===================================
iteminfo "team_CTF_redflag"
{
	name					"Red Flag"
	model					"models/flags/r_flag.md3"
	modelindex				MODELINDEX_REDFLAG
	type					ITEM_FLAG
	index					INVENTORY_REDFLAG
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo
iteminfo "team_CTF_blueflag"
{
	name					"Blue Flag"
	model					"models/flags/b_flag.md3"
	modelindex				MODELINDEX_BLUEFLAG
	type					ITEM_FLAG
	index					INVENTORY_BLUEFLAG
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo
iteminfo "team_CTF_neutralflag"
{
	name					"Blue Flag"
	model					"models/flags/n_flag.md3"
	modelindex				MODELINDEX_NEUTRALFLAG
	type					ITEM_FLAG
	index					INVENTORY_NEUTRALFLAG
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo
//===================================
// Update 4.2.012
//===================================
iteminfo "ut_weapon_glock"
{
	name					"Glock"
	model					"models/weapons2/glock/glock.md3"
	modelindex				MODELINDEX_GLOCK
	type					ITEM_WEAPON
	index					INVENTORY_GLOCK
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
}
//===================================
// Update 4.2.014
//===================================
iteminfo "ut_weapon_colt"
{
	name					"Colt 1911"
	model					"models/weapons2/colt1911/colt1911.md3"
	modelindex				MODELINDEX_COLT
	type					ITEM_WEAPON
	index					INVENTORY_COLT
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} 
iteminfo "ut_weapon_mac"
{
	name					"Ingram MAC-11"
	model					"models/weapons2/mac11/mac11.md3"
	modelindex				MODELINDEX_MAC
	type					ITEM_WEAPON
	index					INVENTORY_MAC
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} 