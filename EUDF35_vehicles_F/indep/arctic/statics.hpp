
// HMG 50
class I_EUDF35_A_MHMG_50_F : I_EUDF35_MHMG_50_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_MHMG_50_F.jpg";
    crew = "I_EUDF35_A_Soldier_F";     
};

// HMG 50 Raised
class I_EUDF35_A_MHMG_50_Raised_F : I_EUDF35_MHMG_50_Raised_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_MHMG_50_Raised_F.jpg";
    crew = "I_EUDF35_A_Soldier_F";
};

// HMG 50 Autonomous
class I_EUDF35_A_HMG_01_A_F : I_EUDF35_HMG_01_A_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_HMG_01_A_F.jpg";
};

// MK32 GMG
class I_EUDF35_A_GMG_20_mm_F : I_EUDF35_GMG_20_mm_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_GMG_20_mm_F.jpg";
    crew = "I_EUDF35_A_Soldier_F";
};

// MK32 GMG Raised
class I_EUDF35_A_GMG_20_mm_Raised_F : I_EUDF35_GMG_20_mm_Raised_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_GMG_20_mm_Raised_F.jpg";
    crew = "I_EUDF35_A_Soldier_F";
};

// MK32 GMG Autonomous
class I_EUDF35_A_GMG_01_A_F : I_EUDF35_GMG_01_A_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_GMG_01_A_F.jpg";
};

// Static Titan Launcher (AT)
class I_EUDF35_A_static_AT_F : I_EUDF35_static_AT_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_static_AT_F.jpg";
    crew = "I_EUDF35_A_Soldier_F";

    hiddenSelectionsTextures[]=
    {
        "\a3\weapons_f_exp\launchers\titan\data\launch_B_Titan_tna_F_01_co.paa",
        "\a3\weapons_f_exp\launchers\titan\data\launch_b_titan_short_tna_f_02_co.paa"
    };

    textureList[]=
    {
        "EUDF35_WDL",
        0,
        "EUDF35_ART",
        1,
        "EUDF35_DES",
        0
    };
};

// Static Titan Launcher (AA)
class I_EUDF35_A_static_AA_F : I_EUDF35_static_AA_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_static_AA_F.jpg";
    crew = "I_EUDF35_A_Soldier_F";

    hiddenSelectionsTextures[]=
    {
        "\a3\weapons_f_beta\launchers\titan\data\launcher_indp_co.paa",
        "\EUDF35_vehicles_data_F\data\turrets\tubel_EUDF35_arctic_co.paa"
    };

    textureList[]=
    {
        "EUDF35_WDL",
        0,
        "EUDF35_ART",
        1,
        "EUDF35_DES",
        0
    };
};

// Remote Designator
class I_EUDF35_A_Static_Designator_01_F : I_EUDF35_Static_Designator_01_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_Static_Designator_01_F.jpg";

    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\statics\ld01_remote_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\statics\ltlm_EUDF35_arctic_co.paa"
    };
    
    class assembleInfo
    {
        primary=0;
        base="";
        assembleTo="";
        dissasembleTo[]=
        {
            "I_EUDF35_A_Static_Designator_01_weapon_F"
        };
        displayName="";
    };
};

// AN/MPQ-105 Radar
class I_EUDF35_A_Radar_System_01_F: I_EUDF35_Radar_System_01_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_Radar_System_01_F.jpg";
    
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\statics\radar_system_01_mat_01_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\statics\radar_system_01_mat_02_EUDF35_arctic_co.paa"
    };

    textureList[]=
    {
        "EUDF35_WDL",
        0,
        "EUDF35_ART",
        1,
        "EUDF35_DES",
        0
    };
};

// MIM-145 Defender (SAM)
class I_EUDF35_A_SAM_System_03_F: I_EUDF35_SAM_System_03_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_SAM_System_03_F.jpg";
    
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\statics\sam_system_03_mat_01_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\statics\sam_system_03_mat_02_EUDF35_arctic_co.paa"
    };

    textureList[]=
    {
        "EUDF35_WDL",
        0,
        "EUDF35_ART",
        1,
        "EUDF35_DES",
        0
    };
};
