// RAI-360M Cougar (Eurocopter)
class I_EUDF35_D_Heli_EC_02_RF: I_EUDF35_Heli_EC_02_RF
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Heli_EC_02_RF.jpg";
    crew = "I_EUDF35_D_HeliPilot_F";
    dlc = "rf";

    typicalCargo[]=
    {
        "I_EUDF35_D_HeliCrew_F"
    };

    hiddenSelectionsTextures[] = {
        "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_arid_co.paa",
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
        "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
        "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_adds_21_EUDF35_arid_co.paa",
        "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_arid_co.paa",
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
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
        bag_xx(B_Parachute,8);
        bag_xx(B_TacticalPack_EUDF35_arid,1);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_arid_aco_pointer_F,2);
    };

};

// RAI-350M Cougar (Unarmed) (Eurocopter)
class I_EUDF35_D_Heli_EC_01A_military_RF: I_EUDF35_Heli_EC_01A_military_RF
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Heli_EC_01A_military_RF.jpg";
    crew = "I_EUDF35_D_HeliPilot_F";
    dlc = "rf";

    typicalCargo[]=
    {
        "I_EUDF35_D_HeliPilot_F"
    };

    hiddenSelectionsTextures[] = {
        "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_arid_co.paa",
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
        "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
        "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_adds_21_EUDF35_arid_co.paa",
        "\EUDF35_CDLC_RF_data_F\data\helicopters\as332_exterior_21_EUDF35_arid_co.paa",
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
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
        bag_xx(B_Parachute,8);
        bag_xx(B_TacticalPack_EUDF35_arid,1);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_arid_aco_pointer_F,2);
    };

};
