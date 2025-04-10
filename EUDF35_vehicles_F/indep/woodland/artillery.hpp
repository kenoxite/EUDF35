// M4 Scorcher
class B_MBT_01_arty_F;
class I_EUDF35_MBT_01_arty_F : B_MBT_01_arty_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_F";
    // displayName = "M4 Scorcher";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_MBT_01_arty_F.jpg";
    crew = "I_EUDF35_Crew_F";

    forceInGarage=0;
    hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\tanks\mbt_01_body_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\mbt_01_scorcher_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_woodland_co.paa",
        "A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
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
                "\EUDF35_vehicles_data_F\data\tanks\mbt_01_body_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\mbt_01_scorcher_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_woodland_co.paa",
                "A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
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
                "\EUDF35_vehicles_data_F\data\tanks\mbt_01_body_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\mbt_01_scorcher_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\camonet_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\tanks\mbt_01_body_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\mbt_01_scorcher_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arid_co.paa",
                "A3\Armor_F\Data\camonet_nato_desert_co.paa"
            };
        };
    };

    animationList[]=
    {
        "showCamonetCannon",
        0,
        "showCamonetPlates1",
        0,
        "showCamonetPlates2",
        0,
        "showCamonetTurret",
        0,
        "showCamonetHull",
        0
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

// M5 Sandstorm MLRS
class B_MBT_01_mlrs_F;
class I_EUDF35_MBT_01_mlrs_F : B_MBT_01_mlrs_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_F";
    // displayName = "M5 Sandstorm MLRS";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_MBT_01_mlrs_F.jpg";
    crew = "I_EUDF35_Crew_F";

    forceInGarage=0;
    hiddenSelections[] = {"Camo1","Camo2","CamoNet"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\tanks\mbt_01_body_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\mbt_01_mlrs_EUDF35_woodland_co.paa",
        "A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
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
                "\EUDF35_vehicles_data_F\data\tanks\mbt_01_body_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\mbt_01_mlrs_EUDF35_woodland_co.paa",
                "A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
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
                "\EUDF35_vehicles_data_F\data\tanks\mbt_01_body_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\mbt_01_mlrs_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\camonet_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\tanks\mbt_01_body_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\mbt_01_mlrs_EUDF35_arid_co.paa",
                "A3\Armor_F\Data\camonet_nato_desert_co.paa"
            };
        };
    };

    animationList[]=
    {
        "showCamonetCannon",
        0,
        "showCamonetPlates1",
        0,
        "showCamonetPlates2",
        0,
        "showCamonetTurret",
        0,
        "showCamonetHull",
        0
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
