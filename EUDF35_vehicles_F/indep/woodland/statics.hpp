
// HMG 50
class HMG_02_base_F;
class HMG_02_EUDF35_base_F:HMG_02_base_F {
    class AnimationSources
    {
        class Hide_Shield
        {
            displayName="$STR_A3_C_CfgVehicles_HMG_02_base_F_AnimationSources_Hide_Shield0";
            useSource=1;
            source="user";
            animPeriod=0.0099999998;
            initPhase=1;
        };
        class Hide_Rail
        {
            displayName="$STR_A3_C_CfgVehicles_HMG_02_base_F_AnimationSources_Hide_Rail0";
            useSource=1;
            source="user";
            animPeriod=0.0099999998;
            initPhase=0;
        };
        class muzzle_source
        {
            source="reload";
            weapon="HMG_M2_Mounted";
        };
        class muzzle_source_rot
        {
            source="ammorandom";
            weapon="HMG_M2_Mounted";
        };
        class ReloadAnim
        {
            source="reload";
            weapon="HMG_M2_Mounted";
        };
        class ReloadMagazine
        {
            source="reloadmagazine";
            weapon="HMG_M2_Mounted";
        };
        class Revolving
        {
            source="revolving";
            weapon="HMG_M2_Mounted";
        };
    };
};
class I_EUDF35_MHMG_50_F : HMG_02_EUDF35_base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "M2 HMG .50";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_MHMG_50_F.jpg";
    crew = "I_EUDF35_Soldier_F";
    
    forceInGarage=0;        
};

// HMG 50 Raised
class HMG_02_high_base_F;
class HMG_02_EUDF35_high_base_F:HMG_02_high_base_F {
    class AnimationSources
    {
        class Hide_Shield
        {
            displayName="$STR_A3_C_CfgVehicles_HMG_02_base_F_AnimationSources_Hide_Shield0";
            useSource=1;
            source="user";
            animPeriod=0.0099999998;
            initPhase=0;
        };
        class Hide_Rail
        {
            displayName="$STR_A3_C_CfgVehicles_HMG_02_base_F_AnimationSources_Hide_Rail0";
            useSource=1;
            source="user";
            animPeriod=0.0099999998;
            initPhase=0;
        };
        class muzzle_source
        {
            source="reload";
            weapon="HMG_M2_Mounted";
        };
        class muzzle_source_rot
        {
            source="ammorandom";
            weapon="HMG_M2_Mounted";
        };
        class ReloadAnim
        {
            source="reload";
            weapon="HMG_M2_Mounted";
        };
        class ReloadMagazine
        {
            source="reloadmagazine";
            weapon="HMG_M2_Mounted";
        };
        class Revolving
        {
            source="revolving";
            weapon="HMG_M2_Mounted";
        };
    };
};
class I_EUDF35_MHMG_50_Raised_F : HMG_02_EUDF35_high_base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "M2 HMG .50 (Raised)";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_MHMG_50_Raised_F.jpg";
    crew = "I_EUDF35_Soldier_F";
    
    forceInGarage=0;
};

// HMG 50 Autonomous
class I_HMG_01_A_F;
class I_EUDF35_HMG_01_A_F : I_HMG_01_A_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_HMG_01_A_F.jpg";
    // crew = "I_UAV_AI";
    
    forceInGarage=0;
    class assembleInfo
    {
        primary=0;
        base="";
        assembleTo="";
        dissasembleTo[]=
        {
            "I_EUDF35_HMG_01_A_weapon_F",
            "I_HMG_01_support_F"
        };
        displayName="";
    };
};

// MK32 GMG
class I_GMG_01_F;
class I_EUDF35_GMG_20_mm_F : I_GMG_01_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Mk32 GMG 20 mm";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_GMG_20_mm_F.jpg";
    crew = "I_EUDF35_Soldier_F";
    
    forceInGarage=0;
};

// MK32 GMG Raised
class I_GMG_01_high_F;
class I_EUDF35_GMG_20_mm_Raised_F : I_GMG_01_high_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Mk32 GMG 20 mm (Raised)";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_GMG_20_mm_Raised_F.jpg";
    crew = "I_EUDF35_Soldier_F";
    
    forceInGarage=0;
};

// MK32 GMG Autonomous
class I_GMG_01_A_F;
class I_EUDF35_GMG_01_A_F : I_GMG_01_A_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_GMG_01_A_F.jpg";
    // crew = "I_UAV_AI";
    
    forceInGarage=0;
    class assembleInfo
    {
        primary=0;
        base="";
        assembleTo="";
        dissasembleTo[]=
        {
            "I_EUDF35_GMG_01_A_weapon_F",
            "I_HMG_01_support_F"
        };
        displayName="";
    };
};

