// WY-55
class I_Heli_light_03_dynamicLoadout_F;
class I_EUDF35_WY_55_F : I_Heli_light_03_dynamicLoadout_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "WY-55 Wildcat";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_WY_55_F.jpg";
    crew = "I_EUDF35_HeliPilot_F";
    
    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_Soldier_F"
    };

    hiddenSelections[]=
    {
        "camo"
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
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\helicopters\heli_light_03_base_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\helicopters\heli_light_03_base_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\helicopters\heli_light_03_base_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\helicopters\heli_light_03_base_EUDF35_arid_co.paa"
            };
        };
    };
    
    class TransportBackpacks
    {
        bag_xx(B_Parachute,8);
        bag_xx(B_TacticalPack_EUDF35_woodland,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,6);
        item_xx(Medikit,1);
        item_xx(ToolKit,1);
        item_xx(ItemGPS,1);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellYellow,4);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_aco_pointer_F,2);
    };
};

// WY-55 Unarmed
class I_Heli_light_03_unarmed_F;
class I_EUDF35_WY_55_Unarmed_F : I_Heli_light_03_unarmed_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "WY-55 Wildcat (Unarmed)";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_WY_55_Unarmed_F.jpg";
    crew = "I_EUDF35_HeliPilot_F";
    
    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_Soldier_F"
    };

    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\helicopters\heli_light_03_base_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\helicopters\heli_light_03_base_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\helicopters\heli_light_03_base_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\helicopters\heli_light_03_base_EUDF35_arid_co.paa"
            };
        };
    };
    
    class TransportBackpacks
    {
        bag_xx(B_Parachute,8);
        bag_xx(B_TacticalPack_EUDF35_woodland,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,6);
        item_xx(Medikit,1);
        item_xx(ToolKit,1);
        item_xx(ItemGPS,1);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellYellow,4);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_aco_pointer_F,2);
    };
};

// CH-49 Mohawk
class I_Heli_Transport_02_F;
class I_EUDF35_Heli_Transport_02_F : I_Heli_Transport_02_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    displayName = "CH-49 Celt";
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Heli_Transport_02_F.jpg";
    crew = "I_EUDF35_HeliPilot_F";
    
    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_HeliCrew_F"
    };
    
    hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\helicopters\heli_transport_02_1_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\helicopters\heli_transport_02_2_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\helicopters\heli_transport_02_3_EUDF35_woodland_co.paa",
        "A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
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
                "\EUDF35_vehicles_data_F\data\helicopters\heli_transport_02_1_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\helicopters\heli_transport_02_2_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\helicopters\heli_transport_02_3_EUDF35_woodland_co.paa",
                "A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
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
                "\EUDF35_vehicles_data_F\data\helicopters\heli_transport_02_1_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\helicopters\heli_transport_02_2_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\helicopters\heli_transport_02_3_EUDF35_arctic_co.paa",
                "A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
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
                "\EUDF35_vehicles_data_F\data\helicopters\heli_transport_02_1_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\helicopters\heli_transport_02_2_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\helicopters\heli_transport_02_3_EUDF35_arid_co.paa",
                "A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
            };
        };
    };
    
    class TransportBackpacks
    {
        bag_xx(B_Parachute,16);
        bag_xx(B_TacticalPack_EUDF35_woodland,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,16);
        item_xx(Medikit,1);
        item_xx(ToolKit,1);
        item_xx(ItemGPS,1);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellGreen,4);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_aco_pointer_F,2);
    };
};

