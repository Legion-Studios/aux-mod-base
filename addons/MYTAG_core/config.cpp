class CfgPatches
{
    class MYTAG_core
    {
        author = "Jake, from Statefarm";                    // Your name, aux team, etc.
        name = "MYUNIT: Core";
        requiredAddons[] = {
            "ls_core"
        };
        weapons[] = {};
        units[] = {};
    };
};

// This creates a custom "Faction", which you can use to make your own 'Folder' in the Eden and Zeus interfaces
class CfgFactionsClasses
{
    class MYTAG_MYUNIT
    {
        displayName = "[MYUNIT] Grand Army";
    };
};

// This creates a subcategory or subfolder for a faction
class CfgEditorSubcategories
{
    class MYTAG_gar_clones
    {
        displayName = "[MYUNIT] Troopers";
    };
};