// HMG 50
class B_EUDF35_A_MHMG_50_F : I_EUDF35_A_MHMG_50_F {
    side = 1;
    faction = "BLU_EUDF35_A_F";
    crew = "B_EUDF35_A_Soldier_F";     
};

// HMG 50 Raised
class B_EUDF35_A_MHMG_50_Raised_F : I_EUDF35_A_MHMG_50_Raised_F {
    side = 1;
    faction = "BLU_EUDF35_A_F";
    crew = "B_EUDF35_A_Soldier_F";
};

// HMG 50 Autonomous
class B_EUDF35_A_HMG_01_A_F : I_EUDF35_A_HMG_01_A_F {
    side = 1;
    faction = "BLU_EUDF35_A_F";
    crew = "B_UAV_AI";
};

// MK32 GMG
class B_EUDF35_A_GMG_20_mm_F : I_EUDF35_A_GMG_20_mm_F {
    side = 1;
    faction = "BLU_EUDF35_A_F";
    crew = "B_EUDF35_A_Soldier_F";
};

// MK32 GMG Raised
class B_EUDF35_A_GMG_20_mm_Raised_F : I_EUDF35_A_GMG_20_mm_Raised_F {
    side = 1;
    faction = "BLU_EUDF35_A_F";
    crew = "B_EUDF35_A_Soldier_F";
};

// MK32 GMG Autonomous
class B_EUDF35_A_GMG_01_A_F : I_EUDF35_A_GMG_01_A_F {
    side = 1;
    faction = "BLU_EUDF35_A_F";
    crew = "B_UAV_AI";
};

// Static Titan Launcher (AT)
class B_EUDF35_A_static_AT_F : I_EUDF35_A_static_AT_F {
    side = 1;
    faction = "BLU_EUDF35_A_F";
    crew = "B_EUDF35_A_Soldier_F";
};

// Static Titan Launcher (AA)
class B_EUDF35_A_static_AA_F : I_EUDF35_A_static_AA_F {
    side = 1;
    faction = "BLU_EUDF35_A_F";
    crew = "B_EUDF35_A_Soldier_F";
};

// Remote Designator
class B_EUDF35_A_Static_Designator_01_F : I_EUDF35_A_Static_Designator_01_F {
    side = 1;
    faction = "BLU_EUDF35_A_F";
    crew = "B_UAV_AI";

    class assembleInfo
    {
        primary=0;
        base="";
        assembleTo="";
        dissasembleTo[]=
        {
            "B_EUDF35_A_Static_Designator_01_weapon_F"
        };
        displayName="";
    };
};

// AN/MPQ-105 Radar
class B_EUDF35_A_Radar_System_01_F: I_EUDF35_A_Radar_System_01_F
{
    side = 1;
    faction = "BLU_EUDF35_A_F";
    crew = "B_UAV_AI";
};

// MIM-145 Defender (SAM)
class B_EUDF35_A_SAM_System_03_F: I_EUDF35_A_SAM_System_03_F
{
    side = 1;
    faction = "BLU_EUDF35_A_F";
    crew = "B_UAV_AI";
};