// Static Titan Launcher (AT)
class I_static_AT_F;
class I_EUDF35_static_AT_F : I_static_AT_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "Static Titan Launcher (AT) [EUDF]";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_static_AT_F.jpg";
    crew = "I_EUDF35_Soldier_F";
    
    forceInGarage=0;
    hiddenSelections[]=
    {
        "camo_launcher",
        "camo_tube"
    };
    hiddenSelectionsTextures[] = {
        "\a3\weapons_f_exp\launchers\titan\data\launch_B_Titan_tna_F_01_co.paa",
        "\a3\weapons_f_exp\launchers\titan\data\launch_b_titan_short_tna_f_02_co.paa"
    };

    textureList[]=
    {
        "EUDF35_WDL",
        1,
        "EUDF35_ART",
        0,
        "EUDF35_DES",
        0
    };

    class TextureSources
    {
        class EUDF35_WDL
        {
            author="kenoxite";
            displayName="EUDF";
            factions[]=
            {
                "IND_EUDF35_F",
                "BLU_EUDF35_F",
                "OPF_EUDF35_F"
            };
            textures[]=
            {
                "\a3\weapons_f_exp\launchers\titan\data\launch_B_Titan_tna_F_01_co.paa",
                "\a3\weapons_f_exp\launchers\titan\data\launch_b_titan_short_tna_f_02_co.paa"
            };
        };
        class EUDF35_ART
        {
            author="kenoxite";
            displayName="EUDF (Arctic)";
            factions[]=
            {
                "IND_EUDF35_A_F",
                "BLU_EUDF35_A_F",
                "OPF_EUDF35_A_F"
            };
            textures[]=
            {
                "\a3\weapons_f_exp\launchers\titan\data\launch_B_Titan_tna_F_01_co.paa",
                "\a3\weapons_f_exp\launchers\titan\data\launch_b_titan_short_tna_f_02_co.paa"
            };
        };
        class EUDF35_DES
        {
            author="kenoxite";
            displayName="EUDF (Arid)";
            factions[]=
            {
                "IND_EUDF35_D_F",
                "BLU_EUDF35_D_F",
                "OPF_EUDF35_D_F"
            };
            textures[]=
            {
                "\a3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
                "\a3\weapons_f_beta\launchers\titan\data\tubem_co.paa"
            };
        };
    };
};

// Static Titan Launcher (AA)
class I_static_AA_F;
class I_EUDF35_static_AA_F : I_static_AA_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "Static Titan Launcher (AA) [EUDF]";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_static_AA_F.jpg";
    crew = "I_EUDF35_Soldier_F";
    
    forceInGarage=0;
    hiddenSelections[]=
    {
        "camo_launcher",
        "camo_tube"
    };
    hiddenSelectionsTextures[]=
    {
        "\a3\weapons_f_beta\launchers\titan\data\launcher_indp_co.paa",
        "\EUDF35_vehicles_data_F\data\turrets\tubel_EUDF35_woodland_co.paa"
    };

    textureList[]=
    {
        "EUDF35_WDL",
        1,
        "EUDF35_ART",
        0,
        "EUDF35_DES",
        0
    };

    class TextureSources
    {
        class EUDF35_WDL
        {
            author="kenoxite";
            displayName="EUDF";
            factions[]=
            {
                "IND_EUDF35_F",
                "BLU_EUDF35_F",
                "OPF_EUDF35_F"
            };
            textures[]=
            {
                "\a3\weapons_f_beta\launchers\titan\data\launcher_indp_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\tubel_EUDF35_woodland_co.paa"
            };
        };
        class EUDF35_ART
        {
            author="kenoxite";
            displayName="EUDF (Arctic)";
            factions[]=
            {
                "IND_EUDF35_A_F",
                "BLU_EUDF35_A_F",
                "OPF_EUDF35_A_F"
            };
            textures[]=
            {
                "\a3\weapons_f_beta\launchers\titan\data\launcher_indp_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\tubel_EUDF35_arctic_co.paa"
            };
        };
        class EUDF35_DES
        {
            author="kenoxite";
            displayName="EUDF (Arid)";
            factions[]=
            {
                "IND_EUDF35_D_F",
                "BLU_EUDF35_D_F",
                "OPF_EUDF35_D_F"
            };
            textures[]=
            {
                "\a3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
                "\a3\weapons_f_beta\launchers\titan\data\tubel_co.paa"
            };
        };
    };
};

