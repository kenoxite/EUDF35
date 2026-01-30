// AR-2 Darter
class I_EUDF35_D_UAV_01_F : I_EUDF35_UAV_01_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_UAV_01_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_D_F";
    side = 2;

    class assembleInfo
    {
        primary=1;
        base="";
        assembleTo="";
        displayName="";
        dissasembleTo[]=
        {
            "I_EUDF35_D_UAV_01_backpack_F"
        };
    };

    hiddenSelectionsTextures[] =
    {
        "\EUDF35_vehicles_data_F\data\drones\uav_01_EUDF35_arid_co.paa"
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

// K40 Ababil-3 / MQ-4A Greyhawk
class I_EUDF35_D_UAV_02_dynamicLoadout_F : I_EUDF35_UAV_02_dynamicLoadout_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_UAV_02_dynamicLoadout_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_D_F";
    side = 2;

    hiddenSelectionsTextures[] =
    {
        "\EUDF35_vehicles_data_F\data\drones\uav_02_EUDF35_arid_co.paa"
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

// AL-6 Pelican
class I_EUDF35_D_UAV_06_F : I_EUDF35_UAV_06_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_UAV_06_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_D_F";
    side = 2;

    class assembleInfo
    {
        primary=1;
        base="";
        assembleTo="";
        displayName="";
        dissasembleTo[]=
        {
            "I_EUDF35_D_UAV_06_backpack_F"
        };
    };
};

// AL-6 Pelican (Medical)
class I_EUDF35_D_UAV_06_medical_F : I_EUDF35_UAV_06_medical_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_UAV_06_medical_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_D_F";
    side = 2;
    
    class assembleInfo
    {
        primary=1;
        base="";
        assembleTo="";
        displayName="";
        dissasembleTo[]=
        {
            "I_EUDF35_D_UAV_06_medical_backpack_F"
        };
    };
};

// UGV Stomper
class I_EUDF35_D_UGV_01_F : I_EUDF35_UGV_01_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_UGV_01_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_D_F";
    side = 2;
    typicalCargo[]=
    {
        "I_EUDF35_D_Soldier_lite_F"
    };

    hiddenSelectionsTextures[] =
    {
        "\EUDF35_vehicles_data_F\data\drones\ugv_01_ext_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\drones\ugv_01_int_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arid_co.paa"
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
    
    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_EUDF35_arid,1);
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
        weap_xx(arifle_MSBS65_EUDF35_arid_aco_pointer_F,1);
    };
};


// UGV Stomper RCWS
class I_EUDF35_D_UGV_01_rcws_F : I_EUDF35_UGV_01_rcws_F {
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_UGV_01_rcws_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_EUDF35_D_F";
    side = 2;
    typicalCargo[]=
    {
        "I_EUDF35_D_Soldier_lite_F"
    };

    hiddenSelectionsTextures[] =
    {
        "\EUDF35_vehicles_data_F\data\drones\ugv_01_ext_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\drones\ugv_01_int_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arid_co.paa"
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
