#define VERSION "1.1"

class CfgPatches
{
    class EUDF35_weapons_F
    {
        name = "European Defense Force 2035 - Weapons";
        author = "kenoxite";
        authors[] = {
            "kenoxite"
        };
        requiredVersion = 1.62;
        requiredAddons[] = {
            "EUDF35_core_F",
            "EUDF35_weapons_data_F",
            "A3_Weapons_F",
            "A3_Weapons_F_Mark",
            "A3_Weapons_F_Exp",
            "A3_Weapons_F_Enoch"
        };
        units[]={};
        weapons[]={
            "arifle_MSBS65_EUDF35_woodland_F",
            "arifle_MSBS65_GL_EUDF35_woodland_F",
            "arifle_MSBS65_UBS_EUDF35_woodland_F",
            "arifle_MSBS65_Mark_EUDF35_woodland_F",
            "arifle_SPAR_01_EUDF35_woodland_F",
            "arifle_SPAR_01_GL_EUDF35_woodland_F",
            "arifle_SPAR_03_EUDF35_woodland_F",
            "arifle_SPAR_02_EUDF35_woodland_F",
            "LMG_Mk200_EUDF35_woodland_F",
            "srifle_GM6_EUDF35_woodland_F",
            "MMG_01_EUDF35_woodland_F",
            "srifle_DMR_03_EUDF35_woodland_F",

            "arifle_MSBS65_EUDF35_arctic_F",
            "arifle_MSBS65_GL_EUDF35_arctic_F",
            "arifle_MSBS65_UBS_EUDF35_arctic_F",
            "arifle_MSBS65_Mark_EUDF35_arctic_F",
            "arifle_SPAR_01_EUDF35_arctic_F",
            "arifle_SPAR_01_GL_EUDF35_arctic_F",
            "arifle_SPAR_03_EUDF35_arctic_F",
            "arifle_SPAR_02_EUDF35_arctic_F",
            "LMG_Mk200_EUDF35_arctic_F",
            "srifle_DMR_03_EUDF35_arctic_F",
            "MMG_01_EUDF35_arctic_F",
            "srifle_GM6_EUDF35_arctic_F",

            "srifle_GM6_EUDF35_arid_F"
        };
        
        version = VERSION;
    };
};


class cfgWeapons
{
    class InventoryItem_Base_F;
    class ItemCore;

    #include "woodland\rifles.hpp"
    #include "woodland\smgs.hpp"
    #include "woodland\lmgs.hpp"
    #include "woodland\mgs.hpp"
    #include "woodland\sniperRifles.hpp"
    #include "woodland\pistols.hpp"

    #include "arctic\rifles.hpp"
    #include "arctic\lmgs.hpp"
    #include "arctic\mgs.hpp"
    #include "arctic\sniperRifles.hpp"

    #include "arid\rifles.hpp"
    #include "arid\lmgs.hpp"
    #include "arid\mgs.hpp"
    #include "arid\sniperRifles.hpp"
};
