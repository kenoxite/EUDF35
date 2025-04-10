class I_EUDF35_Sniper_F : I_EUDF35_Sniper_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_sniper_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Sniper_F.jpg";
    
    // uniformClass = "U_I_EUDF35_GhillieSuit_Woodland";
    uniformClass = "U_I_FullGhillie_lsh";

    linkedItems[] = {
        "V_Chestrig_EUDF35_Woodland_1",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = {
        "V_Chestrig_EUDF35_Woodland_1",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    
    weapons[] = {
        "srifle_GM6_EUDF35_lrps_f",
        "hgun_Pistol_heavy_01_green_F",
        "Rangefinder",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "srifle_GM6_EUDF35_lrps_f",
        "hgun_Pistol_heavy_01_green_F",
        "Rangefinder",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_8(5Rnd_127x108_Mag),
        mag_3(11Rnd_45ACP_Mag),
        mag_1(Chemlight_yellow),
        mag_1(SmokeShell),
        mag_1(SmokeShellYellow),
        mag_2(MiniGrenade)
        };
    respawnMagazines[] = {
        mag_8(5Rnd_127x108_Mag),
        mag_3(11Rnd_45ACP_Mag),
        mag_1(Chemlight_yellow),
        mag_1(SmokeShell),
        mag_1(SmokeShellYellow),
        mag_2(MiniGrenade)
        };
};

class I_EUDF35_Spotter_F : I_EUDF35_Sniper_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_spotter_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Spotter_F.jpg";

    weapons[] = {
        "arifle_MSBS65_Mark_EUDF35_dms_pointer_snds_bipod_F",
        "hgun_Pistol_heavy_01_green_F",
        "Laserdesignator_03",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_Mark_EUDF35_dms_pointer_snds_bipod_F",
        "hgun_Pistol_heavy_01_green_F",
        "Laserdesignator_03",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(11Rnd_45ACP_Mag),
        mag_1(Laserbatteries),
        mag_1(Chemlight_yellow),
        mag_1(SmokeShell),
        mag_1(SmokeShellYellow),
        mag_2(MiniGrenade)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(11Rnd_45ACP_Mag),
        mag_1(Laserbatteries),
        mag_1(Chemlight_yellow),
        mag_1(SmokeShell),
        mag_1(SmokeShellYellow),
        mag_2(MiniGrenade)
        };
};
