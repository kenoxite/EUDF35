// Rifleman
class I_EUDF35_Soldier_F : I_EUDF35_Rifleman_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_A3_CfgVehicles_B_Soldier_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_F.jpg";
    
    role="Rifleman";

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    weapons[] = {
        "arifle_MSBS65_EUDF35_arco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_arco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_1(SmokeShell),
        mag_1(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_1(SmokeShell),
        mag_1(Chemlight_blue)
        };
};

// Rifleman (Light)
class I_EUDF35_Soldier_lite_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_lite_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_lite_F.jpg";

    SOLDIER_CAP();
    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_Cap_EUDF35_woodland_hs",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_Cap_EUDF35_woodland_hs",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    weapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_1(SmokeShell),
        mag_1(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_1(SmokeShell),
        mag_1(Chemlight_blue)
        };
};

// Crewman
class I_EUDF35_Crew_F : I_EUDF35_Rifleman_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_crew_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Crew_F.jpg";
    
    CREWMAN();

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = {
        "V_CarrierRigKBT_01_vest_EUDF35_Woodland",
        "H_HelmetCrew_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = {
        "V_CarrierRigKBT_01_vest_EUDF35_Woodland",
        "H_HelmetCrew_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    weapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };

};

// Engineer
class I_EUDF35_Engineer_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_engineer_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Engineer_F.jpg";
    
    RIFLEMAN_ENGI();

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    backpack = "B_TacticalPack_Engineer_EUDF35_woodland";

    weapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
};

// Explosives Specialist
class I_EUDF35_Soldier_Exp_F : I_EUDF35_Engineer_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_exp_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_Exp_F.jpg";
    
    RIFLEMAN_DEMO();
    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = {
        "V_CarrierRigKBT_01_heavy_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = {
        "V_CarrierRigKBT_01_heavy_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    
    backpack = "B_Carryall_Exp_EUDF35_woodland";

    class EventHandlers: EventHandlers {init = "";};
};

// Helicopter Pilot
class I_EUDF35_HeliPilot_F : I_EUDF35_Crew_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_helipilot_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_HeliPilot_F.jpg";

    PILOT();
    
    uniformClass = "U_I_EUDF35_HeliPilotCoveralls_Woodland";

    linkedItems[] = {
        "V_CarrierRigKBT_01_vest_EUDF35_Woodland",
        "H_PilotHelmetHeli_I_E",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = {
        "V_CarrierRigKBT_01_vest_EUDF35_Woodland",
        "H_PilotHelmetHeli_I_E",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    weapons[] = {
        "SMG_05_EUDF35_aco_pointer_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "SMG_05_EUDF35_aco_pointer_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_5(30Rnd_9x21_Mag_SMG_02),
        mag_2(Chemlight_blue),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_1(SmokeShellPurple),
        mag_1(SmokeShellOrange)
        };
    respawnMagazines[] = {
        mag_5(30Rnd_9x21_Mag_SMG_02),
        mag_2(Chemlight_blue),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_1(SmokeShellPurple),
        mag_1(SmokeShellOrange)
        };

};

// Helicopter Crew
class I_EUDF35_HeliCrew_F : I_EUDF35_HeliPilot_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_helicrew_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_HeliCrew_F.jpg";

    linkedItems[] = {
        "V_CarrierRigKBT_01_vest_EUDF35_Woodland",
        "H_CrewHelmetHeli_I_E",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = {
        "V_CarrierRigKBT_01_vest_EUDF35_Woodland",
        "H_CrewHelmetHeli_I_E",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    weapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };

};

// Pilot
class I_EUDF35_Pilot_F : I_EUDF35_Crew_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_pilot_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Pilot_F.jpg";

    PILOT();
    
    uniformClass = "U_I_pilotCoveralls";

    linkedItems[] = {
        "H_PilotHelmetFighter_B",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "H_PilotHelmetFighter_B",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    backpack = "B_Parachute";

    weapons[] = {
        "SMG_05_EUDF35_aco_pointer_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "SMG_05_EUDF35_aco_pointer_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_4(30Rnd_9x21_Mag_SMG_02),
        mag_1(Chemlight_blue),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue)
        };
    respawnMagazines[] = {
        mag_4(30Rnd_9x21_Mag_SMG_02),
        mag_2(Chemlight_blue),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_1(SmokeShellPurple),
        mag_1(SmokeShellOrange)
        };

};

