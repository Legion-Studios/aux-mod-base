class CfgVehicles {
    // Creates a base class for all your main infantry to inherit from
    class lsd_gar_phase2_base;
    class MYTAG_MYUNIT_phase2_base: lsd_gar_phase2_base {
        scope = 1;  // 'scope = 1' makes this unit hidden from Eden/Zeus
        /* Scope value meanings
         0: "Private" class, trying to create a class with scope = 0 will cause an error
         1: "Hidden" class, can be used like normal, but is hidden from Eden/Zeus, arsenal, etc.
         2: "Public" class, can be used in Eden/Zeus, arsenal, etc. like normal
              Make sure to add "public" classes to units / weapons properties in CfgPatches.
        */

        faction = "MYTAG_MYUNIT";
        editorSubcategory = "MYTAG_MYUNIT_clones";

        uniformClass = "MYTAG_MYUNIT_phase2_uniform";
        hiddenSelectionsTextures[] = {
            "\MYTAG_armor\data\MYTAG_baseUniform_camo1_co.paa",
            "\MYTAG_armor\data\MYTAG_baseUniform_camo2_co.paa",
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };

        // Here we set what weapons we want our unit to spawn with.
        // Make sure to list the weapons in this order, otherwise Arma can run into some issues:
        // primary, secondary, launcher, Throw, Put

        // "Throw" and "Put" are what allow units to throw grenades and place explosives.
        weapons[] = {"ls_weapon_dc15a", "ls_weapon_dc17sidearm", "Throw", "Put"};
        // This is what weapons the unit will repsawn with, like when a player playing at this unit dies
        respawnWeapons[] = {"ls_weapon_dc15a", "ls_weapon_dc17sidearm", "Throw", "Put"};

        // Similar to weapons, these are the "linked items" that units will spawn with.
        // Linked items include helmets, vests, facewears, NVGs, maps, radios, etc.
        linkedItems[] = {"MYTAG_MYUNIT_phase2_helmet", "ItemMap", "ItemCompass", "ItemGPS", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MYTAG_MYUNIT_phase2_helmet", "ItemMap", "ItemCompass", "ItemGPS", "ItemWatch", "ItemRadio"};

        backpack = "";  // What backpack they should spawn with, or "" to spawn without one.
    };

    // Creates your first placeable unit
    class MYTAG_MYUNIT_phase2_trooper: MYTAG_MYUNIT_phase2_base {
        scope = 2;
        displayName = "Trooper";
    };

    // Custom uniform example:
    class MYTAG_MYUNIT_phase2_CUSTOMNAME: MYTAG_MYUNIT_phase2_base {
        // Notice we do not add 'scope = 2;'
        // We don't include this here as we usually don't want custom uniforms placeable as units in the editor
        uniformClass = "MYTAG_MYUNIT_CUSTOMNAME_uniform";
        hiddenSelectionsTextures[] = {
            "\MYTAG_armor\data\MYTAG_baseUniform_camo1_co.paa",
            "\MYTAG_armor\data\MYTAG_baseUniform_camo2_co.paa",
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };
    };
};