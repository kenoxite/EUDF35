#define VERSION "1.2.1"

class CfgPatches
{
    class EUDF35_CDLC_WS_F
    {
        name = "European Defense Force 2035 - CDLC WS";
        author = "kenoxite";
        authors[] = {
            "kenoxite",
            "Rotators Collective"
        };
        requiredVersion = 2.14;
        requiredAddons[] = {
            "EUDF35_CDLC_WS_data_F",
            "EUDF35_infantry_F",
            "EUDF35_groups_F",
            "Vehicles_F_lxWS_APC_Wheeled_01"
        };
        units[]={
            "I_EUDF35_APC_Wheeled_01_atgm_lxWS",
            "I_EUDF35_APC_Wheeled_01_mortar_lxWS",
            "I_EUDF35_APC_Wheeled_01_command_lxWS",

            "I_EUDF35_A_APC_Wheeled_01_atgm_lxWS",
            "I_EUDF35_A_APC_Wheeled_01_mortar_lxWS",
            "I_EUDF35_A_APC_Wheeled_01_command_lxWS",
            
            "I_EUDF35_D_APC_Wheeled_01_atgm_lxWS",
            "I_EUDF35_D_APC_Wheeled_01_mortar_lxWS",
            "I_EUDF35_D_APC_Wheeled_01_command_lxWS",


            "B_EUDF35_APC_Wheeled_01_atgm_lxWS",
            "B_EUDF35_APC_Wheeled_01_mortar_lxWS",
            "B_EUDF35_APC_Wheeled_01_command_lxWS",

            "B_EUDF35_A_APC_Wheeled_01_atgm_lxWS",
            "B_EUDF35_A_APC_Wheeled_01_mortar_lxWS",
            "B_EUDF35_A_APC_Wheeled_01_command_lxWS",
            
            "B_EUDF35_D_APC_Wheeled_01_atgm_lxWS",
            "B_EUDF35_D_APC_Wheeled_01_mortar_lxWS",
            "B_EUDF35_D_APC_Wheeled_01_command_lxWS",


            "O_EUDF35_APC_Wheeled_01_atgm_lxWS",
            "O_EUDF35_APC_Wheeled_01_mortar_lxWS",
            "O_EUDF35_APC_Wheeled_01_command_lxWS",

            "O_EUDF35_A_APC_Wheeled_01_atgm_lxWS",
            "O_EUDF35_A_APC_Wheeled_01_mortar_lxWS",
            "O_EUDF35_A_APC_Wheeled_01_command_lxWS",
            
            "O_EUDF35_D_APC_Wheeled_01_atgm_lxWS",
            "O_EUDF35_D_APC_Wheeled_01_mortar_lxWS",
            "O_EUDF35_D_APC_Wheeled_01_command_lxWS"
        };
        weapons[]={};
        
        version = VERSION;
        
        skipWhenMissingDependencies = 1;
    };
};


#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define bag_xx(a,b) class _xx_##a {backpack = a; count = b;}

class cfgVehicles
{
    #include "indep\woodland\apcs.hpp"
    #include "indep\arctic\apcs.hpp"
    #include "indep\arid\apcs.hpp"

    #include "blufor\woodland\apcs.hpp"
    #include "blufor\arctic\apcs.hpp"
    #include "blufor\arid\apcs.hpp"

    #include "opfor\woodland\apcs.hpp"
    #include "opfor\arctic\apcs.hpp"
    #include "opfor\arid\apcs.hpp"
};

class CfgGroups
{
    class West
    {
        // name="$STR_A3_CfgGroups_West0";
        // side=1;
        #include "blufor\woodland\groups.hpp"
        #include "blufor\arctic\groups.hpp"
        #include "blufor\arid\groups.hpp"
    };
    class Indep {
        // name="$STR_A3_CfgGroups_Indep0";
        // side=2;
        #include "indep\woodland\groups.hpp"
        #include "indep\arctic\groups.hpp"
        #include "indep\arid\groups.hpp"
    };

    class East {
        // name="$STR_A3_CfgGroups_East0";
        // side=0;
        #include "opfor\woodland\groups.hpp"
        #include "opfor\arctic\groups.hpp"
        #include "opfor\arid\groups.hpp"
    };
};
