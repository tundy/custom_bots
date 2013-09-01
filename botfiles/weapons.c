//===========================================================================
// Name:			weapons.c
// Function:		weapon configuration
// Programmer:		Mr Elusive (MrElusive@idsoftware.com)
// Update:			Small-Killer (small-killer@centrum.sk)\n
// Last update:		2013-07-22
// Tab Size:		4 (real tabs)
//===========================================================================
#include "inv.h"
#include "game.h"
#define VEC_ORIGIN						{0, 0, 0}
//projectile flags
#define PFL_WINDOWDAMAGE			1		//projectile damages through window
#define PFL_RETURN					2		//set when projectile returns to owner
//weapon flags
#define WFL_FIRERELEASED			1		//set when projectile is fired with key-up event
//damage types
#define DAMAGETYPE_IMPACT			1		//damage on impact
#define DAMAGETYPE_RADIAL			2		//radial damage
#define DAMAGETYPE_VISIBLE			4		//damage to all entities visible to the projectile
#define DAMAGETYPE_IGNOREARMOR	8		//projectile goes right through armor
#define WEAPONINDEX_KNIFE				1
#define WEAPONINDEX_BERETTA				2
#define WEAPONINDEX_DEAGLE				3
#define WEAPONINDEX_SPAS12				4
#define WEAPONINDEX_MP5K				5
#define WEAPONINDEX_UMP45				6
#define WEAPONINDEX_HK69				7
#define WEAPONINDEX_M4					8
#define WEAPONINDEX_G36					9
#define WEAPONINDEX_PSG1				10
#define WEAPONINDEX_GRENADE_HE			11
#define WEAPONINDEX_NEGEV				17
#define WEAPONINDEX_GRENADE_SMOKE		13
#define WEAPONINDEX_SR8					14
#define WEAPONINDEX_AK103				15
// Update 4.2.012
#define WEAPONINDEX_GLOCK				16
// Update 4.2.014
#define WEAPONINDEX_COLT				17
#define WEAPONINDEX_MAC					18
//===========================================================================
// Knife
//===========================================================================
projectileinfo
{
	name				"knifehit"
	damage				40
	damagetype			DAMAGETYPE_IMPACT
}
weaponinfo
{
	name				"Knife"
	number				WEAPONINDEX_KNIFE
	projectile			"knifehit"
	numprojectiles		1
	speed				0
}
//===========================================================================
// Beretta
//===========================================================================
projectileinfo
{
	name				"Beretta Bullet"
	damage				10
	damagetype			DAMAGETYPE_IMPACT
}
weaponinfo 
{
	name				"Beretta"
	number				WEAPONINDEX_BERETTA
	projectile			"Beretta Bullet"
	numprojectiles		1
	speed				0
}
//===========================================================================
// Desert Eagle
//===========================================================================
projectileinfo //for Desert Eagle
{
	name				"de bullet"
	damage				10
	damagetype			DAMAGETYPE_IMPACT
}
weaponinfo //for desert eagle
{
	name				"Desert Eagle"
	number				WEAPONINDEX_DEAGLE
	projectile			"de bullet"
	numprojectiles		1
	speed				0
} //end weaponinfo
//===========================================================================
// Spas12
//===========================================================================
projectileinfo //for Spas12
{
	name				"spas12bullet"
	damage				10
	damagetype			DAMAGETYPE_IMPACT
}
weaponinfo //for Spas12
{
	name				"Spas12"
	number				WEAPONINDEX_SPAS12
	projectile			"spas12bullet"
	numprojectiles		10
	speed				0
} //end weaponinfo
//===========================================================================
// MP5K
//===========================================================================
projectileinfo //for MP5K
{
	name				"MP5K bullet"
	damage				10
	damagetype			DAMAGETYPE_IMPACT
}
weaponinfo //for MP5K
{
	name				"MP5K"
	number				WEAPONINDEX_MP5K
	projectile			"MP5K bullet"
	numprojectiles		1
	speed				0
} //end weaponinfo
//===========================================================================
// UMP45
//===========================================================================
projectileinfo //for ump45
{
	name				"45 bullet"
	damage				10
	damagetype			DAMAGETYPE_IMPACT
}
weaponinfo //for ump45
{
	name				"UMP 45"
	number				WEAPONINDEX_UMP45
	projectile			"45 bullet"
	numprojectiles		1
	speed				0
} //end weaponinfo
//===========================================================================
// HK69
//===========================================================================
projectileinfo //for HK69
{
	name				"HK69 shell"
	damage				120
	radius				160
	damagetype			$evalint(DAMAGETYPE_IMPACT|DAMAGETYPE_RADIAL)
}
weaponinfo //for HK69
{
	name				"HK69"
	number				WEAPONINDEX_HK69
	projectile			"HK69 shell"
	numprojectiles		1
	speed				700
} //end weaponinfo
//===========================================================================
// M4
//===========================================================================
projectileinfo //for m4
{
	name				"M4 bullet"
	damage				10
	damagetype			DAMAGETYPE_IMPACT
}
weaponinfo //m4
{
	name				"M4"
	number				WEAPONINDEX_M4
	projectile			"M4 bullet"
	numprojectiles		1
	speed				0
} //end weaponinfo
//===========================================================================
// G36
//===========================================================================
projectileinfo //for G36
{
	name				"G36 bullet"
	damage				10
	damagetype			DAMAGETYPE_IMPACT
}
weaponinfo //G36
{
	name				"G36"
	number				WEAPONINDEX_G36
	projectile			"G36 bullet"
	numprojectiles		1
	speed				0
} //end weaponinfo

