/* $Id$ */

/** @file src/table/structureinfo.c StructureInfo file table. */

#include <stdio.h>
#include "types.h"

#include "../structure.h"

StructureInfo g_table_structureInfo[] = {
	{ /* 0 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 232, /* "Concrete" */
		/* name                 */ "Concrete",
		/* stringID_full        */ 233, /* "Small Concrete Slab" */
		/* wsa                  */ "slab.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ false,
		/* notused_0004         */ true,
		/* notOnConcrete        */ true,
		/* variable_0010        */ false,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ false,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 0,
		/* hitpoints            */ 20,
		/* fogUncoverRadius     */ 1,
		/* spriteID             */ 65,
		/* buildCredits         */ 5,
		/* buildTime            */ 16,
		/* availableCampaign    */ 1,
		/* structuresRequired   */ 0,
		/* sortPriority         */ 2,
		/* upgradeLevelRequired */ 0,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 2,
		/* priorityBuild        */ 0,
		/* priorityTarget       */ 5,
		/* availableHouse       */ 63,
		},
		/* enterFilter          */ 0,
		/* creditsStorage       */ 0,
		/* powerUsage           */ 0,
		/* layout               */ STRUCTURE_LAYOUT_1x1,
		/* iconGroup            */ 8,
		{ /* animationIndex */
		/* [0]                  */ 2,
		/* [1]                  */ 2,
		/* [2]                  */ 2
		},
		{ /* buildableUnits */
		/* [0]                  */ -1,
		/* [1]                  */ -1,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 0,
		/* [1]                  */ 0,
		/* [2]                  */ 0,
		},
	},

	{ /* 1 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 234, /* "Concrete 4" */
		/* name                 */ "Concrete4",
		/* stringID_full        */ 235, /* "Large Concrete Slab" */
		/* wsa                  */ "4slab.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ false,
		/* notused_0004         */ true,
		/* notOnConcrete        */ true,
		/* variable_0010        */ false,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ false,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 0,
		/* hitpoints            */ 20,
		/* fogUncoverRadius     */ 1,
		/* spriteID             */ 83,
		/* buildCredits         */ 20,
		/* buildTime            */ 16,
		/* availableCampaign    */ 4,
		/* structuresRequired   */ 0,
		/* sortPriority         */ 4,
		/* upgradeLevelRequired */ 1,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 2,
		/* priorityBuild        */ 0,
		/* priorityTarget       */ 10,
		/* availableHouse       */ 63,
		},
		/* enterFilter          */ 0,
		/* creditsStorage       */ 0,
		/* powerUsage           */ 0,
		/* layout               */ STRUCTURE_LAYOUT_2x2,
		/* iconGroup            */ 8,
		{ /* animationIndex */
		/* [0]                  */ 2,
		/* [1]                  */ 2,
		/* [2]                  */ 2
		},
		{ /* buildableUnits */
		/* [0]                  */ -1,
		/* [1]                  */ -1,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 0,
		/* [1]                  */ 0,
		/* [2]                  */ 0,
		},
	},

	{ /* 2 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 236, /* "Palace" */
		/* name                 */ "Palace",
		/* stringID_full        */ 237, /* "House Palace" */
		/* wsa                  */ "palace.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ false,
		/* notused_0004         */ false,
		/* notOnConcrete        */ false,
		/* variable_0010        */ false,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ false,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 128,
		/* hitpoints            */ 1000,
		/* fogUncoverRadius     */ 5,
		/* spriteID             */ 66,
		/* buildCredits         */ 999,
		/* buildTime            */ 130,
		/* availableCampaign    */ 8,
		/* structuresRequired   */ 2048,
		/* sortPriority         */ 5,
		/* upgradeLevelRequired */ 0,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 3,
		/* priorityBuild        */ 0,
		/* priorityTarget       */ 400,
		/* availableHouse       */ 63,
		},
		/* enterFilter          */ 0,
		/* creditsStorage       */ 0,
		/* powerUsage           */ 80,
		/* layout               */ STRUCTURE_LAYOUT_3x3,
		/* iconGroup            */ 11,
		{ /* animationIndex */
		/* [0]                  */ 4,
		/* [1]                  */ 4,
		/* [2]                  */ 4
		},
		{ /* buildableUnits */
		/* [0]                  */ -1,
		/* [1]                  */ -1,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 0,
		/* [1]                  */ 0,
		/* [2]                  */ 0,
		},
	},

	{ /* 3 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 238, /* "Light Fctry" */
		/* name                 */ "Light Fctry",
		/* stringID_full        */ 239, /* "Light Vehicle Factory" */
		/* wsa                  */ "liteftry.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ true,
		/* notused_0004         */ false,
		/* notOnConcrete        */ false,
		/* variable_0010        */ false,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ true,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 64,
		/* hitpoints            */ 350,
		/* fogUncoverRadius     */ 3,
		/* spriteID             */ 67,
		/* buildCredits         */ 400,
		/* buildTime            */ 96,
		/* availableCampaign    */ 3,
		/* structuresRequired   */ 4608,
		/* sortPriority         */ 14,
		/* upgradeLevelRequired */ 0,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 4,
		/* priorityBuild        */ 0,
		/* priorityTarget       */ 200,
		/* availableHouse       */ 63,
		},
		/* enterFilter          */ 0,
		/* creditsStorage       */ 0,
		/* powerUsage           */ 20,
		/* layout               */ STRUCTURE_LAYOUT_2x2,
		/* iconGroup            */ 12,
		{ /* animationIndex */
		/* [0]                  */ 14,
		/* [1]                  */ 15,
		/* [2]                  */ 16
		},
		{ /* buildableUnits */
		/* [0]                  */ 13,
		/* [1]                  */ 15,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 3,
		/* [1]                  */ 0,
		/* [2]                  */ 0,
		},
	},

	{ /* 4 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 240, /* "Heavy Fctry" */
		/* name                 */ "Heavy Fctry",
		/* stringID_full        */ 241, /* "Heavy Vehicle Factory" */
		/* wsa                  */ "hvyftry.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ true,
		/* notused_0004         */ false,
		/* notOnConcrete        */ false,
		/* variable_0010        */ false,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ true,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 64,
		/* hitpoints            */ 200,
		/* fogUncoverRadius     */ 3,
		/* spriteID             */ 68,
		/* buildCredits         */ 600,
		/* buildTime            */ 144,
		/* availableCampaign    */ 4,
		/* structuresRequired   */ 262664,
		/* sortPriority         */ 28,
		/* upgradeLevelRequired */ 0,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 5,
		/* priorityBuild        */ 0,
		/* priorityTarget       */ 600,
		/* availableHouse       */ 63,
		},
		/* enterFilter          */ 0,
		/* creditsStorage       */ 0,
		/* powerUsage           */ 35,
		/* layout               */ STRUCTURE_LAYOUT_3x2,
		/* iconGroup            */ 13,
		{ /* animationIndex */
		/* [0]                  */ 11,
		/* [1]                  */ 12,
		/* [2]                  */ 13
		},
		{ /* buildableUnits */
		/* [0]                  */ 10,
		/* [1]                  */ 7,
		/* [2]                  */ 16,
		/* [3]                  */ 9,
		/* [4]                  */ 11,
		/* [5]                  */ 8,
		/* [6]                  */ 17,
		/* [7]                  */ 12,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 4,
		/* [1]                  */ 5,
		/* [2]                  */ 6,
		},
	},

	{ /* 5 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 242, /* "High-Tech" */
		/* name                 */ "Hi-Tech",
		/* stringID_full        */ 243, /* "High-Tech Factory" */
		/* wsa                  */ "hitcftry.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ true,
		/* notused_0004         */ false,
		/* notOnConcrete        */ false,
		/* variable_0010        */ false,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ true,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 64,
		/* hitpoints            */ 400,
		/* fogUncoverRadius     */ 3,
		/* spriteID             */ 69,
		/* buildCredits         */ 500,
		/* buildTime            */ 120,
		/* availableCampaign    */ 5,
		/* structuresRequired   */ 262664,
		/* sortPriority         */ 30,
		/* upgradeLevelRequired */ 0,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 6,
		/* priorityBuild        */ 0,
		/* priorityTarget       */ 200,
		/* availableHouse       */ 63,
		},
		/* enterFilter          */ 0,
		/* creditsStorage       */ 0,
		/* powerUsage           */ 35,
		/* layout               */ STRUCTURE_LAYOUT_3x2,
		/* iconGroup            */ 14,
		{ /* animationIndex */
		/* [0]                  */ 8,
		/* [1]                  */ 9,
		/* [2]                  */ 10
		},
		{ /* buildableUnits */
		/* [0]                  */ 0,
		/* [1]                  */ 1,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 7,
		/* [1]                  */ 0,
		/* [2]                  */ 0,
		},
	},

	{ /* 6 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 244, /* "IX" */
		/* name                 */ "IX",
		/* stringID_full        */ 245, /* "House of IX" */
		/* wsa                  */ "ix.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ false,
		/* notused_0004         */ false,
		/* notOnConcrete        */ false,
		/* variable_0010        */ false,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ false,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 192,
		/* hitpoints            */ 400,
		/* fogUncoverRadius     */ 3,
		/* spriteID             */ 70,
		/* buildCredits         */ 500,
		/* buildTime            */ 120,
		/* availableCampaign    */ 7,
		/* structuresRequired   */ 6656,
		/* sortPriority         */ 34,
		/* upgradeLevelRequired */ 0,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 7,
		/* priorityBuild        */ 0,
		/* priorityTarget       */ 100,
		/* availableHouse       */ 63,
		},
		/* enterFilter          */ 0,
		/* creditsStorage       */ 0,
		/* powerUsage           */ 40,
		/* layout               */ STRUCTURE_LAYOUT_2x2,
		/* iconGroup            */ 15,
		{ /* animationIndex */
		/* [0]                  */ 20,
		/* [1]                  */ 20,
		/* [2]                  */ 20
		},
		{ /* buildableUnits */
		/* [0]                  */ -1,
		/* [1]                  */ -1,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 0,
		/* [1]                  */ 0,
		/* [2]                  */ 0,
		},
	},

	{ /* 7 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 246, /* "WOR" */
		/* name                 */ "WOR",
		/* stringID_full        */ 247, /* "WOR Trooper Facility" */
		/* wsa                  */ "wor.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ true,
		/* notused_0004         */ false,
		/* notOnConcrete        */ false,
		/* variable_0010        */ false,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ false,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 128,
		/* hitpoints            */ 400,
		/* fogUncoverRadius     */ 3,
		/* spriteID             */ 71,
		/* buildCredits         */ 400,
		/* buildTime            */ 104,
		/* availableCampaign    */ 5,
		/* structuresRequired   */ 263680,
		/* sortPriority         */ 20,
		/* upgradeLevelRequired */ 0,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 8,
		/* priorityBuild        */ 0,
		/* priorityTarget       */ 175,
		/* availableHouse       */ 61,
		},
		/* enterFilter          */ 0,
		/* creditsStorage       */ 0,
		/* powerUsage           */ 20,
		/* layout               */ STRUCTURE_LAYOUT_2x2,
		/* iconGroup            */ 16,
		{ /* animationIndex */
		/* [0]                  */ 21,
		/* [1]                  */ 21,
		/* [2]                  */ 21
		},
		{ /* buildableUnits */
		/* [0]                  */ 5,
		/* [1]                  */ 3,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 6,
		/* [1]                  */ 0,
		/* [2]                  */ 0,
		},
	},

	{ /* 8 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 248, /* "Const. Yard" */
		/* name                 */ "Const Yard",
		/* stringID_full        */ 249, /* "Construction Yard" */
		/* wsa                  */ "construc.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ true,
		/* notused_0004         */ false,
		/* notOnConcrete        */ true,
		/* variable_0010        */ false,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ true,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 64,
		/* hitpoints            */ 400,
		/* fogUncoverRadius     */ 3,
		/* spriteID             */ 72,
		/* buildCredits         */ 400,
		/* buildTime            */ 80,
		/* availableCampaign    */ 99,
		/* structuresRequired   */ -1,
		/* sortPriority         */ 0,
		/* upgradeLevelRequired */ 0,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 9,
		/* priorityBuild        */ 0,
		/* priorityTarget       */ 300,
		/* availableHouse       */ 63,
		},
		/* enterFilter          */ 0,
		/* creditsStorage       */ 0,
		/* powerUsage           */ 0,
		/* layout               */ STRUCTURE_LAYOUT_2x2,
		/* iconGroup            */ 17,
		{ /* animationIndex */
		/* [0]                  */ 22,
		/* [1]                  */ 22,
		/* [2]                  */ 22
		},
		{ /* buildableUnits */
		/* [0]                  */ -1,
		/* [1]                  */ -1,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 4,
		/* [1]                  */ 6,
		/* [2]                  */ 0,
		},
	},

	{ /* 9 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 250, /* "Windtrap" */
		/* name                 */ "Windtrap",
		/* stringID_full        */ 251, /* "Windtrap Power Center" */
		/* wsa                  */ "windtrap.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ false,
		/* notused_0004         */ false,
		/* notOnConcrete        */ false,
		/* variable_0010        */ false,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ true,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 64,
		/* hitpoints            */ 200,
		/* fogUncoverRadius     */ 2,
		/* spriteID             */ 73,
		/* buildCredits         */ 300,
		/* buildTime            */ 48,
		/* availableCampaign    */ 1,
		/* structuresRequired   */ 0,
		/* sortPriority         */ 6,
		/* upgradeLevelRequired */ 0,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 10,
		/* priorityBuild        */ 0,
		/* priorityTarget       */ 300,
		/* availableHouse       */ 63,
		},
		/* enterFilter          */ 0,
		/* creditsStorage       */ 0,
		/* powerUsage           */ -100,
		/* layout               */ STRUCTURE_LAYOUT_2x2,
		/* iconGroup            */ 19,
		{ /* animationIndex */
		/* [0]                  */ 26,
		/* [1]                  */ 26,
		/* [2]                  */ 26
		},
		{ /* buildableUnits */
		/* [0]                  */ -1,
		/* [1]                  */ -1,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 0,
		/* [1]                  */ 0,
		/* [2]                  */ 0,
		},
	},

	{ /* 10 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 252, /* "Barracks" */
		/* name                 */ "Barracks",
		/* stringID_full        */ 253, /* "Infantry Barracks" */
		/* wsa                  */ "barrac.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ true,
		/* notused_0004         */ false,
		/* notOnConcrete        */ false,
		/* variable_0010        */ false,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ false,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 128,
		/* hitpoints            */ 300,
		/* fogUncoverRadius     */ 2,
		/* spriteID             */ 74,
		/* buildCredits         */ 300,
		/* buildTime            */ 72,
		/* availableCampaign    */ 2,
		/* structuresRequired   */ 262656,
		/* sortPriority         */ 18,
		/* upgradeLevelRequired */ 0,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 11,
		/* priorityBuild        */ 0,
		/* priorityTarget       */ 100,
		/* availableHouse       */ 62,
		},
		/* enterFilter          */ 0,
		/* creditsStorage       */ 0,
		/* powerUsage           */ 10,
		/* layout               */ STRUCTURE_LAYOUT_2x2,
		/* iconGroup            */ 18,
		{ /* animationIndex */
		/* [0]                  */ 28,
		/* [1]                  */ 28,
		/* [2]                  */ 28
		},
		{ /* buildableUnits */
		/* [0]                  */ 4,
		/* [1]                  */ 2,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 2,
		/* [1]                  */ 0,
		/* [2]                  */ 0,
		},
	},

	{ /* 11 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 254, /* "Starport" */
		/* name                 */ "Starport",
		/* stringID_full        */ 255, /* "Starport Facility" */
		/* wsa                  */ "starport.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ true,
		/* notused_0004         */ false,
		/* notOnConcrete        */ false,
		/* variable_0010        */ true,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ true,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 128,
		/* hitpoints            */ 500,
		/* fogUncoverRadius     */ 6,
		/* spriteID             */ 75,
		/* buildCredits         */ 500,
		/* buildTime            */ 120,
		/* availableCampaign    */ 6,
		/* structuresRequired   */ 4608,
		/* sortPriority         */ 32,
		/* upgradeLevelRequired */ 0,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 12,
		/* priorityBuild        */ 0,
		/* priorityTarget       */ 250,
		/* availableHouse       */ 63,
		},
		/* enterFilter          */ 0,
		/* creditsStorage       */ 0,
		/* powerUsage           */ 50,
		/* layout               */ STRUCTURE_LAYOUT_3x3,
		/* iconGroup            */ 20,
		{ /* animationIndex */
		/* [0]                  */ 5,
		/* [1]                  */ 6,
		/* [2]                  */ 7
		},
		{ /* buildableUnits */
		/* [0]                  */ -1,
		/* [1]                  */ -1,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 0,
		/* [1]                  */ 0,
		/* [2]                  */ 0,
		},
	},

	{ /* 12 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 256, /* "Refinery" */
		/* name                 */ "Refinery",
		/* stringID_full        */ 257, /* "Spice Refinery" */
		/* wsa                  */ "refinery.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ false,
		/* notused_0004         */ false,
		/* notOnConcrete        */ false,
		/* variable_0010        */ true,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ true,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 128,
		/* hitpoints            */ 450,
		/* fogUncoverRadius     */ 4,
		/* spriteID             */ 76,
		/* buildCredits         */ 400,
		/* buildTime            */ 80,
		/* availableCampaign    */ 1,
		/* structuresRequired   */ 512,
		/* sortPriority         */ 8,
		/* upgradeLevelRequired */ 0,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 13,
		/* priorityBuild        */ 0,
		/* priorityTarget       */ 300,
		/* availableHouse       */ 63,
		},
		/* enterFilter          */ 65536,
		/* creditsStorage       */ 1005,
		/* powerUsage           */ 30,
		/* layout               */ STRUCTURE_LAYOUT_3x2,
		/* iconGroup            */ 21,
		{ /* animationIndex */
		/* [0]                  */ 17,
		/* [1]                  */ 18,
		/* [2]                  */ 19
		},
		{ /* buildableUnits */
		/* [0]                  */ -1,
		/* [1]                  */ -1,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 0,
		/* [1]                  */ 0,
		/* [2]                  */ 0,
		},
	},

	{ /* 13 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 258, /* "Repair" */
		/* name                 */ "Repair",
		/* stringID_full        */ 259, /* "Repair Facility" */
		/* wsa                  */ "repair.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ false,
		/* notused_0004         */ false,
		/* notOnConcrete        */ false,
		/* variable_0010        */ false,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ true,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 128,
		/* hitpoints            */ 200,
		/* fogUncoverRadius     */ 3,
		/* spriteID             */ 77,
		/* buildCredits         */ 700,
		/* buildTime            */ 80,
		/* availableCampaign    */ 5,
		/* structuresRequired   */ 262664,
		/* sortPriority         */ 24,
		/* upgradeLevelRequired */ 0,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 14,
		/* priorityBuild        */ 0,
		/* priorityTarget       */ 600,
		/* availableHouse       */ 63,
		},
		/* enterFilter          */ 130944,
		/* creditsStorage       */ 0,
		/* powerUsage           */ 20,
		/* layout               */ STRUCTURE_LAYOUT_3x2,
		/* iconGroup            */ 22,
		{ /* animationIndex */
		/* [0]                  */ 23,
		/* [1]                  */ 24,
		/* [2]                  */ 25
		},
		{ /* buildableUnits */
		/* [0]                  */ -1,
		/* [1]                  */ -1,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 0,
		/* [1]                  */ 0,
		/* [2]                  */ 0,
		},
	},

	{ /* 14 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 260, /* "Wall" */
		/* name                 */ "Wall",
		/* stringID_full        */ 261, /* "Base Defense Wall" */
		/* wsa                  */ "wall.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ false,
		/* notused_0004         */ true,
		/* notOnConcrete        */ false,
		/* variable_0010        */ false,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ false,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 0,
		/* hitpoints            */ 50,
		/* fogUncoverRadius     */ 1,
		/* spriteID             */ 78,
		/* buildCredits         */ 50,
		/* buildTime            */ 40,
		/* availableCampaign    */ 4,
		/* structuresRequired   */ 262656,
		/* sortPriority         */ 16,
		/* upgradeLevelRequired */ 0,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 15,
		/* priorityBuild        */ 0,
		/* priorityTarget       */ 30,
		/* availableHouse       */ 63,
		},
		/* enterFilter          */ 0,
		/* creditsStorage       */ 0,
		/* powerUsage           */ 0,
		/* layout               */ STRUCTURE_LAYOUT_1x1,
		/* iconGroup            */ 6,
		{ /* animationIndex */
		/* [0]                  */ 0xFF,
		/* [1]                  */ 0xFF,
		/* [2]                  */ 0xFF
		},
		{ /* buildableUnits */
		/* [0]                  */ -1,
		/* [1]                  */ -1,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 0,
		/* [1]                  */ 0,
		/* [2]                  */ 0,
		},
	},

	{ /* 15 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 262, /* "Turret" */
		/* name                 */ "Turret",
		/* stringID_full        */ 263, /* "Cannon Turret" */
		/* wsa                  */ "turret.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ false,
		/* notused_0004         */ false,
		/* notOnConcrete        */ false,
		/* variable_0010        */ false,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ true,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 64,
		/* hitpoints            */ 200,
		/* fogUncoverRadius     */ 2,
		/* spriteID             */ 79,
		/* buildCredits         */ 125,
		/* buildTime            */ 64,
		/* availableCampaign    */ 5,
		/* structuresRequired   */ 262656,
		/* sortPriority         */ 22,
		/* upgradeLevelRequired */ 0,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 16,
		/* priorityBuild        */ 75,
		/* priorityTarget       */ 150,
		/* availableHouse       */ 63,
		},
		/* enterFilter          */ 0,
		/* creditsStorage       */ 0,
		/* powerUsage           */ 10,
		/* layout               */ STRUCTURE_LAYOUT_1x1,
		/* iconGroup            */ 23,
		{ /* animationIndex */
		/* [0]                  */ 0xFF,
		/* [1]                  */ 0xFF,
		/* [2]                  */ 0xFF
		},
		{ /* buildableUnits */
		/* [0]                  */ -1,
		/* [1]                  */ -1,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 0,
		/* [1]                  */ 0,
		/* [2]                  */ 0,
		},
	},

	{ /* 16 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 264, /* "R-Turret" */
		/* name                 */ "R-Turret",
		/* stringID_full        */ 265, /* "Rocket Turret" */
		/* wsa                  */ "rturret.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ false,
		/* notused_0004         */ false,
		/* notOnConcrete        */ false,
		/* variable_0010        */ false,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ true,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 64,
		/* hitpoints            */ 200,
		/* fogUncoverRadius     */ 5,
		/* spriteID             */ 80,
		/* buildCredits         */ 250,
		/* buildTime            */ 96,
		/* availableCampaign    */ 0,
		/* structuresRequired   */ 262656,
		/* sortPriority         */ 26,
		/* upgradeLevelRequired */ 2,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 17,
		/* priorityBuild        */ 100,
		/* priorityTarget       */ 75,
		/* availableHouse       */ 63,
		},
		/* enterFilter          */ 0,
		/* creditsStorage       */ 0,
		/* powerUsage           */ 25,
		/* layout               */ STRUCTURE_LAYOUT_1x1,
		/* iconGroup            */ 24,
		{ /* animationIndex */
		/* [0]                  */ 0xFF,
		/* [1]                  */ 0xFF,
		/* [2]                  */ 0xFF
		},
		{ /* buildableUnits */
		/* [0]                  */ -1,
		/* [1]                  */ -1,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 0,
		/* [1]                  */ 0,
		/* [2]                  */ 0,
		},
	},

	{ /* 17 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 266, /* "Spice Silo" */
		/* name                 */ "Spice Silo",
		/* stringID_full        */ 267, /* "Spice Storage Silo" */
		/* wsa                  */ "storage.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ false,
		/* notused_0004         */ false,
		/* notOnConcrete        */ false,
		/* variable_0010        */ false,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ true,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 0,
		/* hitpoints            */ 150,
		/* fogUncoverRadius     */ 2,
		/* spriteID             */ 81,
		/* buildCredits         */ 150,
		/* buildTime            */ 48,
		/* availableCampaign    */ 2,
		/* structuresRequired   */ 4608,
		/* sortPriority         */ 12,
		/* upgradeLevelRequired */ 0,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 18,
		/* priorityBuild        */ 0,
		/* priorityTarget       */ 150,
		/* availableHouse       */ 63,
		},
		/* enterFilter          */ 0,
		/* creditsStorage       */ 1000,
		/* powerUsage           */ 5,
		/* layout               */ STRUCTURE_LAYOUT_2x2,
		/* iconGroup            */ 25,
		{ /* animationIndex */
		/* [0]                  */ 27,
		/* [1]                  */ 27,
		/* [2]                  */ 27
		},
		{ /* buildableUnits */
		/* [0]                  */ -1,
		/* [1]                  */ -1,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 0,
		/* [1]                  */ 0,
		/* [2]                  */ 0,
		},
	},

	{ /* 18 */
		{ /* objectInfo */
		/* stringID_abbrev      */ 268, /* "Outpost" */
		/* name                 */ "Outpost",
		/* stringID_full        */ 269, /* "Radar Outpost" */
		/* wsa                  */ "headqrts.wsa",
		{ /* flags */
		/* hasShadow            */ false,
		/* factory              */ false,
		/* notused_0004         */ false,
		/* notOnConcrete        */ false,
		/* variable_0010        */ false,
		/* variable_0020        */ false,
		/* hasTurret            */ false,
		/* conquerable          */ false,
		/* variable_0100        */ false,
		/* noMessageOnDeath     */ false,
		/* tabSelectable        */ false,
		/* scriptNoSlowdown     */ false,
		/* targetAir            */ false,
		/* priority             */ false,
		/* notused_4000         */ false
		},
		/* spawnChance          */ 128,
		/* hitpoints            */ 500,
		/* fogUncoverRadius     */ 10,
		/* spriteID             */ 82,
		/* buildCredits         */ 400,
		/* buildTime            */ 80,
		/* availableCampaign    */ 2,
		/* structuresRequired   */ 512,
		/* sortPriority         */ 10,
		/* upgradeLevelRequired */ 0,
		/* actionsPlayer        */ { 0, 0, 0, 0 },
		/* available            */ 0,
		/* hintStringID         */ 19,
		/* priorityBuild        */ 0,
		/* priorityTarget       */ 275,
		/* availableHouse       */ 63,
		},
		/* enterFilter          */ 0,
		/* creditsStorage       */ 0,
		/* powerUsage           */ 30,
		/* layout               */ STRUCTURE_LAYOUT_2x2,
		/* iconGroup            */ 26,
		{ /* animationIndex */
		/* [0]                  */ 3,
		/* [1]                  */ 3,
		/* [2]                  */ 3
		},
		{ /* buildableUnits */
		/* [0]                  */ -1,
		/* [1]                  */ -1,
		/* [2]                  */ -1,
		/* [3]                  */ -1,
		/* [4]                  */ -1,
		/* [5]                  */ -1,
		/* [6]                  */ -1,
		/* [7]                  */ -1,
		},
		{ /* upgradeCampaign */
		/* [0]                  */ 0,
		/* [1]                  */ 0,
		/* [2]                  */ 0,
		},
	}
};

