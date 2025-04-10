
// WY-55
class I_EUDF35_A_WY_55_F : I_EUDF35_WY_55_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_WY_55_F.jpg";
    crew = "I_EUDF35_A_HeliPilot_F";

    typicalCargo[]=
    {
        "I_EUDF35_A_Soldier_F"
    };
    
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\helicopters\heli_light_03_base_EUDF35_arctic_co.paa"
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
        bag_xx(B_Parachute,8);
        bag_xx(B_TacticalPack_EUDF35_arctic,1);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_arctic_aco_pointer_F,2);
    };
};

// WY-55 Unarmed
class I_EUDF35_A_WY_55_Unarmed_F : I_EUDF35_WY_55_Unarmed_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_WY_55_Unarmed_F.jpg";
    crew = "I_EUDF35_A_HeliPilot_F";

    typicalCargo[]=
    {
        "I_EUDF35_A_Soldier_F"
    };
    
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\helicopters\heli_light_03_base_EUDF35_arctic_co.paa"
    };

    textureList[]=
    {
        "EUDF35_WDL",
        0,
        "EUDF35_ar",
        1,
        "EUDF35_DES",
        0
    };
    
    class TransportBackpacks
    {
        bag_xx(B_Parachute,8);
        bag_xx(B_TacticalPack_EUDF35_arctic,1);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_arctic_aco_pointer_F,2);
    };
};

// CH-49 Mohawk
class I_EUDF35_A_Heli_Transport_02_F : I_EUDF35_Heli_Transport_02_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_Heli_Transport_02_F.jpg";
    crew = "I_EUDF35_A_HeliPilot_F";

    typicalCargo[]=
    {
        "I_EUDF35_A_HeliCrew_F"
    };
    
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\helicopters\heli_transport_02_1_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\helicopters\heli_transport_02_2_EUDF35_arctic_co.paa",
        "\EUDF35_vehicles_data_F\data\helicopters\heli_transport_02_3_EUDF35_arctic_co.paa",
        "A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
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
        bag_xx(B_Parachute,16);
        bag_xx(B_TacticalPack_EUDF35_arctic,1);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_arctic_aco_pointer_F,2);
    };
};

