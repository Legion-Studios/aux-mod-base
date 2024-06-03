class CfgWeapons {
    class lsd_gar_phase2_helmet;                                    // External class reference
    class MYTAG_MYUNIT_phase2_helmet : lsd_gar_phase2_helmet {
        displayName = "[MYUNIT] Phase 2 Trooper Helmet";
        hiddenSelectionsTextures[] = {
            "MYTAG_armor\data\MYTAG_baseHelmet_camo1_co.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    class ls_blueforUniform_base;
    class ls_gar_phase2_uniform : ls_blueforUniform_base {
        class ItemInfo;
    };
    class MYTAG_MYUNIT_phase2_uniform : ls_gar_phase2_uniform {
        displayName = "[MYUNIT] Phase 2 Trooper Armor";

        class ItemInfo: ItemInfo {
            uniformClass = "MYTAG_MYUNIT_phase2_base";
        }
    };

    // Personal Custom Uniform Example:
    class MYTAG_MYUNIT_CUSTOMNAME_uniform : ls_gar_phase2_uniform {
        displayName = "[MYUNIT] CUSTOMNAME's Uniform/Armor/etc.";

        class ItemInfo: ItemInfo {
            uniformClass = "MYTAG_MYUNIT_phase2_CUSTOMNAME";
        };
    };
};