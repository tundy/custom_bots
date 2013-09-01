//===========================================================================
// Name:			fw_weap.c
// Function:
// Programmer:		Mr Elusive (MrElusive@idsoftware.com)
// Update:			Small-Killer (small-killer@centrum.sk)
// Last update:		2013-07-22
// Tab Size:		4 (real tabs)
//===========================================================================
weight "Knife"
{
	switch(INVENTORY_KNIFE)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_KNIFE_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 64: return W_KNIFE;
						default: return $evalint(W_KNIFE*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight
weight "Beretta"
{
	switch(INVENTORY_BERETTA)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_BERETTA_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 512: return W_BERETTA;
						default: return $evalint(W_BERETTA*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight
weight "Desert Eagle"
{
	switch(INVENTORY_DEAGLE)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_DEAGLE_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 512: return W_DEAGLE;
						default: return $evalint(W_DEAGLE*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight
weight "Spas12"
{
	switch(INVENTORY_SPAS12)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_SPAS12_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 512: return W_SPAS12;
						default: return $evalint(W_SPAS12*0.1);
					} //end switch
					
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight
weight "MP5K"
{
	switch(INVENTORY_MP5K)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_MP5K_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 768: return W_MP5K;
						default: return $evalint(W_MP5K*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight
weight "UMP 45"
{
	switch(INVENTORY_UMP45)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_UMP45_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 768: return W_UMP45;
						default: return $evalint(W_UMP45*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight
weight "HK69"
{
	switch(INVENTORY_HK69)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_HK69_AMMO)
			{
				case 1: return 0;
				default: return W_HK69;		// No ENEMY_HORIZONTAL_DIST ??
			} //end switch
		} //end default
	} //end switch
} //end weight
weight "M4"
{
	switch(INVENTORY_M4)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_M4_AMMO)
			{
				case 1: return 0;
				default: return W_M4;		// No ENEMY_HORIZONTAL_DIST ??
			} //end switch
		} //end default
	} //end switch
} //end weight
weight "G36"
{
	switch(INVENTORY_G36)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_G36_AMMO)
			{
				case 1: return 0;
				default: return W_G36;		// No ENEMY_HORIZONTAL_DIST ??
			} //end switch
		} //end default
	} //end switch
} //end weight
weight "PSG1"
{
	switch(INVENTORY_PSG1)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_PSG1_AMMO)
			{
				case 1: return 0;
				default:
				{
				switch(ENEMY_HORIZONTAL_DIST)
					{
						case 768: return $evalint(W_PSG1*0.1);
						case 2048: return W_PSG1;
						default: return $evalint(W_PSG1*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight
weight "Grenade HE"
{
	switch(INVENTORY_GRENADE_HE)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_GRENADE_HE_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 512: return W_GRENADE_HE;
						default: return $evalint(W_GRENADE_HE*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight
weight "Negev"
{
	switch(INVENTORY_NEGEV)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_NEGEV_AMMO)
			{
				case 1: return 0;
				default: return W_NEGEV;		// No ENEMY_HORIZONTAL_DIST ??
			} //end switch
		} //end default
	} //end switch
} //end weight
weight "SR8"
{
	switch(INVENTORY_SR8)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_SR8_AMMO)
			{
				case 1: return 0;
				default:
				{
				switch(ENEMY_HORIZONTAL_DIST)
					{
						case 768: return $evalint(W_SR8*0.1);
						case 2048: return W_SR8;
						default: return $evalint(W_SR8*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight
weight "Grenade Smoke"
{
	switch(INVENTORY_GRENADE_SMOKE)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_GRENADE_SMOKE_AMMO)
			{
				case 1: return 0;
				default: return W_GRENADE_SMOKE;		// No ENEMY_HORIZONTAL_DIST ??
			} //end switch
		} //end default
	} //end switch
} //end weight
weight "AK103"
{
	switch(INVENTORY_AK103)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_AK103_AMMO)
			{
				case 1: return 0;
				default:return W_AK103;		// No ENEMY_HORIZONTAL_DIST ??
			} //end switch
		} //end default
	} //end switch
} //end weight
//=============================================
// Update 4.2.012
//=============================================
weight "Glock"
{
	switch(INVENTORY_GLOCK)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_GLOCK_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 512: return W_GLOCK;
						default: return $evalint(W_GLOCK*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight
//=============================================
// Update 4.2.014
//=============================================
weight "Colt"
{
	switch(INVENTORY_COLT)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_COLT_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 512: return W_COLT;
						default: return $evalint(W_COLT*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight
weight "Colt"
{
	switch(INVENTORY_MAC)
	{
		case 1: return 0;
		default:
		{
			switch(INVENTORY_MAC_AMMO)
			{
				case 1: return 0;
				default:
				{
					switch(ENEMY_HORIZONTAL_DIST)
					{
						case 512: return W_MAC;
						default: return $evalint(W_MAC*0.1);
					} //end switch
				} //end default
			} //end switch
		} //end default
	} //end switch
} //end weight