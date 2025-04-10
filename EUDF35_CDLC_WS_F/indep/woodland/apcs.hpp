// AMV-7 Marshall (ATGM) (Patria)
class B_APC_Wheeled_01_atgm_lxWS;
class I_EUDF35_APC_Wheeled_01_atgm_lxWS: B_APC_Wheeled_01_atgm_lxWS
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_F";
    displayName = "AMV-7 Patria (ATGM)";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_APC_Wheeled_01_atgm_lxWS.jpg";
    crew = "I_EUDF35_Crew_F";

    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_Soldier_F"
    };

    hiddenSelections[] = {"camo1","camo2","camo3","CamoNet","CamoSlat","camo4"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_base_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_adds_EUDF35_woodland_co.paa",
        "\EUDF35_CDLC_WS_data_F\data\apcs\apc_wheeled_01_tows_EUDF35_woodland_co.paa",
        "A3\Armor_F\Data\camonet_nato_green_co.paa",
        "A3\armor_f\data\cage_olive_co.paa",
        "\EUDF35_CDLC_WS_data_F\data\apcs\APC_Wheeled_01_lxws_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_base_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_adds_EUDF35_woodland_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\apc_wheeled_01_tows_EUDF35_woodland_co.paa",
                "A3\Armor_F\Data\camonet_nato_green_co.paa",
                "A3\armor_f\data\cage_olive_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\APC_Wheeled_01_lxws_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_base_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_adds_EUDF35_arctic_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\apc_wheeled_01_tows_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\camonet_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\cage_EUDF35_arctic_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\APC_Wheeled_01_lxws_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_base_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_adds_EUDF35_arid_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\apc_wheeled_01_tows_EUDF35_arid_co.paa",
                "A3\Armor_F\Data\camonet_nato_desert_co.paa",
                "A3\armor_f\data\cage_sand_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\APC_Wheeled_01_lxws_EUDF35_arid_co.paa"
            };
        };
    };

    animationList[] = {
        "showBags",0,
        "showCamonetHull",0.5,
        "showCamonetCannon",0.5,
        "showCamonetTurret",0.5,
        "showSLATHull",0.5,
        "showSLATTurret",0.5
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
        mag_xx(30Rnd_65x39_caseless_msbs_mag,24);
        mag_xx(200Rnd_65x39_cased_Box,10);
        mag_xx(HandGrenade,6);
        mag_xx(MiniGrenade,6);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
        mag_xx(1Rnd_SmokePurple_Grenade_shell,3);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellGreen,8);
        mag_xx(SmokeShellPurple,8);
        mag_xx(MRAWS_HEAT_F,6);
        mag_xx(Titan_AT,2);
        mag_xx(Titan_AP,2);
        mag_xx(Titan_AA,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_aco_pointer_F,2);
        weap_xx(LMG_Mk200_EUDF35_erco_pointer_F,1);
        weap_xx(launch_MRAWS_green_F,1);
    };
};

// AMV-7 Marshall (Mortar) (Patria)
class B_APC_Wheeled_01_mortar_lxWS;
class I_EUDF35_APC_Wheeled_01_mortar_lxWS: B_APC_Wheeled_01_mortar_lxWS
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_F";
    displayName = "AMV-7 Patria (Mortar)";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_APC_Wheeled_01_mortar_lxWS.jpg";
    crew = "I_EUDF35_Crew_F";

    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_Soldier_F"
    };

    hiddenSelections[] = {"camo1","camo2","camo3","CamoNet","CamoSlat","camo4"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_base_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_adds_EUDF35_woodland_co.paa",
        "\EUDF35_CDLC_WS_data_F\data\apcs\apc_wheeled_01_tows_EUDF35_woodland_co.paa",
        "A3\Armor_F\Data\camonet_nato_green_co.paa",
        "A3\armor_f\data\cage_olive_co.paa",
        "\EUDF35_CDLC_WS_data_F\data\apcs\APC_Wheeled_01_lxws_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_base_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_adds_EUDF35_woodland_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\apc_wheeled_01_tows_EUDF35_woodland_co.paa",
                "A3\Armor_F\Data\camonet_nato_green_co.paa",
                "A3\armor_f\data\cage_olive_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\APC_Wheeled_01_lxws_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_base_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_adds_EUDF35_arctic_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\apc_wheeled_01_tows_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\camonet_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\cage_EUDF35_arctic_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\APC_Wheeled_01_lxws_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_base_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_adds_EUDF35_arid_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\apc_wheeled_01_tows_EUDF35_arid_co.paa",
                "A3\Armor_F\Data\camonet_nato_desert_co.paa",
                "A3\armor_f\data\cage_sand_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\APC_Wheeled_01_lxws_EUDF35_arid_co.paa"
            };
        };
    };

    animationList[] = {
        "showBags",0,
        "showCamonetHull",0.5,
        "showCamonetCannon",0.5,
        "showCamonetTurret",0.5,
        "showSLATHull",0.5,
        "showSLATTurret",0.5
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
        mag_xx(30Rnd_65x39_caseless_msbs_mag,24);
        mag_xx(200Rnd_65x39_cased_Box,10);
        mag_xx(HandGrenade,6);
        mag_xx(MiniGrenade,6);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
        mag_xx(1Rnd_SmokePurple_Grenade_shell,3);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellGreen,8);
        mag_xx(SmokeShellPurple,8);
        mag_xx(MRAWS_HEAT_F,6);
        mag_xx(Titan_AT,2);
        mag_xx(Titan_AP,2);
        mag_xx(Titan_AA,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_aco_pointer_F,2);
        weap_xx(LMG_Mk200_EUDF35_erco_pointer_F,1);
        weap_xx(launch_MRAWS_green_F,1);
    };
};

