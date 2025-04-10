// RAI-360M Cougar (Eurocopter)
class I_Heli_EC_02_RF;
class I_EUDF35_Heli_EC_02_RF: I_Heli_EC_02_RF
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "RAI-360M Eurocopter";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Heli_EC_02_RF.jpg";
    crew = "I_EUDF35_HeliPilot_F";
    dlc = "rf";
    
    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_HeliCrew_F"
    };

    hiddenSelections[] = {"camo1","camo2","pip_screen","camo4","camoWreckExt","camoWreckInt"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_woodland_co.paa",
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
        "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
        "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_adds_21_EUDF35_woodland_co.paa",
        "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_woodland_co.paa",
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
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
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_woodland_co.paa",
                "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
                "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_adds_21_EUDF35_woodland_co.paa",
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_woodland_co.paa",
                "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
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
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_arctic_co.paa",
                "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
                "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_adds_21_EUDF35_arctic_co.paa",
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_arctic_co.paa",
                "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
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
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_arid_co.paa",
                "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
                "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_adds_21_EUDF35_arid_co.paa",
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_arid_co.paa",
                "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
            };
        };
    };
    
    class TransportBackpacks
    {
        bag_xx(B_Parachute,8);
        bag_xx(B_TacticalPack_EUDF35_woodland,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,6);
        item_xx(Medikit,1);
        item_xx(ToolKit,1);
        item_xx(ItemGPS,1);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellYellow,4);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_aco_pointer_F,2);
    };

};

// RAI-350M Cougar (Unarmed) (Eurocopter)
class I_Heli_EC_01A_military_RF;
class I_EUDF35_Heli_EC_01A_military_RF: I_Heli_EC_01A_military_RF
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "RAI-350M Eurocopter (Unarmed)";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Heli_EC_01A_military_RF.jpg";
    crew = "I_EUDF35_HeliPilot_F";
    dlc = "rf";
    
    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_HeliPilot_F"
    };

    hiddenSelections[] = {"camo1","camo2","pip_screen","camo4","camoWreckExt","camoWreckInt"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_woodland_co.paa",
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
        "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
        "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_adds_21_EUDF35_woodland_co.paa",
        "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_woodland_co.paa",
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
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
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_woodland_co.paa",
                "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
                "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_adds_21_EUDF35_woodland_co.paa",
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_woodland_co.paa",
                "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
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
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_arctic_co.paa",
                "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
                "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_adds_21_EUDF35_arctic_co.paa",
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_arctic_co.paa",
                "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
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
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_arid_co.paa",
                "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
                "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_adds_21_EUDF35_arid_co.paa",
                "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_arid_co.paa",
                "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
            };
        };
    };
    
    class TransportBackpacks
    {
        bag_xx(B_Parachute,8);
        bag_xx(B_TacticalPack_EUDF35_woodland,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,6);
        item_xx(Medikit,1);
        item_xx(ToolKit,1);
        item_xx(ItemGPS,1);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellYellow,4);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_aco_pointer_F,2);
    };

};
