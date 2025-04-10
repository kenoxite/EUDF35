// Assault Boat
class I_Boat_Transport_01_F;
class I_EUDF35_Assault_Boat_F : I_Boat_Transport_01_F{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Assault Boat";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Assault_Boat_F.jpg";
    crew = "I_EUDF35_Recon_F";
    
    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_Soldier_F"
    };

    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\ships\boat_transport_01_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\ships\boat_transport_01_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\ships\boat_transport_01_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\ships\boat_transport_01_EUDF35_arid_co.paa"
            };
        };
    };
    
    class TransportItems
    {
        item_xx(FirstAidKit,3);
    };
};

// Speedboat
class I_Boat_Armed_01_minigun_F;
class I_EUDF35_Speedboat_Minigun_F : I_Boat_Armed_01_minigun_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Speedboat Minigun";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Speedboat_Minigun_F.jpg";
    crew = "I_EUDF35_Soldier_F";
    
    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_Soldier_F"
    };

    hiddenSelections[] = {"Camo","Camo2","Camo3"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\ships\boat_armed_01_ext_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\ships\boat_armed_01_int_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\ships\boat_armed_01_crows_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\ships\boat_armed_01_ext_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\ships\boat_armed_01_int_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\ships\boat_armed_01_crows_EUDF35_woodland_co.paa"
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
                // "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_ext_co.paa",
                // "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_co.paa",
                // "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_crows_blufor_co.paa"
                "\EUDF35_vehicles_data_F\data\ships\boat_armed_01_ext_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\ships\boat_armed_01_int_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\ships\boat_armed_01_crows_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\ships\boat_armed_01_ext_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\ships\boat_armed_01_int_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\ships\boat_armed_01_crows_EUDF35_arid_co.paa"
            };
        };
    };
    
    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_EUDF35_woodland,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,12);
        item_xx(Medikit,1);
        item_xx(ToolKit,1);
    };
};

// SDV (Submersible)
class I_SDV_01_F;
class I_EUDF35_SDV_01_F : I_SDV_01_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_SDV_01_F.jpg";
    crew = "I_EUDF35_Diver_F";
    
    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_Soldier_F",
        "I_EUDF35_Soldier_F"
    };
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[]=
    {
        "\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"
    };

    textureList[]=
    {
        "EUDF35",
        1
    };
    
    class TransportItems
    {
        item_xx(FirstAidKit,2);
    };
};
