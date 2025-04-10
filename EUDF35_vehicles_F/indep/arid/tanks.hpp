// MBT-52 Kuma
class I_EUDF35_D_MBT_03_cannon_F: I_EUDF35_MBT_03_cannon_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_MBT_03_cannon_F.jpg";
    crew = "I_EUDF35_D_Crew_F";
    
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\tanks\mbt_03_ext01_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\mbt_03_ext02_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\mbt_03_rcws_EUDF35_arid_co.paa",
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
