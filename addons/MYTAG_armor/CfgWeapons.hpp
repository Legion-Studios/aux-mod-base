class CfgWeapons {
    class ls_gar_phase2_helmet;
    class MYTAG_MYUNIT_phase2_helmet: ls_gar_phase2_helmet {
        author = "You!";
        displayName = "[MYUNIT] Phase 2 Trooper Helmet";
        hiddenSelectionsTextures[] = {
            "\MYTAG_armor\data\MYTAG_baseHelmet_camo1_co.paa",
            "\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
        };
    };

    class ls_cloneUniform_base;
    class ls_gar_phase2_uniform: ls_cloneUniform_base {
        // This grabs the ItemInfo class from ls_gar_phase2_uniform, saving you having to redefine a bunch of stuff
        class ItemInfo;
    };
    class MYTAG_MYUNIT_phase2_uniform: ls_gar_phase2_uniform {
        author = "You!";
        displayName = "[MYUNIT] Phase 2 Trooper Armor";

        class ItemInfo: ItemInfo {
            uniformClass = "MYTAG_MYUNIT_phase2_base"; // Points to a unit in CfgVehicles
        };
    };

    // Personal Custom Uniform Example:
    class MYTAG_MYUNIT_CUSTOMNAME_uniform: ls_gar_phase2_uniform {
        author = "You!";
        displayName = "[MYUNIT] CUSTOMNAME's Uniform/Armor/etc.";

        class ItemInfo: ItemInfo {
            uniformClass = "MYTAG_MYUNIT_phase2_CUSTOMNAME";
        };
    };
};