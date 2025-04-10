// Assault Boat
class I_EUDF35_D_Assault_Boat_F : I_EUDF35_Assault_Boat_F{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Assault_Boat_F.jpg";
    crew = "I_EUDF35_D_Recon_F";

    typicalCargo[]=
    {
        "I_EUDF35_D_Soldier_F"
    };
    
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\ships\boat_transport_01_EUDF35_arid_co.paa"
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
};

// Speedboat
class I_EUDF35_D_Speedboat_Minigun_F : I_EUDF35_Speedboat_Minigun_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Speedboat_Minigun_F.jpg";
    crew = "I_EUDF35_D_Soldier_F";

    typicalCargo[]=
    {
        "I_EUDF35_D_Soldier_F"
    };
    
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\ships\boat_armed_01_ext_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\ships\boat_armed_01_int_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\ships\boat_armed_01_crows_EUDF35_arid_co.paa"
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
};

// SDV (Submersible)
class I_EUDF35_D_SDV_01_F : I_EUDF35_SDV_01_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_SDV_01_F.jpg";
    crew = "I_EUDF35_D_Diver_F";

    typicalCargo[]=
    {
        "I_EUDF35_D_Soldier_F",
        "I_EUDF35_D_Soldier_F"
    };

    textureList[]=
    {
        "EUDF35",
        1
    };
};
