// Dismantled Remote Designator
class B_EUDF35_A_Static_Designator_01_weapon_F: I_EUDF35_A_Static_Designator_01_weapon_F
{
    faction = "BLU_EUDF35_A_F";
    class assembleInfo: assembleInfo
    {
        assembleTo = "B_EUDF35_A_Static_Designator_01_F";
    };
};


// UAV Bag (AR-2)
class B_EUDF35_A_UAV_01_backpack_F : I_EUDF35_A_UAV_01_backpack_F 
{
    class assembleInfo
    {
        primary = 1;
        base = "";
        displayName="$STR_A3_CfgVehicles_UAV_01_base0";
        assembleTo = "B_EUDF35_A_UAV_01_F";
        dissasembleTo[] = {};
    };
};


// UAV Bag (AL-6)
class B_EUDF35_A_UAV_06_backpack_F : I_EUDF35_A_UAV_06_backpack_F 
{
    class assembleInfo
    {
        primary = 1;
        base = "";
        displayName="$STR_A3_CfgVehicles_C_UAV_06_backpack_F_assembleInfo0";
        assembleTo = "B_EUDF35_A_UAV_06_F";
        dissasembleTo[] = {};
    };
};


// UAV Bag (AL-6, Medical)
class B_EUDF35_A_UAV_06_medical_backpack_F : I_EUDF35_A_UAV_06_medical_backpack_F 
{
    class assembleInfo
    {
        primary = 1;
        base = "";
        displayName="$STR_A3_CfgVehicles_C_UAV_06_medical_backpack_F_assembleInfo0";
        assembleTo = "B_EUDF35_A_UAV_06_medical_F";
        dissasembleTo[] = {};
    };
};
