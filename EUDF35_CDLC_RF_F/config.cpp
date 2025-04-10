#define VERSION "1.2.1"

class CfgPatches
{
    class EUDF35_CDLC_RF_F
    {
        name = "European Defense Force 2035 - CDLC RF";
        author = "kenoxite";
        authors[] = {
            "kenoxite",
            "Rotators Collective"
        };
        requiredVersion = 2.14;
        requiredAddons[] = {
            "EUDF35_CDLC_RF_data_F",
            "EUDF35_infantry_F",
            "EUDF35_weapons_F",
            "EUDF35_groups_F",
            "RF_Air_heli_medium_ec"
        };
        units[]={
            "I_EUDF35_Heli_EC_02_RF",
            "I_EUDF35_Heli_EC_01A_military_RF",

            "I_EUDF35_A_Heli_EC_02_RF",
            "I_EUDF35_A_Heli_EC_01A_military_RF",

            "I_EUDF35_D_Heli_EC_02_RF",
            "I_EUDF35_D_Heli_EC_01A_military_RF",

            "I_EUDF35_CommandoMortar_RF",
            "I_EUDF35_A_CommandoMortar_RF",
            "I_EUDF35_D_CommandoMortar_RF",

            "I_EUDF35_Recon_JTAC_RC40_F",
            "I_EUDF35_DA_JTAC_RC40_F",
            "I_EUDF35_support_CMort_RF",

            "I_EUDF35_A_Recon_JTAC_RC40_F",
            "I_EUDF35_A_DA_JTAC_RC40_F",
            "I_EUDF35_A_support_CMort_RF",
            
            "I_EUDF35_D_Recon_JTAC_RC40_F",
            "I_EUDF35_D_DA_JTAC_RC40_F",
            "I_EUDF35_D_support_CMort_RF",

            "I_EUDF35_CommandoMortar_weapon_RF",
            "I_EUDF35_A_CommandoMortar_weapon_RF",
            "I_EUDF35_D_CommandoMortar_weapon_RF",


            "B_EUDF35_Heli_EC_02_RF",
            "B_EUDF35_Heli_EC_01A_military_RF",

            "B_EUDF35_A_Heli_EC_02_RF",
            "B_EUDF35_A_Heli_EC_01A_military_RF",

            "B_EUDF35_D_Heli_EC_02_RF",
            "B_EUDF35_D_Heli_EC_01A_military_RF",

            "B_EUDF35_CommandoMortar_RF",
            "B_EUDF35_A_CommandoMortar_RF",
            "B_EUDF35_D_CommandoMortar_RF",

            "B_EUDF35_Recon_JTAC_RC40_F",
            "B_EUDF35_DA_JTAC_RC40_F",
            "B_EUDF35_support_CMort_RF",

            "B_EUDF35_A_Recon_JTAC_RC40_F",
            "B_EUDF35_A_DA_JTAC_RC40_F",
            "B_EUDF35_A_support_CMort_RF",
            
            "B_EUDF35_D_Recon_JTAC_RC40_F",
            "B_EUDF35_D_DA_JTAC_RC40_F",
            "B_EUDF35_D_support_CMort_RF",

            "B_EUDF35_CommandoMortar_weapon_RF",
            "B_EUDF35_A_CommandoMortar_weapon_RF",
            "B_EUDF35_D_CommandoMortar_weapon_RF",


            "O_EUDF35_Heli_EC_02_RF",
            "O_EUDF35_Heli_EC_01A_military_RF",

            "O_EUDF35_A_Heli_EC_02_RF",
            "O_EUDF35_A_Heli_EC_01A_military_RF",

            "O_EUDF35_D_Heli_EC_02_RF",
            "O_EUDF35_D_Heli_EC_01A_military_RF",

            "O_EUDF35_CommandoMortar_RF",
            "O_EUDF35_A_CommandoMortar_RF",
            "O_EUDF35_D_CommandoMortar_RF",

            "O_EUDF35_Recon_JTAC_RC40_F",
            "O_EUDF35_DA_JTAC_RC40_F",
            "O_EUDF35_support_CMort_RF",

            "O_EUDF35_A_Recon_JTAC_RC40_F",
            "O_EUDF35_A_DA_JTAC_RC40_F",
            "O_EUDF35_A_support_CMort_RF",
            
            "O_EUDF35_D_Recon_JTAC_RC40_F",
            "O_EUDF35_D_DA_JTAC_RC40_F",
            "O_EUDF35_D_support_CMort_RF",

            "O_EUDF35_CommandoMortar_weapon_RF",
            "O_EUDF35_A_CommandoMortar_weapon_RF",
            "O_EUDF35_D_CommandoMortar_weapon_RF",


            "IND_EUDF35_F_AmmoBox",
            "IND_EUDF35_F_WeaponsBox",
            "IND_EUDF35_F_LaunchersBox",
            "IND_EUDF35_F_UniformBox",
            "IND_EUDF35_F_SupportBox",
            "IND_EUDF35_F_SupplyBox",

            "IND_EUDF35_A_F_AmmoBox",
            "IND_EUDF35_A_F_WeaponsBox",
            "IND_EUDF35_A_F_LaunchersBox",
            "IND_EUDF35_A_F_UniformBox",
            "IND_EUDF35_A_F_SupportBox",
            "IND_EUDF35_A_F_SupplyBox",

            "IND_EUDF35_D_F_AmmoBox",
            "IND_EUDF35_D_F_WeaponsBox",
            "IND_EUDF35_D_F_LaunchersBox",
            "IND_EUDF35_D_F_UniformBox",
            "IND_EUDF35_D_F_SupportBox",
            "IND_EUDF35_D_F_SupplyBox"
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
    #include "indep\woodland\infantry.hpp"
    #include "indep\woodland\helicopters.hpp"
    #include "indep\woodland\statics.hpp"
    #include "indep\woodland\backpacks_statics.hpp"

    #include "indep\arctic\infantry.hpp"
    #include "indep\arctic\helicopters.hpp"
    #include "indep\arctic\statics.hpp"
    #include "indep\arctic\backpacks_statics.hpp"

    #include "indep\arid\infantry.hpp"
    #include "indep\arid\helicopters.hpp"
    #include "indep\arid\statics.hpp"
    #include "indep\arid\backpacks_statics.hpp"


    #include "blufor\woodland\infantry.hpp"
    #include "blufor\woodland\helicopters.hpp"
    #include "blufor\woodland\statics.hpp"
    #include "blufor\woodland\backpacks_statics.hpp"

    #include "blufor\arctic\infantry.hpp"
    #include "blufor\arctic\helicopters.hpp"
    #include "blufor\arctic\statics.hpp"
    #include "blufor\arctic\backpacks_statics.hpp"

    #include "blufor\arid\infantry.hpp"
    #include "blufor\arid\helicopters.hpp"
    #include "blufor\arid\statics.hpp"
    #include "blufor\arid\backpacks_statics.hpp"


    #include "opfor\woodland\infantry.hpp"
    #include "opfor\woodland\helicopters.hpp"
    #include "opfor\woodland\statics.hpp"
    #include "opfor\woodland\backpacks_statics.hpp"

    #include "opfor\arctic\infantry.hpp"
    #include "opfor\arctic\helicopters.hpp"
    #include "opfor\arctic\statics.hpp"
    #include "opfor\arctic\backpacks_statics.hpp"

    #include "opfor\arid\infantry.hpp"
    #include "opfor\arid\helicopters.hpp"
    #include "opfor\arid\statics.hpp"
    #include "opfor\arid\backpacks_statics.hpp"


    #include "common\woodland\backpacks.hpp"
    #include "common\woodland\crates.hpp"

    #include "common\arctic\crates.hpp"
    #include "common\arctic\backpacks.hpp"

    #include "common\arid\crates.hpp"
    #include "common\arid\backpacks.hpp"
};

class CfgGroups
{
    class West
    {
        // name="$STR_A3_CfgGroups_West0";
        // side=1;
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
    };
};
