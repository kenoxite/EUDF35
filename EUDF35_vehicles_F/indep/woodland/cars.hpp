
// Quadbike
class B_T_Quadbike_01_F;
class I_EUDF35_Quad_Bike_F : B_T_Quadbike_01_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Quad Bike";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Quad_Bike_F.jpg";
    crew = "I_EUDF35_Soldier_F";
    
    forceInGarage=0;

    hiddenSelections[]=
    {
        "Camo1",
        "Camo2"
    };

    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_wheel_olive_CO.paa"
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
                "\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_olive_CO.paa",
                "\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_wheel_olive_CO.paa"
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
                "\A3\Soft_F_Beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\quadbike_01_wheel_EUDF35_arctic_co.paa"
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

            hiddenSelectionsTextures[] =
            {
                "\a3\soft_f\quadbike_01\data\quadbike_01_co.paa",
                "\a3\soft_f\quadbike_01\data\quadbike_01_wheel_co.paa"
            };
        };
    };

    class VehicleTransport
    {
        class Cargo
        {
            parachuteClass="B_Parachute_02_F";
            parachuteHeightLimit=5;
            canBeTransported=1;
            dimensions[]=
            {
                "BBox_1_1_pos",
                "BBox_1_2_pos"
            };
        };
    };
    transportSoldier=0;

    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_EUDF35_woodland,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,2);
        item_xx(Medikit,1);
        item_xx(ToolKit,1);
    };

    class CargoTurret;
    class Turrets
    {
        class CargoTurret_01: CargoTurret
        {
            gunnerAction="passenger_inside_3";
            gunnerCompartments="Compartment1";
            gunnerName="$STR_A3_TURRETS_CARGOTURRET_F";
            memoryPointsGetInGunner="pos cargo";
            memoryPointsGetInGunnerDir="pos cargo dir";
            gunnerGetOutAction="GetOutBoat";
            proxyIndex=1;
            isPersonTurret=1;
            ejectDeadGunner=0;
            maxHorizontalRotSpeed = 1.6;
            maxVerticalRotSpeed = 1.6;
            class dynamicViewLimits
            {
            };
            class TurnOut
            {
                limitsArrayTop[]=
                {
                    {28.5, -72.6},
                    {33.5, -28.6},
                    {32.7, 5.3},
                    {29.1, 51.2},
                    {25.5, 92.5}
                };
                limitsArrayBottom[]=
                {
                    {-40.7, -99},
                    {-44.5, -60.5},
                    {11.6, -27.4},
                    {20.8, 4.3},
                    {-0.3, 33.8},
                    {-50.2, 62.6},
                    {-49.2, 84.3}
                };
            };
            class TurnIn: TurnOut
            {
            };
        };
    };
};

// Strider
class I_MRAP_03_F;
class I_EUDF35_Strider_F : I_MRAP_03_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "Fennek";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Strider_F.jpg";
    crew = "I_EUDF35_Soldier_F";
    
    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_Soldier_F"
    };

    hiddenSelections[]=
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\mrap_03_ext_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\mrap_03_ext_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\mrap_03_ext_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\mrap_03_ext_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arid_co.paa"
            };
        };
    };
    
    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_EUDF35_woodland,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,10);
        item_xx(Medikit,1);
        item_xx(ToolKit,1);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_msbs_mag,16);
        mag_xx(200Rnd_65x39_cased_Box,8);
        mag_xx(HandGrenade,10);
        mag_xx(SmokeShell,6);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(16Rnd_9x21_Mag,12);
        mag_xx(MRAWS_HEAT_F,4);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_aco_pointer_F,2);
        weap_xx(launch_MRAWS_green_F,1);
    };
};

class I_MRAP_03_gmg_F;
class I_EUDF35_Strider_GMG_F : I_MRAP_03_gmg_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "Fennek GMG";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Strider_GMG_F.jpg";
    crew = "I_EUDF35_Soldier_F";
    
    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_Soldier_F"
    };

    hiddenSelections[]=
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\mrap_03_ext_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\mrap_03_ext_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\mrap_03_ext_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\mrap_03_ext_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arid_co.paa"
            };
        };
    };
    
    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_EUDF35_woodland,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,10);
        item_xx(Medikit,1);
        item_xx(ToolKit,1);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_msbs_mag,16);
        mag_xx(200Rnd_65x39_cased_Box,8);
        mag_xx(HandGrenade,10);
        mag_xx(SmokeShell,6);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(16Rnd_9x21_Mag,12);
        mag_xx(MRAWS_HEAT_F,4);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_aco_pointer_F,2);
        weap_xx(launch_MRAWS_green_F,1);
    };
};

