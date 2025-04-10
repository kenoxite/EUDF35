// Dismantled Remote Designator
class Weapon_Bag_Base;
class B_Static_Designator_01_weapon_F: Weapon_Bag_Base
{
    class assembleInfo;
};
class I_EUDF35_Static_Designator_01_weapon_F: B_Static_Designator_01_weapon_F
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName = "Remote Designator Bag [EUDF]";
    faction = "IND_EUDF35_F";
    picture="\EUDF35_core_F\data\previews\items\icon_I_EUDF35_Static_Designator_01_weapon_F.paa";
    DLC="Enoch";

    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\backpacks\backpack_compact_EUDF35_woodland_1_co.paa"
    };
    
    class assembleInfo: assembleInfo
    {
        primary = 1;
        base = "";
        displayName="Remote Designator [EUDF]";
        assembleTo = "I_EUDF35_Static_Designator_01_F";
        dissasembleTo[] = {};
    };
};


// UAV Bag (AR-2)
class I_UAV_01_backpack_F;
class I_EUDF35_UAV_01_backpack_F : I_UAV_01_backpack_F 
{
    author="kenoxite";
    scope=2;
    displayName="UAV Bag (AR-2) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_I_EUDF35_UAV_01_backpack_F.paa";

    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\backpacks\uav_backpack_EUDF35_woodland_co.paa"
    };

    class assembleInfo
    {
        primary = 1;
        base = "";
        displayName="$STR_A3_CfgVehicles_UAV_01_base0";
        assembleTo = "I_EUDF35_UAV_01_F";
        dissasembleTo[] = {};
    };
};


// UAV Bag (AL-6)
class I_UAV_06_backpack_F;
class I_EUDF35_UAV_06_backpack_F : I_UAV_06_backpack_F 
{
    author="kenoxite";
    scope=2;
    displayName="UAV Bag (AL-6) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_I_EUDF35_UAV_06_backpack_F.paa";
    
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\backpacks\uav_backpack_EUDF35_woodland_co.paa",
        "a3\air_f_orange\uav_06\data\i_uav_06_co.paa"
    };

    class assembleInfo
    {
        primary = 1;
        base = "";
        displayName="$STR_A3_CfgVehicles_C_UAV_06_backpack_F_assembleInfo0";
        assembleTo = "I_EUDF35_UAV_06_F";
        dissasembleTo[] = {};
    };
};


// UAV Bag (AL-6, Medical)
class I_UAV_06_medical_backpack_F;
class I_EUDF35_UAV_06_medical_backpack_F : I_UAV_06_medical_backpack_F 
{
    author="kenoxite";
    scope=2;
    displayName="UAV Bag (AL-6, Medical) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_I_EUDF35_UAV_06_medical_backpack_F.paa";

    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\backpacks\uav_backpack_EUDF35_woodland_co.paa",
        "a3\air_f_orange\uav_06\data\i_uav_06_co.paa"
    };

    class assembleInfo
    {
        primary = 1;
        base = "";
        displayName="$STR_A3_CfgVehicles_C_UAV_06_medical_backpack_F_assembleInfo0";
        assembleTo = "I_EUDF35_UAV_06_medical_F";
        dissasembleTo[] = {};
    };
};
    

// Autonomous MG
class B_HMG_01_A_weapon_F;
class I_HMG_01_A_weapon_F: B_HMG_01_A_weapon_F
{
    class assembleInfo;
};
class I_EUDF35_HMG_01_A_weapon_F: I_HMG_01_A_weapon_F
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    // displayName="$STR_A3_CfgVehicles_B_GMG_01_A_Wpn0";
    displayName = "Dismantled Autonomous MG [EUDF]";
    faction = "IND_EUDF35_F";
    picture="\EUDF35_core_F\data\previews\items\icon_I_EUDF35_HMG_01_A_weapon_F.paa";

    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\backpacks\backpack_small_EUDF35_woodland_1.paa"
    };
    
    class assembleInfo: assembleInfo
    {
        assembleTo = "I_EUDF35_HMG_01_A_F";
    };
};

// Autonomous GMG
class B_GMG_01_A_weapon_F;
class I_GMG_01_A_weapon_F: B_GMG_01_A_weapon_F
{
    class assembleInfo;
};
class I_EUDF35_GMG_01_A_weapon_F: I_GMG_01_A_weapon_F
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    // displayName="$STR_A3_CFGVEHICLES_B_HMG_01_A_WPN2";
    displayName = "Dismantled Autonomous GMG [EUDF]";
    faction = "IND_EUDF35_F";
    picture="\EUDF35_core_F\data\previews\items\icon_I_EUDF35_GMG_01_A_weapon_F.paa";

    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\backpacks\backpack_small_EUDF35_woodland_1.paa"
    };
    
    class assembleInfo: assembleInfo
    {
        assembleTo = "I_EUDF35_GMG_01_A_F";
    };
};