// Combat Medic
class I_EUDF35_Medic_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_medic_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Medic_F.jpg";

    RIFLEMAN_MEDIC();

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_heavy_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_heavy_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };


    backpack = "B_TacticalPack_Medic_EUDF35_woodland";

    weapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
};

// Ammo bearer
class I_EUDF35_Soldier_A_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_A_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_A_F.jpg";

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    backpack = "B_Carryall_Ammo_EUDF35_woodland";

    weapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
};

// AA Specialist
class I_EUDF35_Soldier_AA_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_AA_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_AA_F.jpg";
    
    RIFLEMAN_AA();

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    backpack = "B_TacticalPack_AA_EUDF35_woodland";

    weapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "launch_B_Titan_olive_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "launch_B_Titan_olive_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_1(Titan_AA),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_1(Titan_AA),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
};

// Assistant AA Specialist
class I_EUDF35_Soldier_AAA_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_AAA_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_AAA_F.jpg";
    
    role="Assistant";

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    backpack = "B_Carryall_AAA_EUDF35_woodland";

    weapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
};

// Assistant Autorifleman
class I_EUDF35_Soldier_AAR_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_O_SOLDIERU_AAR_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_AAR_F.jpg";
    
    role="Assistant";

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    backpack = "B_TacticalPack_AAR_EUDF35_woodland";

    weapons[] = {
        "arifle_MSBS65_EUDF35_arco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Rangefinder",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_arco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Rangefinder",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };

};

// Assistant MG
class I_EUDF35_Soldier_AMG_F : I_EUDF35_Soldier_AAR_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="Asst. Heavy Gunner";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_AMG_F.jpg";

    backpack = "B_TacticalPack_AMG_EUDF35_woodland";

};

// Assistant AT Specialist
class I_EUDF35_Soldier_AAT_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_AAT_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_AAT_F.jpg";
    
    role="Assistant";

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    backpack = "B_TacticalPack_AAT_EUDF35_woodland";

    weapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
};

// Autorifleman
class I_EUDF35_Soldier_AR_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_AR_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_AR_F.jpg";

    RIFLEMAN_LMG();

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    weapons[] = {
        "LMG_Mk200_EUDF35_erco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "LMG_Mk200_EUDF35_erco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    // backpack = "B_TacticalPack_AR_EUDF35_woodland";

    magazines[] = {
        mag_3(200Rnd_65x39_cased_Box),
        mag_3(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_3(200Rnd_65x39_cased_Box),
        mag_3(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
};

// AT Specialist
class I_EUDF35_Soldier_AT_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_AT_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_AT_F.jpg";
    
    RIFLEMAN_AT();

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    backpack = "B_TacticalPack_AT_EUDF35_woodland";

    weapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "launch_B_Titan_short_tna_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "launch_B_Titan_short_tna_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_1(Titan_AT),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_1(Titan_AT),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
};

// Grenadier
class I_EUDF35_Soldier_GL_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_GL_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_GL_F.jpg";

    RIFLEMAN_GL();

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    weapons[] = {
        "arifle_MSBS65_GL_EUDF35_arco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_GL_EUDF35_arco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_8(1Rnd_HE_Grenade_shell),
        mag_3(16Rnd_9x21_Mag),
        mag_2(1Rnd_Smoke_Grenade_shell),
        mag_1(1Rnd_SmokeGreen_Grenade_shell),
        mag_1(1Rnd_Smokeorange_Grenade_shell),
        mag_1(1Rnd_SmokePurple_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_8(1Rnd_HE_Grenade_shell),
        mag_3(16Rnd_9x21_Mag),
        mag_2(1Rnd_Smoke_Grenade_shell),
        mag_1(1Rnd_SmokeGreen_Grenade_shell),
        mag_1(1Rnd_Smokeorange_Grenade_shell),
        mag_1(1Rnd_SmokePurple_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_2(Chemlight_blue)
        };

};

// Rifleman AT
class I_EUDF35_Soldier_LAT_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_LAT_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_LAT_F.jpg";

    RIFLEMAN_AT();

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    backpack = "B_TacticalPack_LAT_EUDF35_woodland";

    weapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "launch_MRAWS_green_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "launch_MRAWS_green_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_1(MRAWS_HEAT_F),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_1(MRAWS_HEAT_F),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };

};

// Marksman
class I_EUDF35_Soldier_M_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_M_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_M_F.jpg";
    
    RIFLEMAN_MARKSMAN();

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    weapons[] = {
        "arifle_MSBS65_Mark_EUDF35_dms_pointer_snds_bipod_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_Mark_EUDF35_dms_pointer_snds_bipod_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellGreen),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_1(SmokeShellGreen),
        mag_2(Chemlight_blue)
        };

};