class I_MRAP_03_hmg_F;
class I_EUDF35_Strider_HMG_F : I_MRAP_03_hmg_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "Fennek HMG";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Strider_HMG_F.jpg";
    crew = "I_EUDF35_Soldier_F";
    
    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_Soldier_F"
    };

    hiddenSelections[]=
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\mrap_03_ext_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\mrap_03_ext_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\mrap_03_ext_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\mrap_03_ext_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arid_co.paa"
            };
        };
    };
    
    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_EUDF35_woodland,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,10);
        item_xx(Medikit,1);
        item_xx(ToolKit,1);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_msbs_mag,16);
        mag_xx(200Rnd_65x39_cased_Box,8);
        mag_xx(HandGrenade,10);
        mag_xx(SmokeShell,6);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(16Rnd_9x21_Mag,12);
        mag_xx(MRAWS_HEAT_F,4);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_aco_pointer_F,2);
        weap_xx(launch_MRAWS_green_F,1);
    };
};


// Zamak Transport
class I_Truck_02_transport_F;
class I_EUDF35_Zamak_Transport_F : I_Truck_02_transport_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Zamak Transport";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Zamak_Transport_F.jpg";
    crew = "I_EUDF35_Soldier_F";
    
    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_Soldier_F",
        "I_EUDF35_Soldier_F",
        "I_EUDF35_Soldier_F"
    };

    hiddenSelections[]=
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_arid_co.paa"
            };
        };
    };
    
    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_EUDF35_woodland,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,10);
        item_xx(ToolKit,1);
    };
};

// Zamak Transport (Covered)
class I_Truck_02_covered_F;
class I_EUDF35_Zamak_Covered_F : I_Truck_02_covered_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Zamak Transport (Covered)";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Zamak_Covered_F.jpg";
    crew = "I_EUDF35_Soldier_F";
    
    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_Soldier_F",
        "I_EUDF35_Soldier_F",
        "I_EUDF35_Soldier_F"
    };

    hiddenSelections[]=
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_arid_co.paa"
            };
        };
    };
    
    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_EUDF35_woodland,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,10);
        item_xx(ToolKit,1);
    };
};

// Zamak Fuel
class I_Truck_02_fuel_F;
class I_EUDF35_Zamak_Fuel_F : I_Truck_02_fuel_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Zamak Fuel";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Zamak_Fuel_F.jpg";
    crew = "I_EUDF35_Soldier_F";
    
    forceInGarage=0;

    hiddenSelections[]=
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\truck_02_fuel_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_fuel_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_fuel_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_arid_co.paa"
            };
        };
    };
    
    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_EUDF35_woodland,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,10);
        item_xx(ToolKit,1);
    };
};

// Zamak Ammo
class I_Truck_02_ammo_F;
class I_EUDF35_Zamak_Ammo_F : I_Truck_02_Ammo_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Zamak Ammo";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Zamak_Ammo_F.jpg";
    crew = "I_EUDF35_Soldier_F";
    
    forceInGarage=0;

    hiddenSelections[]=
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\truck_02_repair_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_repair_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_repair_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_arid_co.paa"
            };
        };
    };
    
    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_EUDF35_woodland,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,4);
        item_xx(ToolKit,1);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_msbs_mag,48);
        mag_xx(200Rnd_65x39_cased_Box,24);
        mag_xx(HandGrenade,12);
        mag_xx(MiniGrenade,12);
        mag_xx(1Rnd_HE_Grenade_shell,12);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
        mag_xx(1Rnd_SmokePurple_Grenade_shell,3);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellGreen,8);
        mag_xx(SmokeShellPurple,8);
        mag_xx(MRAWS_HEAT_F,12);
        mag_xx(Titan_AT,4);
        mag_xx(Titan_AP,4);
        mag_xx(Titan_AA,4);
    };
};

// Zamak Repair
class I_Truck_02_box_F;
class I_EUDF35_Zamak_Repair_F : I_Truck_02_Box_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Zamak Repair";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Zamak_Repair_F.jpg";
    crew = "I_EUDF35_Soldier_F";
    
    forceInGarage=0;

    hiddenSelections[]=
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\truck_02_repair_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_repair_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_repair_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_arid_co.paa"
            };
        };
    };

    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_EUDF35_woodland,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,4);
        item_xx(ToolKit,3);
    };
};

