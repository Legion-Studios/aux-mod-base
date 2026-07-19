class CfgWeapons {
    class ls_cloneHelmet_phase2;
    class MYTAG_MYUNIT_phase2_helmet: ls_cloneHelmet_phase2 {
        author = "You!";
        displayName = "[MYUNIT] Phase 2 Trooper Helmet";

        // Here we have our textures organized into folders for easier organization. All the helmets are in their own folder, and then another folder for each helmet type. If you made an airborne helmet, you could then put it at helmets\airborne\trooper_camo1_co.paa
        hiddenSelectionsTextures[] = {
            "\MYTAG_armor\data\helmets\phase2\trooper_camo1_co.paa",
            "\ls\core\addons\characters_clone\helmets\phase2\data\visor_co.paa"
        };
    };

    class ls_cloneUniform_base;
    class ls_cloneUniform_phase2: ls_cloneUniform_base {
        // This references the ItemInfo class from ls_cloneUniform_phase2, which saves you from redefining properties
        class ItemInfo;
    };
    class MYTAG_MYUNIT_phase2_uniform: ls_cloneUniform_phase2 {
        author = "You!";
        displayName = "[MYUNIT] Phase 2 Trooper Armor";

        class ItemInfo: ItemInfo {
            uniformClass = "MYTAG_MYUNIT_phase2_trooper"; // Points to a unit in CfgVehicles
        };
    };

    // Personal Custom Uniform Example
    class MYTAG_MYUNIT_phase2_uniform_CUSTOMNAME: MYTAG_MYUNIT_phase2_uniform {
        author = "You!";
        displayName = "[MYUNIT] Phase 2 Trooper Armor (CUSTOMNAME)";

        class ItemInfo: ItemInfo {
            uniformClass = "MYTAG_MYUNIT_phase2_trooper_CUSTOMNAME";
        };
    };


    // --------------------------------------------------------------------- //


    // Legacy Models - Delete if not using legacy
    class ls_gar_phase2_helmet;
    class MYTAG_MYUNIT_phase2_helmet_legacy: ls_gar_phase2_helmet {
        author = "You!";
        displayName = "[MYUNIT] Phase 2 Trooper Helmet";
        hiddenSelectionsTextures[] = {
            "\MYTAG_armor\data\legacy\baseHelmet_camo1_co.paa",
            "\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
        };
    };

    class ls_gar_phase2_uniform: ls_cloneUniform_base {
        class ItemInfo;
    };
    class MYTAG_MYUNIT_phase2_uniform_legacy: ls_gar_phase2_uniform {
        author = "You!";
        displayName = "[MYUNIT] Phase 2 Trooper Armor";

        class ItemInfo: ItemInfo {
            uniformClass = "MYTAG_MYUNIT_phase2_trooper_legacy";
        };
    };

    class MYTAG_MYUNIT_CUSTOMNAME_uniform_legacy: ls_gar_phase2_uniform {
        author = "You!";
        displayName = "[MYUNIT] CUSTOMNAME's Uniform/Armor/etc.";

        class ItemInfo: ItemInfo {
            uniformClass = "MYTAG_MYUNIT_phase2_CUSTOMNAME";
        };
    };
};
