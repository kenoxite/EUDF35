// M4 Scorcher
class I_EUDF35_D_MBT_01_arty_F : I_EUDF35_MBT_01_arty_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_MBT_01_arty_F.jpg";
    crew = "I_EUDF35_D_Crew_F";

    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\tanks\mbt_01_body_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\mbt_01_scorcher_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arid_co.paa",
        "A3\Armor_F\Data\camonet_nato_desert_co.paa"
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
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_arid_aco_pointer_F,2);
    };
};

// M5 Sandstorm MLRS
class I_EUDF35_D_MBT_01_mlrs_F : I_EUDF35_MBT_01_mlrs_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_MBT_01_mlrs_F.jpg";
    crew = "I_EUDF35_D_Crew_F";

    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\tanks\mbt_01_body_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\mbt_01_mlrs_EUDF35_arid_co.paa",
        "A3\Armor_F\Data\camonet_nato_desert_co.paa"
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
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_arid_aco_pointer_F,2);
    };
};
