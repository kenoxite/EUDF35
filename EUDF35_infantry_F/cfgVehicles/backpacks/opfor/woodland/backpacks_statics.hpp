// Dismantled Remote Designator
class O_EUDF35_Static_Designator_01_weapon_F: I_EUDF35_Static_Designator_01_weapon_F
{
    faction = "OPF_EUDF35_F";
    class assembleInfo: assembleInfo
    {
        assembleTo = "O_EUDF35_Static_Designator_01_F";
    };
};


// UAV Bag (AR-2)
class O_EUDF35_UAV_01_backpack_F : I_EUDF35_UAV_01_backpack_F 
{
    class assembleInfo
    {
        primary = 1;
        base = "";
        displayName="$STR_A3_CfgVehicles_UAV_01_base0";
        assembleTo = "O_EUDF35_UAV_01_F";
        dissasembleTo[] = {};
    };
};


// UAV Bag (AL-6)
class O_EUDF35_UAV_06_backpack_F : I_EUDF35_UAV_06_backpack_F 
{
    class assembleInfo
    {
        primary = 1;
        base = "";
        displayName="$STR_A3_CfgVehicles_C_UAV_06_backpack_F_assembleInfo0";
        assembleTo = "O_EUDF35_UAV_06_F";
        dissasembleTo[] = {};
    };
};


// UAV Bag (AL-6, Medical)
class O_EUDF35_UAV_06_medical_backpack_F : I_EUDF35_UAV_06_medical_backpack_F 
{
    class assembleInfo
    {
        primary = 1;
        base = "";
        displayName="$STR_A3_CfgVehicles_C_UAV_06_medical_backpack_F_assembleInfo0";
        assembleTo = "O_EUDF35_UAV_06_medical_F";
        dissasembleTo[] = {};
    };
};
    

// Autonomous MG
class O_EUDF35_HMG_01_A_weapon_F: I_EUDF35_HMG_01_A_weapon_F
{
    faction = "OPF_EUDF35_F";    
    class assembleInfo: assembleInfo
    {
        assembleTo = "O_EUDF35_HMG_01_A_F";
    };
};

// Autonomous GMG
class O_EUDF35_GMG_01_A_weapon_F: I_EUDF35_GMG_01_A_weapon_F
{
    faction = "OPF_EUDF35_F";    
    class assembleInfo: assembleInfo
    {
        assembleTo = "O_EUDF35_GMG_01_A_F";
    };
};