//===========================================================================
// PSG1
//===========================================================================
projectileinfo //for PSG1
{
	name				"PSG1 bullet"
	damage				40
	damagetype			DAMAGETYPE_IMPACT
}
weaponinfo //PSG1
{
	name				"PSG1"
	number				WEAPONINDEX_PSG1
	projectile			"PSG1 bullet"
	numprojectiles		1
	speed				0
} //end weaponinfo
//===========================================================================
// GRENADE HE
//===========================================================================
projectileinfo //for GRENADE HE
{
	name				"Grenade HE"
	damage				120
	radius				160
	damagetype			$evalint(DAMAGETYPE_IMPACT|DAMAGETYPE_RADIAL)
}
weaponinfo //for HK69
{
	name				"Grenade HE Weapon"
	number				WEAPONINDEX_GRENADE_HE
	projectile			"Grenade HE"
	numprojectiles		1
	speed				700
} //end weaponinfo
//===========================================================================
// NEGEV
//===========================================================================
projectileinfo //for NEGEV
{
	name				"Negev bullet"
	damage				10
	damagetype			DAMAGETYPE_IMPACT
}
weaponinfo //for HK69
{
	name				"Negev"
	number				WEAPONINDEX_NEGEV
	projectile			"Negev bullet"
	numprojectiles		1
	speed				0
} //end weaponinfo
//===========================================================================
// GRENADE SMOKE
//===========================================================================
projectileinfo //for GRENADE SMOKE
{
	name				"Grenade Smoke"
	damage				120
	radius				160
	damagetype			$evalint(DAMAGETYPE_IMPACT|DAMAGETYPE_RADIAL)
}
weaponinfo //for GRENADE SMOKE
{
	name				"Grenade Smoke Weapon"
	number				WEAPONINDEX_GRENADE_SMOKE
	projectile			"Grenade Smoke"
	numprojectiles		1
	speed				700
} //end weaponinfo
//===========================================================================
// SR8
//===========================================================================
projectileinfo //for SR8
{
	name				"SR8 bullet"
	damage				40
	damagetype			DAMAGETYPE_IMPACT
}
weaponinfo //SR8
{
	name				"SR8"
	number				WEAPONINDEX_SR8
	projectile			"SR8 bullet"
	numprojectiles		1
	speed				0
} //end weaponinfo
//===========================================================================
// AK103
//===========================================================================
projectileinfo //for AK103
{
	name				"AK103 bullet"
	damage				10
	damagetype			DAMAGETYPE_IMPACT
}
weaponinfo //AK103
{
	name				"AK103"
	number				WEAPONINDEX_AK103
	projectile			"AK103 bullet"
	numprojectiles		1
	speed				0
} //end weaponinfo
//===========================================================================
// Update 4.2.012
//===========================================================================
// Glock
//===========================================================================
projectileinfo
{
	name				"Glock Bullet"
	damage				10
	damagetype			DAMAGETYPE_IMPACT
}
weaponinfo 
{
	name				"Glock"
	number				WEAPONINDEX_GLOCK
	projectile			"Glock Bullet"
	numprojectiles		1
	speed				0
} //end weaponinfo
//===========================================================================
// Update 4.2.014
//===========================================================================
// Colt
//===========================================================================
projectileinfo
{
	name				"Colt Bullet"
	damage				10
	damagetype			DAMAGETYPE_IMPACT
}
weaponinfo 
{
	name				"Colt"
	number				WEAPONINDEX_COLT
	projectile			"Colt Bullet"
	numprojectiles		1
	speed				0
} //end weaponinfo
//===========================================================================
// Mac
//===========================================================================
projectileinfo
{
	name				"Mac bullet"
	damage				10
	damagetype			DAMAGETYPE_IMPACT
}
weaponinfo
{
	name				"Mac"
	number				WEAPONINDEX_MAC
	projectile			"Mac bullet"
	numprojectiles		1
	speed				0
} //end weaponinfo