// Squad Leader
class I_EUDF35_Soldier_SL_F : I_EUDF35_Rifleman_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_SL_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_SL_F.jpg";

    RIFLEMAN_LEADER();

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = {
        "V_CarrierRigKBT_01_heavy_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = {
        "V_CarrierRigKBT_01_heavy_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    weapons[] = {
        "arifle_MSBS65_EUDF35_erco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put",
        "Binocular"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_erco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put",
        "Binocular"
        };

    magazines[] = {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
        mag_3(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellGreen),
        mag_1(SmokeShellOrange),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
        mag_3(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellGreen),
        mag_1(SmokeShellOrange),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
        
    class EventHandlers: EventHandlers {init = "";};
};

// Team Leader
class I_EUDF35_Soldier_TL_F : I_EUDF35_Soldier_SL_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_TL_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_TL_F.jpg";

    RIFLEMAN_LEADER();

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = {
        "V_CarrierRigKBT_01_heavy_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = {
        "V_CarrierRigKBT_01_heavy_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    weapons[] = {
        "arifle_MSBS65_GL_EUDF35_erco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put",
        "Binocular"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_GL_EUDF35_erco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put",
        "Binocular"
        };

    magazines[] = {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_3(16Rnd_9x21_Mag),
        mag_2(1Rnd_Smoke_Grenade_shell),
        mag_1(1Rnd_SmokeBlue_Grenade_shell),
        mag_1(1Rnd_SmokeGreen_Grenade_shell),
        mag_1(1Rnd_Smokeorange_Grenade_shell),
        mag_2(HandGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_1(SmokeShellGreen),
        mag_1(SmokeShellOrange),
        mag_1(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_3(16Rnd_9x21_Mag),
        mag_2(1Rnd_Smoke_Grenade_shell),
        mag_1(1Rnd_SmokeBlue_Grenade_shell),
        mag_1(1Rnd_SmokeGreen_Grenade_shell),
        mag_1(1Rnd_Smokeorange_Grenade_shell),
        mag_2(HandGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_1(SmokeShellGreen),
        mag_1(SmokeShellOrange),
        mag_1(Chemlight_blue)
        };

    class EventHandlers: EventHandlers {init = "";};
};

// Officer
class I_EUDF35_Officer_F : I_EUDF35_Soldier_SL_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_officer_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Officer_F.jpg";

    uniformClass = "U_I_EUDF35_OfficerUniform_Woodland";

    RIFLEMAN_OFFICER();

    linkedItems[] = {
        "V_CarrierRigKBT_01_vest_EUDF35_Woodland",
        "H_Beret_gen_EUDF35",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_CarrierRigKBT_01_vest_EUDF35_Woodland",
        "H_Beret_gen_EUDF35",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    weapons[] = {
        "arifle_MSBS65_EUDF35_erco_pointer_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_erco_pointer_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_5(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(Chemlight_blue),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue)
        };
    respawnMagazines[] = {
        mag_5(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(Chemlight_blue),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue)
        };

    class EventHandlers: EventHandlers {init = "";};

};

// Repair Specialist
class I_EUDF35_Soldier_Repair_F : I_EUDF35_Engineer_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_repair_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_Repair_F.jpg";
    
    RIFLEMAN_REPAIR();

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    backpack = "B_TacticalPack_Repair_EUDF35_woodland";

    weapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
};

// UAV Operator
class I_EUDF35_Soldier_UAV_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_A3_B_SOLDIER_UAV_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_UAV_F.jpg";
    
    RIFLEMAN_UAV();

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";  

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "I_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "I_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    backpack = "I_EUDF35_UAV_01_backpack_F";

    weapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };

    class EventHandlers: EventHandlers {init = "";};
};

