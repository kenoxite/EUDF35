// Dismantled Remote Designator
class I_EUDF35_D_Static_Designator_01_weapon_F: I_EUDF35_Static_Designator_01_weapon_F
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName = "Remote Designator Bag [EUDF] (EuroCam)";
    faction = "IND_EUDF35_D_F";
    picture="\EUDF35_core_F\data\previews\items\icon_I_EUDF35_D_Static_Designator_01_weapon_F.paa";

    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\backpacks\backpack_compact_EUDF35_arid_1_co.paa"
    };
    
    class assembleInfo: assembleInfo
    {
        primary = 1;
        base = "";
        displayName="Remote Designator [EUDF]";
        assembleTo = "I_EUDF35_D_Static_Designator_01_F";
        dissasembleTo[] = {};
    };
};


// UAV Bag (AR-2)
class I_EUDF35_D_UAV_01_backpack_F : I_EUDF35_UAV_01_backpack_F 
{
    author="kenoxite";
    scope=2;
    displayName="UAV Bag (AR-2) [EUDF] (EuroCam)";
    picture="\EUDF35_core_F\data\previews\items\icon_I_EUDF35_D_UAV_01_backpack_F.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\backpacks\uav_backpack_EUDF35_arid_1_co.paa"
    };

    class assembleInfo
    {
        primary = 1;
        base = "";
        displayName="$STR_A3_CfgVehicles_UAV_01_base0";
        assembleTo = "I_EUDF35_D_UAV_01_F";
        dissasembleTo[] = {};
    };
};


// UAV Bag (AL-6)
class I_EUDF35_D_UAV_06_backpack_F : I_EUDF35_UAV_06_backpack_F 
{
    author="kenoxite";
    scope=2;
    displayName="UAV Bag (AL-6) [EUDF] (EuroCam)";
    picture="\EUDF35_core_F\data\previews\items\icon_I_EUDF35_D_UAV_06_backpack_F.paa";
    
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\backpacks\uav_backpack_EUDF35_arid_1_co.paa",
        "a3\air_f_orange\uav_06\data\i_uav_06_co.paa"
    };

    class assembleInfo
    {
        primary = 1;
        base = "";
        displayName="$STR_A3_CfgVehicles_C_UAV_06_backpack_F_assembleInfo0";
        assembleTo = "I_EUDF35_D_UAV_06_F";
        dissasembleTo[] = {};
    };
};


// UAV Bag (AL-6, Medical)
class I_EUDF35_D_UAV_06_medical_backpack_F : I_EUDF35_UAV_06_medical_backpack_F 
{
    author="kenoxite";
    scope=2;
    displayName="UAV Bag (AL-6, Medical) [EUDF] (EuroCam)";
    picture="\EUDF35_core_F\data\previews\items\icon_I_EUDF35_D_UAV_06_medical_backpack_F.paa";

    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\backpacks\uav_backpack_EUDF35_arid_1_co.paa",
        "a3\air_f_orange\uav_06\data\i_uav_06_co.paa"
    };

    class assembleInfo
    {
        primary = 1;
        base = "";
        displayName="$STR_A3_CfgVehicles_C_UAV_06_medical_backpack_F_assembleInfo0";
        assembleTo = "I_EUDF35_D_UAV_06_medical_F";
        dissasembleTo[] = {};
    };
};