/** Array with position offset per tile in a structure layout. */
const uint16 g_table_structure_layoutTiles[][9] = {
	{0,    0,    0,    0,     0,     0,     0,     0,     0}, /* STRUCTURE_LAYOUT_1x1 */
	{0,    1,    0,    0,     0,     0,     0,     0,     0}, /* STRUCTURE_LAYOUT_2x1 */
	{0, 64+0,    0,    0,     0,     0,     0,     0,     0}, /* STRUCTURE_LAYOUT_1x2 */
	{0,    1, 64+0, 64+1,     0,     0,     0,     0,     0}, /* STRUCTURE_LAYOUT_2x2 */
	{0,    1, 64+0, 64+1, 128+0, 128+1,     0,     0,     0}, /* STRUCTURE_LAYOUT_2x3 */
	{0,    1,    2, 64+0,  64+1,  64+2,     0,     0,     0}, /* STRUCTURE_LAYOUT_3x2 */
	{0,    1,    2, 64+0,  64+1,  64+2, 128+0, 128+1, 128+2}, /* STRUCTURE_LAYOUT_3x3 */
};

/** Array with position offset of edge tiles in a structure layout. */
const uint16 g_table_structure_layoutEdgeTiles[][8] = {
	{0, 0,    0,     0,     0,     0,     0, 0}, /* STRUCTURE_LAYOUT_1x1 */
	{0, 1,    1,     1,     1,     0,     0, 0}, /* STRUCTURE_LAYOUT_2x1 */
	{0, 0,    0,  64+0,  64+0,  64+0,     0, 0}, /* STRUCTURE_LAYOUT_1x2 */
	{0, 1,    1,  64+1,  64+1,  64+0,  64+0, 0}, /* STRUCTURE_LAYOUT_2x2 */
	{0, 1, 64+1, 128+1, 128+1, 128+0,  64+0, 0}, /* STRUCTURE_LAYOUT_2x3 */
	{1, 2,    2,  64+2,  64+1,  64+0,     0, 0}, /* STRUCTURE_LAYOUT_3x2 */
	{1, 2, 64+2, 128+2, 128+1, 128+0,  64+0, 0}, /* STRUCTURE_LAYOUT_3x3 */
};

