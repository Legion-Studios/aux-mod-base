class CfgPatches {
    class MYTAG_armor {
        author = "Jake, from statefarm";
        name = "MYUNIT: Armor Retextures";
        requiredAddons[] = {
            "MYTAG_core",
            "ls_armor_bluefor",
            "lsd_armor_bluefor"
        };
        weapons[] = {
            "MYTAG_MYUNIT_phase2_helmet",
            "MYTAG_MYUNIT_phase2_uniform",
            "MYTAG_MYUNIT_CUSTOMNAME_uniform"
        };
        // Allows for this trooper to be placed in Zeus
        units[] = {
            "MYTAG_MYUNIT_phase2_trooper"
        };
    };
};

// These files are "included", meaning all of the code in those files gets merged into here.
// This makes the code more organized and easier to read though.
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"