// Marshal (Patria)
class I_EUDF35_D_APC_Wheeled_01_cannon_F: I_EUDF35_APC_Wheeled_01_cannon_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_APC_Wheeled_01_cannon_F.jpg";
    crew = "I_EUDF35_D_Crew_F";

    typicalCargo[]=
    {
        "I_EUDF35_D_Soldier_F"
    };
    
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_base_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_adds_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_tows_EUDF35_arid_co.paa",
        "A3\Armor_F\Data\camonet_nato_desert_co.paa",
        "A3\armor_f\data\cage_sand_co.paa"
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
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_arid_aco_pointer_F,2);
        weap_xx(LMG_Mk200_EUDF35_arid_erco_pointer_F,1);
        weap_xx(launch_MRAWS_sand_F,1);
    };

};

// Mora (Warrior)
class I_EUDF35_D_APC_tracked_03_cannon_F: I_EUDF35_APC_tracked_03_cannon_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_APC_tracked_03_cannon_F.jpg";
    crew = "I_EUDF35_D_Crew_F";

    typicalCargo[]=
    {
        "I_EUDF35_D_Soldier_F"
    };
    
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\apcs\apc_tracked_03_ext_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\apcs\apc_tracked_03_ext2_EUDF35_arid_co.paa",
        "A3\Armor_F\Data\camonet_nato_desert_co.paa",
        "A3\armor_f\data\cage_sand_co.paa"
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
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_arid_aco_pointer_F,2);
        weap_xx(LMG_Mk200_EUDF35_arid_erco_pointer_F,1);
        weap_xx(launch_MRAWS_sand_F,1);
    };

};
