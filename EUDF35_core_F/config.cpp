#define VERSION "1.2"


class CfgFactionClasses
{
    // Independent
    class IND_EUDF35_F {
        displayName = "EUDF";
        priority=2;
        side = 2;
        icon = "\EUDF35_core_F\data\factionicons\icon_I_EUDF35_ca.paa";
        flag = "\EUDF35_core_F\data\flags\flag_I_EUDF35_co.paa";
    };
    class IND_EUDF35_A_F {
        displayName = "EUDF (Arctic)";
        priority=2;
        side = 2;
        icon = "\EUDF35_core_F\data\factionicons\icon_I_EUDF35_ca.paa";
        flag = "\EUDF35_core_F\data\flags\flag_I_EUDF35_co.paa";
    };
    class IND_EUDF35_D_F {
        displayName = "EUDF (Arid)";
        priority=2;
        side = 2;
        icon = "\EUDF35_core_F\data\factionicons\icon_I_EUDF35_ca.paa";
        flag = "\EUDF35_core_F\data\flags\flag_I_EUDF35_co.paa";
    };

    // Blufor
    class BLU_EUDF35_F {
        displayName = "EUDF";
        priority=2;
        side = 1;
        icon = "\EUDF35_core_F\data\factionicons\icon_I_EUDF35_ca.paa";
        flag = "\EUDF35_core_F\data\flags\flag_I_EUDF35_co.paa";
    };
    class BLU_EUDF35_A_F {
        displayName = "EUDF (Arctic)";
        priority=2;
        side = 1;
        icon = "\EUDF35_core_F\data\factionicons\icon_I_EUDF35_ca.paa";
        flag = "\EUDF35_core_F\data\flags\flag_I_EUDF35_co.paa";
    };
    class BLU_EUDF35_D_F {
        displayName = "EUDF (Arid)";
        priority=2;
        side = 1;
        icon = "\EUDF35_core_F\data\factionicons\icon_I_EUDF35_ca.paa";
        flag = "\EUDF35_core_F\data\flags\flag_I_EUDF35_co.paa";
    };

    // Opfor
    class OPF_EUDF35_F {
        displayName = "EUDF";
        priority=2;
        side = 0;
        icon = "\EUDF35_core_F\data\factionicons\icon_I_EUDF35_ca.paa";
        flag = "\EUDF35_core_F\data\flags\flag_I_EUDF35_co.paa";
    };
    class OPF_EUDF35_A_F {
        displayName = "EUDF (Arctic)";
        priority=2;
        side = 0;
        icon = "\EUDF35_core_F\data\factionicons\icon_I_EUDF35_ca.paa";
        flag = "\EUDF35_core_F\data\flags\flag_I_EUDF35_co.paa";
    };
    class OPF_EUDF35_D_F {
        displayName = "EUDF (Arid)";
        priority=2;
        side = 0;
        icon = "\EUDF35_core_F\data\factionicons\icon_I_EUDF35_ca.paa";
        flag = "\EUDF35_core_F\data\flags\flag_I_EUDF35_co.paa";
    };
};

class CfgPatches
{
    class EUDF35_core_F
    {
        name = "European Defense Force 2035 - Core";
        author = "kenoxite";
        authors[] = {
            "kenoxite"
        };
        requiredVersion = 1.62;
        requiredAddons[] = {
            "A3_Data_F",
            "A3_Data_F_Curator",
        };
        units[]={
            "Flag_I_EUDF35_EUDF_F",
            "Flag_I_EUDF35_EU_F"
        };
        weapons[]={};
        
        version = VERSION;
    };
};


class CfgMarkers
{
    class flag_NATO;
    
    class flag_EUDF: flag_NATO
    {
        name = "European Defense Force";
        icon = "\EUDF35_core_F\data\factionicons\I_EUDF35_ca.paa";
    };
};

class CfgVehicles
{
    // FLAGS
    class FlagCarrier;
    class Flag_I_EUDF35_EUDF_F: FlagCarrier
    {
        author="kenoxite";
        class SimpleObject
        {
            eden=0;
            animate[]=
            {
                
                {
                    "flag",
                    0
                }
            };
            hide[]={};
            verticalOffset=3.977;
            verticalOffsetWorld=0;
            init="''";
        };
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Flag_Blue_F.jpg";
        scope=2;
        scopeCurator=2;
        displayName="Flag (EUDF)";
        hiddenSelectionsTextures[]=
        {
            "\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
        };
        class EventHandlers
        {
            init="(_this select 0) setFlagTexture '\EUDF35_core_F\data\flags\flag_I_EUDF35_co.paa'";
        };
    };
    class Flag_I_EUDF35_EU_F: FlagCarrier
    {
        author="kenoxite";
        class SimpleObject
        {
            eden=0;
            animate[]=
            {
                
                {
                    "flag",
                    0
                }
            };
            hide[]={};
            verticalOffset=3.977;
            verticalOffsetWorld=0;
            init="''";
        };
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Flag_Blue_F.jpg";
        scope=2;
        scopeCurator=2;
        displayName="Flag (EU)";
        hiddenSelectionsTextures[]=
        {
            "\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
        };
        class EventHandlers
        {
            init="(_this select 0) setFlagTexture '\EUDF35_core_F\data\flags\flag_I_EU_co.paa'";
        };
    };
};