// UAV Operator (AL-6)
class I_EUDF35_soldier_UAV_06_F : I_EUDF35_Soldier_UAV_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_soldier_UAV_06_F.jpg";
    displayName="$STR_A3_B_soldier_UAV_06_F0";
    DLC="ORANGE";

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    backpack = "I_EUDF35_UAV_06_backpack_F";

};

// UAV Operator (AL-6, Medical)
class I_EUDF35_soldier_UAV_06_medical_F : I_EUDF35_soldier_UAV_06_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_soldier_UAV_06_medical_F.jpg";
    displayName="$STR_A3_B_soldier_UAV_06_medical_F0";

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    backpack = "I_EUDF35_UAV_06_medical_backpack_F";

};

// Rifleman (Unarmed)
class I_EUDF35_Soldier_Unarmed_F : I_EUDF35_Rifleman_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_Unarmed_F.jpg";

    role="Unarmed";
    OFFDUTY();

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass","ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass","ItemWatch",
        "NVGoggles_INDEP"
    };

    magazines[] = {};
    respawnMagazines[] = {};

    threat[]={0.1,0.1,0.1};
};

// Survivor
class I_EUDF35_Survivor_F : I_EUDF35_Rifleman_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_A3_CfgVehicles_b_survivor_f_displayName";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Survivor_F.jpg";

    role="Unarmed";
    OFFDUTY();

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = {};
    respawnlinkedItems[] = {};

    magazines[] = {};
    respawnMagazines[] = {};
};

// Gunner HMG
class I_EUDF35_support_MG_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_support_MG_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_support_MG_F.jpg";
    
    role="Assistant";

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    backpack = "I_HMG_01_weapon_F";

    weapons[] = {
        "arifle_MSBS65_EUDF35_arco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_arco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };

};

// Gunner GMG
class I_EUDF35_support_GMG_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_support_GMG_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_support_GMG_F.jpg";
    
    role="Assistant";

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    backpack = "I_GMG_01_weapon_F";

    weapons[] = {
        "arifle_MSBS65_EUDF35_arco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_arco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };

};

// Assistant Gunner (HMG/GMG)
class I_EUDF35_support_AMG_F : I_EUDF35_support_MG_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_support_AMG_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_support_AMG_F.jpg";

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    backpack = "I_HMG_01_support_F";

};

// Gunner Mortar
class I_EUDF35_Support_Mort_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_support_Mort_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Support_Mort_F.jpg";
    
    role="Assistant";

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    backpack = "I_Mortar_01_weapon_F";

    weapons[] = {
        "arifle_MSBS65_EUDF35_arco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_arco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
        };

};

// Assitant Gunner Mortar
class I_EUDF35_Support_AMort_F : I_EUDF35_Support_Mort_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_support_AMort_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Support_AMort_F.jpg";

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";

    backpack = "I_Mortar_01_support_F";

};

// Operator AHMG
class I_EUDF35_support_AHMG_F : I_EUDF35_Soldier_UAV_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="AHMG Operator";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_support_AHMG_F.jpg";

    backpack = "I_EUDF35_HMG_01_A_weapon_F";

};

// Operator AGMG
class I_EUDF35_support_AGMG_F : I_EUDF35_Soldier_UAV_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="AGMG Operator";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_support_AGMG_F.jpg";

    backpack = "I_EUDF35_GMG_01_A_weapon_F";

};

// Paratrooper
class I_EUDF35_Soldier_PG_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_soldier_PG_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_PG_F.jpg";

    backpack = "B_Parachute";

    linkedItems[] = {
        "V_CarrierRigKBT_01_heavy_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = {
        "V_CarrierRigKBT_01_heavy_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
};

// Radio Operator
class I_EUDF35_Soldier_RadioOperator_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_A3_C_B_W_RadioOperator_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_RadioOperator_F.jpg";

    backpack = "B_RadioBag_01_EUDF35_woodland";
};

