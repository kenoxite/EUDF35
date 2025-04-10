// AR-2 Darter
class I_EUDF35_A_UAV_01_F : I_EUDF35_UAV_01_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_UAV_01_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_A_F";
    side = 2;

    class assembleInfo
    {
        primary=1;
        base="";
        assembleTo="";
        displayName="";
        dissasembleTo[]=
        {
            "I_EUDF35_A_UAV_01_backpack_F"
        };
    };

    hiddenSelectionsTextures[] =
    {
        "\EUDF35_vehicles_data_F\data\drones\uav_01_EUDF35_arctic_co.paa"
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

// K40 Ababil-3 / MQ-4A Greyhawk
class I_EUDF35_A_UAV_02_dynamicLoadout_F : I_EUDF35_UAV_02_dynamicLoadout_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_UAV_02_dynamicLoadout_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_A_F";
    side = 2;

    hiddenSelectionsTextures[] =
    {
        "\EUDF35_vehicles_data_F\data\drones\uav_02_EUDF35_arctic_co.paa"
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

// AL-6 Pelican
class I_EUDF35_A_UAV_06_F : I_EUDF35_UAV_06_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_UAV_06_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_A_F";
    side = 2;

    class assembleInfo
    {
        primary=1;
        base="";
        assembleTo="";
        displayName="";
        dissasembleTo[]=
        {
            "I_EUDF35_A_UAV_06_backpack_F"
        };
    };
};

// AL-6 Pelican (Medical)
class I_EUDF35_A_UAV_06_medical_F : I_EUDF35_UAV_06_medical_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_UAV_06_medical_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_A_F";
    side = 2;
    
    class assembleInfo
    {
        primary=1;
        base="";
        assembleTo="";
        displayName="";
        dissasembleTo[]=
        {
            "I_EUDF35_A_UAV_06_medical_backpack_F"
        };
    };
};

// UGV Stomper
class I_EUDF35_A_UGV_01_F : I_EUDF35_UGV_01_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_UGV_01_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_A_F";
    side = 2;
    typicalCargo[]=
    {
        "I_EUDF35_A_Soldier_lite_F"
    };

    hiddenSelectionsTextures[] =
    {
        "\EUDF35_vehicles_data_F\data\drones\ugv_01_ext_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\drones\ugv_01_int_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arctic_co.paa"
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


// UGV Stomper RCWS
class I_EUDF35_A_UGV_01_rcws_F : I_EUDF35_UGV_01_rcws_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_UGV_01_rcws_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_A_F";
    side = 2;
    typicalCargo[]=
    {
        "I_EUDF35_A_Soldier_lite_F"
    };

    hiddenSelectionsTextures[] =
    {
        "\EUDF35_vehicles_data_F\data\drones\ugv_01_ext_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\drones\ugv_01_int_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arctic_co.paa"
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