/** Array with number of tiles in a layout. */
const uint16 g_table_structure_layoutTileCount[] = {
	1, /* STRUCTURE_LAYOUT_1x1 */
	2, /* STRUCTURE_LAYOUT_2x1 */
	2, /* STRUCTURE_LAYOUT_1x2 */
	4, /* STRUCTURE_LAYOUT_2x2 */
	6, /* STRUCTURE_LAYOUT_2x3 */
	6, /* STRUCTURE_LAYOUT_3x2 */
	9, /* STRUCTURE_LAYOUT_3x3 */
};

/** Array with TileDiff of a layout. */
const tile32 g_table_structure_layoutTileDiff[] = {
	{{0x0080, 0x0080}}, /* STRUCTURE_LAYOUT_1x1 */
	{{0x0100, 0x0080}}, /* STRUCTURE_LAYOUT_2x1 */
	{{0x0080, 0x0100}}, /* STRUCTURE_LAYOUT_1x2 */
	{{0x0100, 0x0100}}, /* STRUCTURE_LAYOUT_2x2 */
	{{0x0100, 0x0180}}, /* STRUCTURE_LAYOUT_2x3 */
	{{0x0280, 0x0100}}, /* STRUCTURE_LAYOUT_3x2 */
	{{0x0180, 0x0180}}, /* STRUCTURE_LAYOUT_3x3 */
};

