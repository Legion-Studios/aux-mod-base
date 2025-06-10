class CfgPatches {
    class MYTAG_core {
        author = "Jake, from Statefarm"; // Your name, aux team, etc.
        name = "MYUNIT: Core";
        requiredAddons[] = {
            // This makes your mod load after all of LS content
            // that way classes are defined for you to inherit from
            "ls_loadorder"
        };
        weapons[] = {};
        units[] = {};
    };
};

// This creates a custom "Faction", which you can use to make your own 'Folder' in the Eden and Zeus interfaces for units
class CfgFactionClasses {
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