// AR-2 Darter
class I_UAV_01_F;
class I_EUDF35_UAV_01_F : I_UAV_01_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_UAV_01_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_F";
    side = 2;
    crew="I_UAV_AI";
    typicalCargo[]=
    {
        "I_UAV_AI"
    };
    class assembleInfo
    {
        primary=1;
        base="";
        assembleTo="";
        displayName="";
        dissasembleTo[]=
        {
            "I_EUDF35_UAV_01_backpack_F"
        };
    };

    hiddenSelections[]=
    {
        "Camo"
    };

    hiddenSelectionsTextures[] =
    {
        "\EUDF35_vehicles_data_F\data\drones\uav_01_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\drones\uav_01_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\drones\uav_01_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\drones\uav_01_EUDF35_arid_co.paa"
            };
        };
    };
};

// K40 Ababil-3 / MQ-4A Greyhawk
class I_UAV_02_dynamicLoadout_F;
class I_EUDF35_UAV_02_dynamicLoadout_F : I_UAV_02_dynamicLoadout_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_UAV_02_dynamicLoadout_F.jpg";
    displayName = "EQ-4E Milvus";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_F";
    side = 2;
    crew="I_UAV_AI";
    typicalCargo[]=
    {
        "I_UAV_AI"
    };

    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] =
    {
        "\EUDF35_vehicles_data_F\data\drones\uav_02_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\drones\uav_02_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\drones\uav_02_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\drones\uav_02_EUDF35_arid_co.paa"
            };
        };
    };
};

// AL-6 Pelican
class I_UAV_06_F;
class I_EUDF35_UAV_06_F : I_UAV_06_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_UAV_06_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_F";
    side = 2;
    DLC = "Orange";

    crew = "I_UAV_AI_F";
    typicalCargo[] = {"I_UAV_AI_F"};

    class assembleInfo
    {
        primary=1;
        base="";
        assembleTo="";
        displayName="";
        dissasembleTo[]=
        {
            "I_EUDF35_UAV_06_backpack_F"
        };
    };

    hiddenSelections[] = {"Camo","Medical"};
    hiddenSelectionsTextures[] = {"A3\Air_F_Orange\UAV_06\Data\I_UAV_06_CO.paa"};
};

// AL-6 Pelican (Medical)
class I_UAV_06_medical_F;
class I_EUDF35_UAV_06_medical_F : I_UAV_06_medical_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_UAV_06_medical_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_F";
    side = 2;
    DLC = "Orange";

    crew = "I_UAV_AI_F";
    typicalCargo[] = {"I_UAV_AI_F"};
    
    class assembleInfo
    {
        primary=1;
        base="";
        assembleTo="";
        displayName="";
        dissasembleTo[]=
        {
            "I_EUDF35_UAV_06_medical_backpack_F"
        };
    };

    hiddenSelections[] = {"Camo","Medical"};
    hiddenSelectionsTextures[] = {"A3\Air_F_Orange\UAV_06\Data\I_UAV_06_CO.paa"};
};

// UGV Stomper
class I_UGV_01_F;
class I_EUDF35_UGV_01_F : I_UGV_01_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_UGV_01_rcws_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_F";
    side = 2;
    crew="I_UAV_AI";
    typicalCargo[]=
    {
        "I_EUDF35_Soldier_lite_F"
    };

    hiddenSelectionsTextures[] =
    {
        "\EUDF35_vehicles_data_F\data\drones\ugv_01_ext_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\drones\ugv_01_int_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\drones\ugv_01_ext_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\drones\ugv_01_int_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\drones\ugv_01_ext_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\drones\ugv_01_int_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\drones\ugv_01_ext_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\drones\ugv_01_int_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arid_co.paa"
            };
        };
    };
    
    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_EUDF35_woodland,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,5);
        item_xx(Medikit,1);
        item_xx(ToolKit,1);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_msbs_mag,12);
        mag_xx(200Rnd_65x39_cased_Box,2);
        mag_xx(HandGrenade,5);
        mag_xx(SmokeShell,3);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(16Rnd_9x21_Mag,6);
        mag_xx(MRAWS_HEAT_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_aco_pointer_F,1);
    };
};


// UGV Stomper RCWS
class I_UGV_01_rcws_F;
class I_EUDF35_UGV_01_rcws_F : I_UGV_01_rcws_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_UGV_01_rcws_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_F";
    side = 2;
    crew="I_UAV_AI";
    typicalCargo[]=
    {
        "I_EUDF35_Soldier_lite_F"
    };

    hiddenSelectionsTextures[] =
    {
        "\EUDF35_vehicles_data_F\data\drones\ugv_01_ext_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\drones\ugv_01_int_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\drones\ugv_01_ext_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\drones\ugv_01_int_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\drones\ugv_01_ext_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\drones\ugv_01_int_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\drones\ugv_01_ext_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\drones\ugv_01_int_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arid_co.paa"
            };
        };
    };
};