// Remote Designator
class B_Static_Designator_01_F;
class I_EUDF35_Static_Designator_01_F : B_Static_Designator_01_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_F";
    displayName = "Remote Designator [EUDF]";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Static_Designator_01_F.jpg";
    crew = "I_UAV_AI";
    
    forceInGarage=0;
    hiddenSelections[] = {"Camo","Camo1"};
    hiddenSelectionsTextures[] = {
        "a3\Static_F_Enoch\Designator_01\Data\ld01_remote_khk_co.paa",
        "a3\Weapons_F_Exp\Binocular\Data\Laserdesignator_01_khk_F_co.paa"
    };
    
    class assembleInfo
    {
        primary=0;
        base="";
        assembleTo="";
        dissasembleTo[]=
        {
            "I_EUDF35_Static_Designator_01_weapon_F"
        };
        displayName="";
    };
};

// AN/MPQ-105 Radar
class B_Radar_System_01_F;
class I_EUDF35_Radar_System_01_F: B_Radar_System_01_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Radar_System_01_F.jpg";
    crew = "I_UAV_AI";
    
    forceInGarage=0;
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\statics\radar_system_01_mat_01_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\statics\radar_system_01_mat_02_EUDF35_woodland_co.paa"
    };

    textureList[]=
    {
        "EUDF35_WDL",
        1,
        "EUDF35_ART",
        0,
        "EUDF35_DES",
        0
    };
    class TextureSources
    {
        class EUDF35_WDL
        {
            author="kenoxite";
            displayName="EUDF (Woodland)";
            factions[]=
            {
                "IND_EUDF35_F",
                "BLU_EUDF35_F",
                "OPF_EUDF35_F"
            };
            textures[]=
            {
                "\EUDF35_vehicles_data_F\data\statics\radar_system_01_mat_01_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\statics\radar_system_01_mat_02_EUDF35_woodland_co.paa"
            };
        };
        class EUDF35_ART
        {
            author="kenoxite";
            displayName="EUDF (Arctic)";
            factions[]=
            {
                "IND_EUDF35_A_F",
                "BLU_EUDF35_A_F",
                "OPF_EUDF35_A_F"
            };
            textures[]=
            {
                "\EUDF35_vehicles_data_F\data\statics\radar_system_01_mat_01_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\statics\radar_system_01_mat_02_EUDF35_arctic_co.paa"
            };
        };
        class EUDF35_DES
        {
            author="kenoxite";
            displayName="EUDF (Arid)";
            factions[]=
            {
                "IND_EUDF35_D_F",
                "BLU_EUDF35_D_F",
                "OPF_EUDF35_D_F"
            };
            textures[]=
            {
                "\EUDF35_vehicles_data_F\data\statics\radar_system_01_mat_01_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\statics\radar_system_01_mat_02_EUDF35_arid_co.paa"
            };
        };
    };
};

// MIM-145 Defender (SAM)
class B_SAM_System_03_F;
class I_EUDF35_SAM_System_03_F: B_SAM_System_03_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_SAM_System_03_F.jpg";
    crew = "I_UAV_AI";
    
    forceInGarage=0;
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\statics\sam_system_03_mat_01_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\statics\sam_system_03_mat_02_EUDF35_woodland_co.paa"
    };

    textureList[]=
    {
        "EUDF35_WDL",
        1,
        "EUDF35_ART",
        0,
        "EUDF35_DES",
        0
    };
    class TextureSources
    {
        class EUDF35_WDL
        {
            author="kenoxite";
            displayName="EUDF (Woodland)";
            factions[]=
            {
                "IND_EUDF35_F",
                "BLU_EUDF35_F",
                "OPF_EUDF35_F"
            };
            textures[]=
            {
                "\EUDF35_vehicles_data_F\data\statics\sam_system_03_mat_01_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\statics\sam_system_03_mat_02_EUDF35_woodland_co.paa"
            };
        };
        class EUDF35_ART
        {
            author="kenoxite";
            displayName="EUDF (Arctic)";
            factions[]=
            {
                "IND_EUDF35_A_F",
                "BLU_EUDF35_A_F",
                "OPF_EUDF35_A_F"
            };
            textures[]=
            {
                "\EUDF35_vehicles_data_F\data\statics\sam_system_03_mat_01_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\statics\sam_system_03_mat_02_EUDF35_arctic_co.paa"
            };
        };
        class EUDF35_DES
        {
            author="kenoxite";
            displayName="EUDF (Arid)";
            factions[]=
            {
                "IND_EUDF35_D_F",
                "BLU_EUDF35_D_F",
                "OPF_EUDF35_D_F"
            };
            textures[]=
            {
                "\EUDF35_vehicles_data_F\data\statics\radar_system_03_mat_01_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\statics\radar_system_03_mat_02_EUDF35_arid_co.paa"
            };
        };
    };
};
