class CfgPatches {
    class MYTAG_core {
        author = "Jake, from Statefarm";                    // Your name, aux team, etc.
        name = "MYUNIT: Core";
        requiredAddons[] = {
            "A3_Data_F_Decade_Loadorder",  // A "load order" addon, this makes sure your mod loads after all of vanilla
            "cba_main", // load order addon for CBA. CBA adds a ton of features that you'll probably end up using in your time modding
            "ls_core"
        };
        weapons[] = {};
        units[] = {};
    };
};

// This creates a custom "Faction", which you can use to make your own 'Folder' in the Eden and Zeus interfaces for units
class CfgFactionsClasses {
    class MYTAG_MYUNIT {
        displayName = "[MYUNIT] Grand Army";
    };
};

// Similar to CfgFactionsClasses, this creates a category in Eden/Zeus for objects
class CfgEditorCategories {
    class MYTAG_Objects {
        displayName = "[MYUNIT] Objects";
    };
};

// This creates a subcategory or subfolder for a faction
class CfgEditorSubcategories {
    class MYTAG_MYUNIT_clones {
        displayName = "[MYUNIT] Troopers";
    };
};