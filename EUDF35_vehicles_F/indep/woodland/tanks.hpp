class I_MBT_03_cannon_F;
class I_EUDF35_MBT_03_cannon_F: I_MBT_03_cannon_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_F";
    displayName = "MBT-52 Leopard";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_MBT_03_cannon_F.jpg";
    crew = "I_EUDF35_Crew_F";

    forceInGarage=0;

    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "Camo3",
        "CamoNet"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\tanks\mbt_03_ext01_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\mbt_03_ext02_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\mbt_03_rcws_EUDF35_woodland_co.paa",
        "A3\Armor_F\Data\camonet_nato_green_co.paa"
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
                "IND_EUDF35_F"
            };
            textures[]=
            {
                "\EUDF35_vehicles_data_F\data\tanks\mbt_03_ext01_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\mbt_03_ext02_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\mbt_03_rcws_EUDF35_woodland_co.paa",
                "A3\Armor_F\Data\camonet_nato_green_co.paa"
            };
        };
        class EUDF35_ART
        {
            author="kenoxite";
            displayName="EUDF (Arctic)";
            factions[]=
            {
                "IND_EUDF35_A_F"
            };
            textures[]=
            {
                "\EUDF35_vehicles_data_F\data\tanks\mbt_03_ext01_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\mbt_03_ext02_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\mbt_03_rcws_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\camonet_EUDF35_arctic_co.paa"
            };
        };
        class EUDF35_DES
        {
            author="kenoxite";
            displayName="EUDF (Arid)";
            factions[]=
            {
                "IND_EUDF35_D_F"
            };
            textures[]=
            {
                "\EUDF35_vehicles_data_F\data\tanks\mbt_03_ext01_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\mbt_03_ext02_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\mbt_03_rcws_EUDF35_arid_co.paa",
                "A3\Armor_F\Data\camonet_nato_desert_co.paa"
            };
        };
    };

    animationList[]=
    {
        "showCamonetHull",
        0.5,
        "showCamonetTurret",
        0.5,
        "showCamonetCannon",
        1,
        "showCamonetCannon1",
        1
    };
    class TransportItems
    {
        item_xx(FirstAidKit,10);
        item_xx(Medikit,1);
        item_xx(ToolKit,1);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellBlue,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_aco_pointer_F,2);
    };
};
