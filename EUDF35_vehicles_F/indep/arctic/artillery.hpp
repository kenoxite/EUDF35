// M4 Scorcher
class I_EUDF35_A_MBT_01_arty_F : I_EUDF35_MBT_01_arty_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_MBT_01_arty_F.jpg";
    crew = "I_EUDF35_A_Crew_F";

    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\tanks\mbt_01_body_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\mbt_01_scorcher_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\camonet_EUDF35_arctic_co.paa"
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
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_arctic_aco_pointer_F,2);
    };
};

// M5 Sandstorm MLRS
class I_EUDF35_A_MBT_01_mlrs_F : I_EUDF35_MBT_01_mlrs_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_MBT_01_mlrs_F.jpg";
    crew = "I_EUDF35_A_Crew_F";

    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\tanks\mbt_01_body_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\mbt_01_mlrs_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\camonet_EUDF35_arctic_co.paa"
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
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_arctic_aco_pointer_F,2);
    };
};
