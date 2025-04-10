
// Quadbike
class I_EUDF35_D_Quad_Bike_F : I_EUDF35_Quad_Bike_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Quad_Bike_F.jpg";
    crew = "I_EUDF35_D_Soldier_F";

    hiddenSelectionsTextures[] =
    {
        "\a3\soft_f\quadbike_01\data\quadbike_01_co.paa",
        "\a3\soft_f\quadbike_01\data\quadbike_01_wheel_co.paa"
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

// Strider
class I_EUDF35_D_Strider_F : I_EUDF35_Strider_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Strider_F.jpg";
    crew = "I_EUDF35_D_Soldier_F";

    typicalCargo[]=
    {
        "I_EUDF35_D_Soldier_F"
    };

    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\mrap_03_ext_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arid_co.paa"
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
        weap_xx(launch_MRAWS_sand_F,1);
    };
};

class I_EUDF35_D_Strider_GMG_F : I_EUDF35_Strider_GMG_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Strider_GMG_F.jpg";
    crew = "I_EUDF35_D_Soldier_F";

    typicalCargo[]=
    {
        "I_EUDF35_D_Soldier_F"
    };
    
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\mrap_03_ext_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arid_co.paa"
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
        weap_xx(launch_MRAWS_sand_F,1);
    };
};

class I_EUDF35_D_Strider_HMG_F : I_EUDF35_Strider_HMG_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Strider_HMG_F.jpg";
    crew = "I_EUDF35_D_Soldier_F";    

    typicalCargo[]=
    {
        "I_EUDF35_D_Soldier_F"
    };
    
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\mrap_03_ext_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\turrets\turret_EUDF35_arid_co.paa"
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
        weap_xx(launch_MRAWS_sand_F,1);
    };
};


// Zamak Transport
class I_EUDF35_D_Zamak_Transport_F : I_EUDF35_Zamak_Transport_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Zamak_Transport_F.jpg";
    crew = "I_EUDF35_D_Soldier_F";

    typicalCargo[]=
    {
        "I_EUDF35_D_Soldier_F",
        "I_EUDF35_D_Soldier_F",
        "I_EUDF35_D_Soldier_F"
    };

    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_arid_co.paa"
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

// Zamak Transport (Covered)
class I_EUDF35_D_Zamak_Covered_F : I_EUDF35_Zamak_Covered_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Zamak_Covered_F.jpg";
    crew = "I_EUDF35_D_Soldier_F";

    typicalCargo[]=
    {
        "I_EUDF35_D_Soldier_F",
        "I_EUDF35_D_Soldier_F",
        "I_EUDF35_D_Soldier_F"
    };
    
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_arid_co.paa"
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

// Zamak Fuel
class I_EUDF35_D_Zamak_Fuel_F : I_EUDF35_Zamak_Fuel_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Zamak_Fuel_F.jpg";
    crew = "I_EUDF35_D_Soldier_F";

    textureList[]=
    {
        "EUDF35_WDL",
        0,
        "EUDF35_WDL",
        0,
        "EUDF35_DES",
        1
    };
    
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\truck_02_fuel_EUDF35_arid_co.paa"
    };
    
    class TransportBackpacks
    {
        bag_xx(B_TacticalPack_EUDF35_arid,1);
    };
};

// Zamak Ammo
class I_EUDF35_D_Zamak_Ammo_F : I_EUDF35_Zamak_Ammo_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Zamak_Ammo_F.jpg";
    crew = "I_EUDF35_D_Soldier_F";

    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\truck_02_repair_EUDF35_arid_co.paa"
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

// Zamak Repair
class I_EUDF35_D_Zamak_Repair_F : I_EUDF35_Zamak_Repair_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Zamak_Repair_F.jpg";
    crew = "I_EUDF35_D_Soldier_F";

    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\truck_02_repair_EUDF35_arid_co.paa"
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

// Zamak Medical
class I_EUDF35_D_Zamak_Medical_F : I_EUDF35_Zamak_Medical_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Zamak_Medical_F.jpg";
    crew = "I_EUDF35_D_Soldier_F";
    
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_arid_co.paa"
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

// Prowler (Unarmed)
class I_EUDF35_D_LSV_01_unarmed_F: I_EUDF35_LSV_01_unarmed_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_LSV_01_unarmed_F.jpg";
    crew = "I_EUDF35_D_Recon_F";

    typicalCargo[]=
    {
        "I_EUDF35_D_Soldier_F"
    };
    
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_01_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_02_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_03_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_Adds_EUDF35_arid_co.paa"
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
        bag_xx(B_Carryall_EUDF35_arid,1);
    };
    class TransportWeapons
    {
        weap_xx(arifle_SPAR_01_EUDF35_arid_erco_pointer_snds_F,2);
        weap_xx(launch_NLAW_F,1);
    };

};
// Prowler (HMG)
class I_EUDF35_D_LSV_01_armed_F: I_EUDF35_LSV_01_armed_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_LSV_01_armed_F.jpg";
    crew = "I_EUDF35_D_DA_F";

    typicalCargo[]=
    {
        "I_EUDF35_D_Soldier_F"
    };
    
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_01_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_02_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_03_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_Adds_EUDF35_arid_co.paa"
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
        bag_xx(B_AssaultPack_EUDF35_arid,1);
    };
    class TransportWeapons
    {
        weap_xx(arifle_SPAR_01_EUDF35_arid_erco_pointer_snds_F,2);
        weap_xx(launch_NLAW_F,1);
    };
};
// Prowler (AT)
class I_EUDF35_D_LSV_01_AT_F: I_EUDF35_LSV_01_AT_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_D_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_LSV_01_AT_F.jpg";
    crew = "I_EUDF35_D_DA_F";

    typicalCargo[]=
    {
        "I_EUDF35_D_Soldier_F"
    };
    
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_01_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_02_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_03_EUDF35_arid_co.paa",
        "\EUDF35_vehicles_data_F\data\cars\nato_lsv_Adds_EUDF35_arid_co.paa",
        "\a3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
        "\a3\weapons_f_beta\launchers\titan\data\tubem_co.paa"
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
        bag_xx(B_AssaultPack_EUDF35_arid,1);
    };
    class TransportWeapons
    {
        weap_xx(arifle_SPAR_01_EUDF35_arid_erco_pointer_snds_F,2);
        weap_xx(launch_NLAW_F,1);
    };
    
};
