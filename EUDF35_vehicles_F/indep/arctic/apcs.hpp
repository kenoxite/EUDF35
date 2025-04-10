// Marshal (Patria)
class I_EUDF35_A_APC_Wheeled_01_cannon_F: I_EUDF35_APC_Wheeled_01_cannon_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_APC_Wheeled_01_cannon_F.jpg";
    crew = "I_EUDF35_A_Crew_F";

    typicalCargo[]=
    {
        "I_EUDF35_A_Soldier_F"
    };
    
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_base_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_adds_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_tows_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\camonet_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\cage_EUDF35_arctic_co.paa"
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

    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_EUDF35_arctic,1);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_arctic_aco_pointer_F,2);
        weap_xx(LMG_Mk200_EUDF35_arctic_erco_pointer_F,1);
        weap_xx(launch_MRAWS_green_F,1);
    };

};

// Mora (Warrior)
class I_EUDF35_A_APC_tracked_03_cannon_F: I_EUDF35_APC_tracked_03_cannon_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_APC_tracked_03_cannon_F.jpg";
    crew = "I_EUDF35_A_Crew_F";

    typicalCargo[]=
    {
        "I_EUDF35_A_Soldier_F"
    };
    
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\apcs\apc_tracked_03_ext_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\apcs\apc_tracked_03_ext2_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\camonet_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\tanks\cage_EUDF35_arctic_co.paa"
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

    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_EUDF35_arctic,1);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_arctic_aco_pointer_F,2);
        weap_xx(LMG_Mk200_EUDF35_arctic_erco_pointer_F,1);
        weap_xx(launch_MRAWS_green_F,1);
    };

};
