// MBT-52 Kuma
class I_EUDF35_A_MBT_03_cannon_F: I_EUDF35_MBT_03_cannon_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_MBT_03_cannon_F.jpg";
    crew = "I_EUDF35_A_Crew_F";
    
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\tanks\mbt_03_ext01_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\mbt_03_ext02_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\mbt_03_rcws_EUDF35_arctic_co.paa",
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