// Fighter Pilot
class I_EUDF35_Fighter_Pilot_F : I_EUDF35_Pilot_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_A3_I_Fighter_Pilot_name";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Fighter_Pilot_F.jpg";

    backpack = "";

    weapons[] = {
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_4(16Rnd_9x21_Mag),
        mag_2(Chemlight_blue),
        mag_1(SmokeShellOrange)
        };
    respawnMagazines[] = {
        mag_4(16Rnd_9x21_Mag),
        mag_2(Chemlight_blue),
        mag_1(SmokeShellOrange)
        };
};

// Heavy Gunner
class I_EUDF35_HeavyGunner_F : I_EUDF35_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_A3_cfgVehicles_B_HeavyGunner_F0";

    RIFLEMAN_HEAVYGUNNER();

    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_HeavyGunner_F.jpg";

    weapons[] = {
        "MMG_01_EUDF35_erco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "MMG_01_EUDF35_erco_pointer_snds_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_3(150Rnd_93x64_Mag),
        mag_3(16Rnd_9x21_Mag),
        mag_1(SmokeShell),
        mag_1(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_3(150Rnd_93x64_Mag),
        mag_3(16Rnd_9x21_Mag),
        mag_1(SmokeShell),
        mag_1(Chemlight_blue)
        };
};

// Mine Specialist
class I_EUDF35_Soldier_Mine_F : I_EUDF35_Soldier_Exp_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_A3_B_soldier_mine_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_Mine_F.jpg";
    DLC="ORANGE";
    
    backpack = "B_Carryall_Mines_EUDF35_woodland";

};

// Marksman
class I_EUDF35_Sharpshooter_F : I_EUDF35_Soldier_M_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_A3_cfgVehicles_B_Sharpshooter_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Sharpshooter_F.jpg";
    
    weapons[] = {
        "srifle_DMR_03_woodland_ams_pointer_snds_bipod_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put",
        "Binocular"
        };
    respawnWeapons[] = {
        "srifle_DMR_03_woodland_ams_pointer_snds_bipod_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put",
        "Binocular"
        };

    magazines[] = {
        mag_8(20Rnd_762x51_Mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellGreen),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_8(20Rnd_762x51_Mag),
        mag_3(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_1(SmokeShellGreen),
        mag_2(Chemlight_blue)
        };

};

// Explosives Specialist (AT)
class I_EUDF35_Soldier_ExpAT_F : I_EUDF35_Soldier_Exp_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="Explosive Specialist (AT)";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_ExpAT_F.jpg";
    
    backpack = "B_Carryall_ExpAT_EUDF35_woodland";

};


// Parade Officer
class I_EUDF35_Officer_Parade_F: I_EUDF_ParadeUniform_01_Base_F
{

    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_A3_Officer_Parade_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Officer_Parade_F.jpg";
    DLC="AoW";
};
// Parade Officer (Veteran)
class I_EUDF35_Officer_Parade_Veteran_F: I_EUDF_ParadeUniform_01_decorated_Base_F
{

    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_A3_Officer_Parade_Veteran_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Officer_Parade_Veteran_F.jpg";
    DLC="AoW";
};


// Military Police Officer
class I_EUDF35_Soldier_MP_F : I_EUDF35_Soldier_lite_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_A3_C_I_E_Soldier_MP_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_MP_F.jpg";

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland_mp";

    linkedItems[] = {
        "V_CarrierRigKBT_01_EUDF35_mp",
        "H_MilCap_EUDF35_woodland",
        "ItemGPS",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnlinkedItems[] = {
        "V_CarrierRigKBT_01_EUDF35_mp",
        "H_MilCap_EUDF35_woodland",
        "ItemGPS",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };

    weapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put",
        "Binocular"
        };
    respawnWeapons[] = {
        "arifle_MSBS65_EUDF35_aco_pointer_F",
        "hgun_P07_blk_F",
        "Throw",
        "Put",
        "Binocular"
        };

    magazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_1(HandGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(16Rnd_9x21_Mag),
        mag_1(HandGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellBlue),
        mag_2(Chemlight_blue)
        };
};