/** Array with size of a layout. */
const XYSize g_table_structure_layoutSize[] = {
	{1, 1}, /* STRUCTURE_LAYOUT_1x1 */
	{2, 1}, /* STRUCTURE_LAYOUT_2x1 */
	{1, 2}, /* STRUCTURE_LAYOUT_1x2 */
	{2, 2}, /* STRUCTURE_LAYOUT_2x2 */
	{2, 3}, /* STRUCTURE_LAYOUT_2x3 */
	{3, 2}, /* STRUCTURE_LAYOUT_3x2 */
	{3, 3}, /* STRUCTURE_LAYOUT_3x3 */
};

/** Array with position offset per tile around a structure layout. */
const int16 g_table_structure_layoutTilesAround[][16] = {
	{-64, -64+1,     1,  64+1,  64+0,  64-1,    -1, -64-1,     0,     0,     0,     0,     0,     0,  0,     0}, /* STRUCTURE_LAYOUT_1x1 */
	{-64, -64+1, -64+2,     2,  64+2,  64+1,  64+0,  64-1,    -1, -64-1,     0,     0,     0,     0,  0,     0}, /* STRUCTURE_LAYOUT_2x1 */
	{-64, -64+1,     1,  64+1, 128+1, 128+0, 128-1,  64-1,    -1, -64-1,     0,     0,     0,     0,  0,     0}, /* STRUCTURE_LAYOUT_1x2 */
	{-64, -64+1, -64+2,     2,  64+2, 128+2, 128+1, 128+0, 128-1,  64-1,    -1, -64-1,     0,     0,  0,     0}, /* STRUCTURE_LAYOUT_2x2 */
	{-64, -64+1, -64+2,     2,  64+2, 128+2, 192+2, 192+1, 192+0, 192-1, 128-1,  64-1,    -1, -64-1,  0,     0}, /* STRUCTURE_LAYOUT_2x3 */
	{-64, -64+1, -64+2, -64+3,     3,  64+3, 128+3, 128+2, 128+1, 128+0, 128-1,  64-1,    -1, -64-1,  0,     0}, /* STRUCTURE_LAYOUT_3x2 */
	{-64, -64+1, -64+2, -64+3,     3,  64+3, 128+3, 192+3, 192+2, 192+1, 192+0, 192-1, 128-1,  64-1, -1, -64-1}, /* STRUCTURE_LAYOUT_3x3 */
};