// Zamak Medical
class I_Truck_02_medical_F;
class I_EUDF35_Zamak_Medical_F : I_Truck_02_Medical_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Zamak Medical";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Zamak_Medical_F.jpg";
    crew = "I_EUDF35_Soldier_F";
    
    forceInGarage=0;

    hiddenSelections[]=
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_arid_co.paa"
            };
        };
    };

    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_EUDF35_woodland,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,10);
        item_xx(Medikit,3);
        item_xx(ToolKit,1);
    };
};

// Prowler (Unarmed)
class B_T_LSV_01_unarmed_F;
class I_EUDF35_LSV_01_unarmed_F: B_T_LSV_01_unarmed_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_LSV_01_unarmed_F.jpg";
    crew = "I_EUDF35_Recon_F";
    
    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_Soldier_F"
    };

    hiddenSelections[]=
    {
        "Camo_1",
        "Camo_2",
        "Camo_3",
        "Camo_4"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_01_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_02_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_03_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_Adds_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_01_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_02_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_03_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_Adds_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_01_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_02_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_03_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_Adds_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_01_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_02_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_03_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_Adds_EUDF35_arid_co.paa"
            };
        };
    };
    
    
    class TransportBackpacks
    {
        bag_xx(B_Carryall_EUDF35_woodland_1,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,10);
        item_xx(Medikit,1);
        item_xx(ToolKit,1);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_556x45_Stanag_green,16);
        mag_xx(150Rnd_556x45_Drum_Mag_F,6);
        mag_xx(HandGrenade,10);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(11Rnd_45ACP_Mag,12);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(NLAW_F,2);
        mag_xx(Laserbatteries,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_SPAR_01_EUDF35_erco_pointer_snds_F,2);
        weap_xx(launch_NLAW_F,1);
    };

};
// Prowler (HMG)
class B_T_LSV_01_armed_F;
class I_EUDF35_LSV_01_armed_F: B_T_LSV_01_armed_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_LSV_01_armed_F.jpg";
    crew = "I_EUDF35_DA_F";
    
    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_Soldier_F"
    };

    hiddenSelections[]=
    {
        "Camo_1",
        "Camo_2",
        "Camo_3",
        "Camo_4"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_01_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_02_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_03_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_Adds_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_01_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_02_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_03_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_Adds_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_01_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_02_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_03_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_Adds_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_01_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_02_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_03_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_Adds_EUDF35_arid_co.paa"
            };
        };
    };
    
    class TransportBackpacks
    {
        bag_xx(B_AssaultPack_EUDF35_woodland_1,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,10);
        item_xx(Medikit,1);
        item_xx(ToolKit,1);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_556x45_Stanag_green,16);
        mag_xx(150Rnd_556x45_Drum_Mag_F,6);
        mag_xx(HandGrenade,10);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(11Rnd_45ACP_Mag,12);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(NLAW_F,2);
        mag_xx(Laserbatteries,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_SPAR_01_EUDF35_erco_pointer_snds_F,2);
        weap_xx(launch_NLAW_F,1);
    };
};
// Prowler (AT)
class B_T_LSV_01_AT_F;
class I_EUDF35_LSV_01_AT_F: B_T_LSV_01_AT_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_LSV_01_AT_F.jpg";
    crew = "I_EUDF35_DA_F";
    
    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_Soldier_F"
    };

    hiddenSelections[]=
    {
        "Camo_1",
        "Camo_2",
        "Camo_3",
        "Camo_4",
        "camo_launcher",
        "camo_tube"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_01_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_02_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_03_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_Adds_EUDF35_woodland_co.paa",
        "\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa",
        "\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_01_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_02_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_03_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_Adds_EUDF35_woodland_co.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_01_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_02_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_03_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_Adds_EUDF35_woodland_co.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa"
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
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_01_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_02_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_03_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\cars\nato_lsv_Adds_EUDF35_arid_co.paa",
                "\a3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
                "\a3\weapons_f_beta\launchers\titan\data\tubem_co.paa"
            };
        };
    };
    
    class TransportBackpacks
    {
        bag_xx(B_AssaultPack_EUDF35_woodland_1,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,10);
        item_xx(Medikit,1);
        item_xx(ToolKit,1);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_556x45_Stanag_green,16);
        mag_xx(150Rnd_556x45_Drum_Mag_F,6);
        mag_xx(HandGrenade,10);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(11Rnd_45ACP_Mag,12);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(NLAW_F,2);
        mag_xx(Laserbatteries,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_SPAR_01_EUDF35_erco_pointer_snds_F,2);
        weap_xx(launch_NLAW_F,1);
    };
    
};