// AMV-7 Marshall (CV) (Patria)
class B_APC_Wheeled_01_command_lxWS;
class I_EUDF35_APC_Wheeled_01_command_lxWS: B_APC_Wheeled_01_command_lxWS
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_F";
    displayName = "AMV-7 Patria (CV)";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_APC_Wheeled_01_command_lxWS.jpg";
    crew = "I_EUDF35_Crew_F";

    forceInGarage=0;

    typicalCargo[]=
    {
        "I_EUDF35_Soldier_F"
    };

    hiddenSelections[] = {"camo1","camo2","camo3","CamoNet","CamoSlat","camo4"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_base_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_adds_EUDF35_woodland_co.paa",
        "\EUDF35_CDLC_WS_data_F\data\apcs\apc_wheeled_01_tows_EUDF35_woodland_co.paa",
        "A3\Armor_F\Data\camonet_nato_green_co.paa",
        "A3\armor_f\data\cage_olive_co.paa",
        "\EUDF35_CDLC_WS_data_F\data\apcs\APC_Wheeled_01_lxws_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_base_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_adds_EUDF35_woodland_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\apc_wheeled_01_tows_EUDF35_woodland_co.paa",
                "A3\Armor_F\Data\camonet_nato_green_co.paa",
                "A3\armor_f\data\cage_olive_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\APC_Wheeled_01_lxws_EUDF35_woodland_co.paa"
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
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_base_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_adds_EUDF35_arctic_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\apc_wheeled_01_tows_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\camonet_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\tanks\cage_EUDF35_arctic_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\APC_Wheeled_01_lxws_EUDF35_arctic_co.paa"
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
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_base_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\apcs\apc_wheeled_01_adds_EUDF35_arid_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\apc_wheeled_01_tows_EUDF35_arid_co.paa",
                "A3\Armor_F\Data\camonet_nato_desert_co.paa",
                "A3\armor_f\data\cage_sand_co.paa",
                "\EUDF35_CDLC_WS_data_F\data\apcs\APC_Wheeled_01_lxws_EUDF35_arid_co.paa"
            };
        };
    };

    animationList[] = {
        "showBags",0,
        "showCamonetHull",0.5,
        "showCamonetCannon",0.5,
        "showCamonetTurret",0.5,
        "showSLATHull",0.5,
        "showSLATTurret",0.5
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
        mag_xx(30Rnd_65x39_caseless_msbs_mag,24);
        mag_xx(200Rnd_65x39_cased_Box,10);
        mag_xx(HandGrenade,6);
        mag_xx(MiniGrenade,6);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
        mag_xx(1Rnd_SmokePurple_Grenade_shell,3);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellGreen,8);
        mag_xx(SmokeShellPurple,8);
        mag_xx(MRAWS_HEAT_F,6);
        mag_xx(Titan_AT,2);
        mag_xx(Titan_AP,2);
        mag_xx(Titan_AA,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_EUDF35_aco_pointer_F,2);
        weap_xx(LMG_Mk200_EUDF35_erco_pointer_F,1);
        weap_xx(launch_MRAWS_green_F,1);
    };
};
