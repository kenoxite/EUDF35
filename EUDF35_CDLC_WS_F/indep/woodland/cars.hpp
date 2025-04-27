// Zamak Flatbed
class I_Truck_02_flatbed_lxWS;
class I_EUDF35_Truck_02_flatbed_lxWS: I_Truck_02_flatbed_lxWS
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Truck_02_flatbed_lxWS.jpg";
    crew = "I_EUDF35_Soldier_F";
    typicalCargo[] = {"I_EUDF35_Soldier_F","I_EUDF35_Soldier_F"};

    hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo9"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_woodland_co.paa",
        // "\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_indp_CO.paa",
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_woodland_co.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_chassis_CO.paa",
        "lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
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
                // "\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_indp_CO.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_woodland_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_chassis_CO.paa",
                "lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
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
                // "\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_indp_CO.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_arctic_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_chassis_CO.paa",
                "lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
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
                // "\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_indp_CO.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_arid_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_chassis_CO.paa",
                "lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
            };
        };
    };
};

// Zamak Cargo
class I_Truck_02_cargo_lxWS;
class I_EUDF35_Truck_02_cargo_lxWS: I_Truck_02_cargo_lxWS
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Truck_02_cargo_lxWS.jpg";
    crew = "I_EUDF35_Soldier_F";
    typicalCargo[] = {"I_EUDF35_Soldier_F","I_EUDF35_Soldier_F"};

    hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo9"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kab_EUDF35_woodland_co.paa",
        // "\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_indp_CO.paa",
        "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_woodland_co.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_chassis_CO.paa",
        "lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
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
                // "\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_indp_CO.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_woodland_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_chassis_CO.paa",
                "lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
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
                // "\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_indp_CO.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_arctic_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_chassis_CO.paa",
                "lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
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
                // "\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_indp_CO.paa",
                "\EUDF35_vehicles_data_F\data\cars\truck_02_kuz_EUDF35_arid_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_chassis_CO.paa",
                "lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
            };
        };
    };
};
