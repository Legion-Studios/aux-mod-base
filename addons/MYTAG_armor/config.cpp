class CfgPatches
{
    class MYTAG_armor
    {
        author = "Jake, from statefarm";
        name = "MYUNIT: Armor Retextures";
        requiredAddons[] = {
            "MYTAG_core",
            "ls_armor_bluefor",
            "lsd_armor_bluefor"
        };
        weapons[] = {};
        // Allows for this trooper to be placed in Zeus
        units[] = {
            "MYTAG_MYUNIT_phase2_trooper"
        };
    };
};

class CfgWeapons
{
    class lsd_gar_phase2_helmet;                                    // External class reference
    class MYTAG_MYUNIT_phase2_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[MYUNIT] Phase 2 Trooper Helmet";
        hiddenSelectionsTextures[] = {
            "MYTAG_armor\data\MYTAG_baseHelmet_camo1_co.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    class ls_blueforUniform_base;
    class ls_gar_phase2_uniform : ls_blueforUniform_base
    {
        class ItemInfo;
    };
    class MYTAG_MYUNIT_phase2_uniform : ls_gar_phase2_uniform
    {
        displayName = "[MYUNIT] Phase 2 Trooper Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = "MYTAG_MYUNIT_phase2_base";
        }
    };

    // Personal Custom Uniform Example:
    class MYTAG_MYUNIT_CUSTOMNAME_uniform : ls_gar_phase2_uniform
    {
        displayName = "CUSTOMNAME's Uniform/Armor/etc.";

        class ItemInfo : ItemInfo
        {
            uniformClass = "MYTAG_MYUNIT_phase2_CUSTOMNAME";
        };
    };


};

class CfgVehicles
{
    // Creates a base class for all your main infantry to inherit from
    class lsd_gar_phase2_base;
    class MYTAG_MYUNIT_phase2_base: lsd_gar_phase2_base
    {
        scope = 1;  // 'scope = 1' makes this unit hidden from Eden/Zeus
        /* Scope value meanings
         0: "Private" class, trying to create a class with scope = 0 will cause an error
         1: "Hidden" class, can be used like normal, but is hidden from Eden/Zeus, arsenal, etc.
         2: "Public" class, can be used in Eden/Zeus, arsenal, etc. like normal
              Make sure to add "public" classes to units / weapons properties in CfgPatches.
        */

        editorSubcategory = "MYTAG_MYUNIT_clones";
        uniformClass = "MYTAG_MYUNIT_phase2_uniform";
        hiddenSelectionsTextures[] = {
            "\MYTAG_armor\data\MYTAG_baseUniform_camo1_co.paa",
            "\MYTAG_armor\data\MYTAG_baseUniform_camo2_co.paa",
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };
    };

    // Creates your first placeable unit
    class MYTAG_MYUNIT_phase2_trooper: MYTAG_MYUNIT_phase2_base
    {
        scope = 2;
        displayName = "Trooper";
    };

    // Custom uniform example:
    class MYTAG_MYUNIT_phase2_CUSTOMNAME: MYTAG_MYUNIT_phase2_base
    {
        // Notice we do not add 'scope = 2;'
        // We don't include this here as we usually don't want custom uniforms placeable as units in the editor
        uniformClass = "MYTAG_MYUNIT_CUSTOMNAME_uniform";
        hiddenSelectionsTextures[]={
            "\MYTAG_armor\data\MYTAG_baseUniform_camo1_co.paa",
            "\MYTAG_armor\data\MYTAG_baseUniform_camo2_co.paa",
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };
    };
};