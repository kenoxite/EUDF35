// Recon Scout
class I_EUDF35_D_Recon_F : I_EUDF35_D_Recon_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_recon_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Recon_F.jpg";

    uniformClass = "U_I_CombatUniform_Recon_EUDF35_Arid_Shortsleeve";

    weapons[] = {
        "arifle_SPAR_01_EUDF35_arid_erco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_SPAR_01_EUDF35_arid_erco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };

    backpack="B_Carryall_ReconAmmo_EUDF35_arid_1";

    magazines[] = {
        mag_10(30Rnd_556x45_Stanag_green),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_10(30Rnd_556x45_Stanag_green),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
};
// Recon Scout (AT)
class I_EUDF35_D_Recon_LAT_F : I_EUDF35_D_Recon_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_recon_LAT_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Recon_LAT_F.jpg";

    RIFLEMAN_AT();

    uniformClass = "U_I_CombatUniform_Recon_EUDF35_Arid_Shortsleeve";

    weapons[] = {
        "arifle_SPAR_01_EUDF35_arid_erco_pointer_snds_F",
        "launch_NLAW_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_SPAR_01_EUDF35_arid_erco_pointer_snds_F",
        "launch_NLAW_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };

    backpack="B_Carryall_ReconLAT_EUDF35_arid_1";

    magazines[] = {
        mag_8(30Rnd_556x45_Stanag_green),
        mag_3(11Rnd_45ACP_Mag),
        mag_1(NLAW_F),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_8(30Rnd_556x45_Stanag_green),
        mag_3(11Rnd_45ACP_Mag),
        mag_1(NLAW_F),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
};
// Recon Autorifleman
class I_EUDF35_D_Recon_AR_F : I_EUDF35_D_Recon_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "Recon Autorifleman";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Recon_AR_F.jpg";

    RIFLEMAN_LMG();

    uniformClass = "U_I_CombatUniform_Recon_EUDF35_Arid_Tanktop";

    weapons[] = {
        "arifle_SPAR_02_EUDF35_arid_erco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_SPAR_02_EUDF35_arid_erco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };

    backpack="B_Carryall_ReconAR_EUDF35_arid_1";

    magazines[] = {
        mag_3(150Rnd_556x45_Drum_Mag_F),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_3(150Rnd_556x45_Drum_Mag_F),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
};
// Recon Grenadier
class I_EUDF35_D_Recon_GL_F : I_EUDF35_D_Recon_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "Recon Grenadier";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Recon_GL_F.jpg";

    RIFLEMAN_GL();
    
    uniformClass = "U_I_CombatUniform_Recon_EUDF35_Arid_Shortsleeve";

    weapons[] = {
        "arifle_SPAR_01_GL_khk_EUDF35_arid_erco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_SPAR_01_GL_khk_EUDF35_arid_erco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };

    backpack = "B_Carryall_ReconGL_EUDF35_arid_1";

    magazines[] = {
        mag_8(30Rnd_556x45_Stanag_green),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_8(30Rnd_556x45_Stanag_green),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
};
// Recon JTAC
class I_EUDF35_D_Recon_JTAC_F : I_EUDF35_D_Recon_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_B_recon_JTAC_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Recon_JTAC_F.jpg";

    RIFLEMAN_SPECOP();
    
    uniformClass = "U_I_CombatUniform_Recon_EUDF35_Arid";

    weapons[] = {
        "arifle_SPAR_01_GL_khk_EUDF35_arid_erco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put",
        "Laserdesignator"
        };
    respawnWeapons[] = {
        "arifle_SPAR_01_GL_khk_EUDF35_arid_erco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put",
        "Laserdesignator"
        };

    backpack = "B_Carryall_ReconGL_EUDF35_arid_1";

    magazines[] = {
        mag_8(30Rnd_556x45_Stanag_green),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue),
        mag_1(Laserbatteries)
        };
    respawnMagazines[] = {
        mag_8(30Rnd_556x45_Stanag_green),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue),
        mag_1(Laserbatteries)
        };
};
// Recon Medic
class I_EUDF35_D_Recon_Medic_F : I_EUDF35_D_Recon_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_recon_medic_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Recon_Medic_F.jpg";

    RIFLEMAN_MEDIC();

    uniformClass = "U_I_CombatUniform_Recon_EUDF35_Arid_Shortsleeve";

    weapons[] = {
        "arifle_SPAR_01_EUDF35_arid_erco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_SPAR_01_EUDF35_arid_erco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };

    backpack = "B_Carryall_Medic_EUDF35_arid_1";

    magazines[] = {
        mag_8(30Rnd_556x45_Stanag_green),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_8(30Rnd_556x45_Stanag_green),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
};
// Recon Marksman
class I_EUDF35_D_Recon_M_F : I_EUDF35_D_Recon_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_recon_M_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Recon_M_F.jpg";

    RIFLEMAN_MARKSMAN();
    
    uniformClass = "U_I_CombatUniform_Recon_EUDF35_Arid";

    weapons[] = {
        "arifle_SPAR_03_khk_EUDF35_arid_dms_pointer_snds_bipod_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_SPAR_03_khk_EUDF35_arid_dms_pointer_snds_bipod_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };

    backpack="B_Carryall_ReconAmmoLight_EUDF35_arid_1";

    magazines[] = {
        mag_10(20Rnd_762x51_Mag),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_10(20Rnd_762x51_Mag),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
};
// Recon Explosives Specialist
class I_EUDF35_D_Recon_Exp_F : I_EUDF35_D_Recon_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_recon_exp_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Recon_Exp_F.jpg";

    RIFLEMAN_DEMO();

    uniformClass = "U_I_CombatUniform_Recon_EUDF35_Arid_Tanktop";

    weapons[] = {
        "arifle_SPAR_01_EUDF35_arid_erco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_SPAR_01_EUDF35_arid_erco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };

    backpack = "B_Carryall_ReconExp_EUDF35_arid_1";

    magazines[] = {
        mag_6(30Rnd_556x45_Stanag_green),
        mag_3(11Rnd_45ACP_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_556x45_Stanag_green),
        mag_3(11Rnd_45ACP_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
};
// Recon Team Leader
class I_EUDF35_D_Recon_TL_F : I_EUDF35_D_Recon_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_recon_TL_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Recon_TL_F.jpg";

    RIFLEMAN_LEADER();
    
    uniformClass = "U_I_CombatUniform_Recon_EUDF35_Arid_Shortsleeve";

    weapons[] = {
        "arifle_SPAR_01_EUDF35_arid_erco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Rangefinder",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_SPAR_01_EUDF35_arid_erco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Rangefinder",
        "Throw",
        "Put"
        };

    backpack="B_Carryall_ReconAmmo_EUDF35_arid_1";

    magazines[] = {
        mag_8(30Rnd_556x45_Stanag_green),
        mag_2(30Rnd_556x45_Stanag_Tracer_Green),
        mag_2(11Rnd_45ACP_Mag),
        mag_1(Laserbatteries),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_1(SmokeShellYellow),
        mag_1(SmokeShellOrange),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_8(30Rnd_556x45_Stanag_green),
        mag_2(30Rnd_556x45_Stanag_Tracer_Green),
        mag_2(11Rnd_45ACP_Mag),
        mag_1(Laserbatteries),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_1(SmokeShellYellow),
        mag_1(SmokeShellOrange),
        mag_2(Chemlight_blue)
        };

};
// Recon Designator Operator
class I_EUDF35_D_Recon_Designator_F : I_EUDF35_D_Recon_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="Recon Designator Operator";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Recon_Designator_F.jpg";
    uavHacker=1;
    
    uniformClass = "U_I_CombatUniform_Recon_EUDF35_Arid_Shortsleeve";

    linkedItems[] = 
    {
        "V_Chestrig_EUDF35_arid_1",
        "H_Cap_EUDF35_arid_1_hs",
        "G_Combat",
        "ItemMap",
        "I_UavTerminal",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
    respawnlinkedItems[] = 
    {
        "V_Chestrig_EUDF35_arid",
        "H_Cap_EUDF35_arid_1_hs",
        "G_Combat",
        "ItemMap",
        "I_UavTerminal",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };

    backpack = "I_EUDF35_D_Static_Designator_01_weapon_F";

    weapons[] = {
        "arifle_SPAR_01_EUDF35_arid_erco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_SPAR_01_EUDF35_arid_erco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_10(30Rnd_556x45_Stanag_green),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_10(30Rnd_556x45_Stanag_green),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };

};

// Recon UAV Operator
class I_EUDF35_D_Recon_UAV_F: I_EUDF35_D_Recon_Designator_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="Recon UAV Operator";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Recon_UAV_F.jpg";

    backpack = "I_EUDF35_D_UAV_01_backpack_F";
};

// Recon Sharpshooter
class I_EUDF35_D_Recon_Sharpshooter_F : I_EUDF35_D_Recon_M_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_A3_cfgVehicles_B_Recon_Sharpshooter_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_Recon_Sharpshooter_F.jpg";
    DLC="Mark";

    uniformClass = "U_I_CombatUniform_Recon_EUDF35_Arid";

    weapons[] = {
        "srifle_DMR_03_arid_ams_pointer_snds_bipod_F",
        "hgun_Pistol_heavy_01_F",
        "Rangefinder",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "srifle_DMR_03_arid_ams_pointer_snds_bipod_F",
        "hgun_Pistol_heavy_01_F",
        "Rangefinder",
        "Throw",
        "Put"
        };

    backpack="B_Carryall_ReconAmmoLight_EUDF35_arid_1";

    magazines[] = {
        mag_5(20Rnd_762x51_Mag),
        mag_3(11Rnd_45ACP_Mag),
        mag_1(Laserbatteries),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_5(20Rnd_762x51_Mag),
        mag_3(11Rnd_45ACP_Mag),
        mag_1(Laserbatteries),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
};
