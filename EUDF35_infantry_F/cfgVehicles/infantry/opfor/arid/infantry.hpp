// Rifleman
class O_EUDF35_D_Soldier_F : I_EUDF35_D_Soldier_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Rifleman (Light)
class O_EUDF35_D_Soldier_lite_F : I_EUDF35_D_Soldier_lite_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Crewman
class O_EUDF35_D_Crew_F : I_EUDF35_D_Crew_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Engineer
class O_EUDF35_D_Engineer_F : I_EUDF35_D_Engineer_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Explosives Specialist
class O_EUDF35_D_Soldier_Exp_F : I_EUDF35_D_Soldier_Exp_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Helicopter Pilot
class O_EUDF35_D_HeliPilot_F : I_EUDF35_D_HeliPilot_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Helicopter Crew
class O_EUDF35_D_HeliCrew_F : I_EUDF35_D_HeliCrew_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Pilot
class O_EUDF35_D_Pilot_F : I_EUDF35_D_Pilot_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Combat Medic
class O_EUDF35_D_Medic_F : I_EUDF35_D_Medic_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Ammo bearer
class O_EUDF35_D_Soldier_A_F : I_EUDF35_D_Soldier_A_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// AA Specialist
class O_EUDF35_D_Soldier_AA_F : I_EUDF35_D_Soldier_AA_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Assistant AA Specialist
class O_EUDF35_D_Soldier_AAA_F : I_EUDF35_D_Soldier_AAA_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Assistant Autorifleman
class O_EUDF35_D_Soldier_AAR_F : I_EUDF35_D_Soldier_AAR_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Assistant MG
class O_EUDF35_D_Soldier_AMG_F : I_EUDF35_D_Soldier_AMG_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Assistant AT Specialist
class O_EUDF35_D_Soldier_AAT_F : I_EUDF35_D_Soldier_AAT_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Autorifleman
class O_EUDF35_D_Soldier_AR_F : I_EUDF35_D_Soldier_AR_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// AT Specialist
class O_EUDF35_D_Soldier_AT_F : I_EUDF35_D_Soldier_AT_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Grenadier
class O_EUDF35_D_Soldier_GL_F : I_EUDF35_D_Soldier_GL_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Rifleman AT
class O_EUDF35_D_Soldier_LAT_F : I_EUDF35_D_Soldier_LAT_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Marksman
class O_EUDF35_D_Soldier_M_F : I_EUDF35_D_Soldier_M_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Squad Leader
class O_EUDF35_D_Soldier_SL_F : I_EUDF35_D_Soldier_SL_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Team Leader
class O_EUDF35_D_Soldier_TL_F : I_EUDF35_D_Soldier_TL_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Officer
class O_EUDF35_D_Officer_F : I_EUDF35_D_Officer_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Repair Specialist
class O_EUDF35_D_Soldier_Repair_F : I_EUDF35_D_Soldier_Repair_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// UAV Operator
class O_EUDF35_D_Soldier_UAV_F : I_EUDF35_D_Soldier_UAV_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
    backpack = "O_EUDF35_D_UAV_01_backpack_F";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_arid",
        "H_HelmetB_light_EUDF35_arid",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_arid",
        "H_HelmetB_light_EUDF35_arid",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
};

// UAV Operator (AL-6)
class O_EUDF35_D_soldier_UAV_06_F : I_EUDF35_D_soldier_UAV_06_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
    backpack = "O_EUDF35_D_UAV_06_backpack_F";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_arid",
        "H_HelmetB_light_EUDF35_arid",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_arid",
        "H_HelmetB_light_EUDF35_arid",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
};

// UAV Operator (AL-6, Medical)
class O_EUDF35_D_soldier_UAV_06_medical_F : I_EUDF35_D_soldier_UAV_06_medical_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
    backpack = "O_EUDF35_D_UAV_06_medical_backpack_F";
    
    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_arid",
        "H_HelmetB_light_EUDF35_arid",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_arid",
        "H_HelmetB_light_EUDF35_arid",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
};

// Rifleman (Unarmed)
class O_EUDF35_D_Soldier_Unarmed_F : I_EUDF35_D_Soldier_Unarmed_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Survivor
class O_EUDF35_D_Survivor_F : I_EUDF35_D_Survivor_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Gunner HMG
class O_EUDF35_D_support_MG_F : I_EUDF35_D_support_MG_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Gunner GMG
class O_EUDF35_D_support_GMG_F : I_EUDF35_D_support_GMG_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Assistant Gunner (HMG/GMG)
class O_EUDF35_D_support_AMG_F : I_EUDF35_D_support_AMG_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Gunner Mortar
class O_EUDF35_D_Support_Mort_F : I_EUDF35_D_Support_Mort_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Assitant Gunner Mortar
class O_EUDF35_D_Support_AMort_F : I_EUDF35_D_Support_AMort_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Operator AHMG
class O_EUDF35_D_support_AHMG_F : I_EUDF35_D_support_AHMG_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
    backpack = "O_EUDF35_HMG_01_A_weapon_F";
    
    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_arid",
        "H_HelmetB_light_EUDF35_arid",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_arid",
        "H_HelmetB_light_EUDF35_arid",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
};

// Operator AGMG
class O_EUDF35_D_support_AGMG_F : I_EUDF35_D_support_AGMG_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
    backpack = "O_EUDF35_GMG_01_A_weapon_F";
    
    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_arid",
        "H_HelmetB_light_EUDF35_arid",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_arid",
        "H_HelmetB_light_EUDF35_arid",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
};

// Paratrooper
class O_EUDF35_D_Soldier_PG_F : I_EUDF35_D_Soldier_PG_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Radio Operator
class O_EUDF35_D_Soldier_RadioOperator_F : I_EUDF35_D_Soldier_RadioOperator_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Fighter Pilot
class O_EUDF35_D_Fighter_Pilot_F : I_EUDF35_D_Fighter_Pilot_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Heavy Gunner
class O_EUDF35_D_HeavyGunner_F : I_EUDF35_D_HeavyGunner_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Mine Specialist
class O_EUDF35_D_Soldier_Mine_F : I_EUDF35_D_Soldier_Mine_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Marksman
class O_EUDF35_D_Sharpshooter_F : I_EUDF35_D_Sharpshooter_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};

// Explosives Specialist (AT)
class O_EUDF35_D_Soldier_ExpAT_F : I_EUDF35_D_Soldier_ExpAT_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};


// Military Police Officer
class O_EUDF35_D_Soldier_MP_F : I_EUDF35_D_Soldier_MP_F {
    faction = "OPF_EUDF35_D_F";
    side = 0;
};
