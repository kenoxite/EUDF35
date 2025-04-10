// HMG 50
class I_EUDF35_D_MHMG_50_F : I_EUDF35_MHMG_50_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_MHMG_50_F.jpg";
    crew = "I_EUDF35_D_Soldier_F";     
};

// HMG 50 Raised
class I_EUDF35_D_MHMG_50_Raised_F : I_EUDF35_MHMG_50_Raised_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_MHMG_50_Raised_F.jpg";
    crew = "I_EUDF35_D_Soldier_F";
};

// HMG 50 Autonomous
class I_EUDF35_D_HMG_01_A_F : I_EUDF35_HMG_01_A_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_HMG_01_A_F.jpg";
};

// MK32 GMG
class I_EUDF35_D_GMG_20_mm_F : I_EUDF35_GMG_20_mm_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_GMG_20_mm_F.jpg";
    crew = "I_EUDF35_D_Soldier_F";
};

// MK32 GMG Raised
class I_EUDF35_D_GMG_20_mm_Raised_F : I_EUDF35_GMG_20_mm_Raised_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_GMG_20_mm_Raised_F.jpg";
    crew = "I_EUDF35_D_Soldier_F";
};

// MK32 GMG Autonomous
class I_EUDF35_D_GMG_01_A_F : I_EUDF35_GMG_01_A_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_GMG_01_A_F.jpg";
};

// Static Titan Launcher (AT)
class I_EUDF35_D_static_AT_F : I_EUDF35_static_AT_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_static_AT_F.jpg";
    crew = "I_EUDF35_D_Soldier_F";

    hiddenSelectionsTextures[]=
    {
        "\a3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
        "\a3\weapons_f_beta\launchers\titan\data\tubem_co.paa"
    };

    textureList[]=
    {
        "EUDF35_WDL",
        0,
        "EUDF35_ART",
        0,
        "EUDF35_DES",
        1
    };
};

// Static Titan Launcher (AA)
class I_EUDF35_D_static_AA_F : I_EUDF35_static_AA_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_static_AA_F.jpg";
    crew = "I_EUDF35_D_Soldier_F";

    hiddenSelectionsTextures[]=
    {
        "\a3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
        "\a3\weapons_f_beta\launchers\titan\data\tubel_co.paa"
    };

    textureList[]=
    {
        "EUDF35_WDL",
        0,
        "EUDF35_ART",
        0,
        "EUDF35_DES",
        1
    };
};

// Remote Designator
class I_EUDF35_D_Static_Designator_01_F : I_EUDF35_Static_Designator_01_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Static_Designator_01_F.jpg";

    hiddenSelectionsTextures[] = {
        "a3\static_f_mark\designator_01\data\ld01_remote_co.paa",
        "a3\weapons_f_mark\binocular\data\ltlm_snd_co.paa"
    };
    
    class assembleInfo
    {
        primary=0;
        base="";
        assembleTo="";
        dissasembleTo[]=
        {
            "I_EUDF35_D_Static_Designator_01_weapon_F"
        };
        displayName="";
    };
};

// AN/MPQ-105 Radar
class I_EUDF35_D_Radar_System_01_F: I_EUDF35_Radar_System_01_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Radar_System_01_F.jpg";
    
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\statics\radar_system_01_mat_01_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\statics\radar_system_01_mat_02_EUDF35_arid_co.paa"
    };

    textureList[]=
    {
        "EUDF35_WDL",
        0,
        "EUDF35_ART",
        0,
        "EUDF35_DES",
        1
    };
};

// MIM-145 Defender (SAM)
class I_EUDF35_D_SAM_System_03_F: I_EUDF35_SAM_System_03_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_SAM_System_03_F.jpg";
    
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\statics\sam_system_03_mat_01_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\statics\sam_system_03_mat_02_EUDF35_arid_co.paa"
    };

    textureList[]=
    {
        "EUDF35_WDL",
        0,
        "EUDF35_ART",
        0,
        "EUDF35_DES",
        1
    };
};
