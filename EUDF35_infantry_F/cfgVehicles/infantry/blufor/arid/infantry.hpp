// Rifleman
class B_EUDF35_D_Soldier_F : I_EUDF35_D_Soldier_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Rifleman (Light)
class B_EUDF35_D_Soldier_lite_F : I_EUDF35_D_Soldier_lite_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Crewman
class B_EUDF35_D_Crew_F : I_EUDF35_D_Crew_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Engineer
class B_EUDF35_D_Engineer_F : I_EUDF35_D_Engineer_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Explosives Specialist
class B_EUDF35_D_Soldier_Exp_F : I_EUDF35_D_Soldier_Exp_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Helicopter Pilot
class B_EUDF35_D_HeliPilot_F : I_EUDF35_D_HeliPilot_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Helicopter Crew
class B_EUDF35_D_HeliCrew_F : I_EUDF35_D_HeliCrew_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Pilot
class B_EUDF35_D_Pilot_F : I_EUDF35_D_Pilot_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Combat Medic
class B_EUDF35_D_Medic_F : I_EUDF35_D_Medic_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Ammo bearer
class B_EUDF35_D_Soldier_A_F : I_EUDF35_D_Soldier_A_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// AA Specialist
class B_EUDF35_D_Soldier_AA_F : I_EUDF35_D_Soldier_AA_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Assistant AA Specialist
class B_EUDF35_D_Soldier_AAA_F : I_EUDF35_D_Soldier_AAA_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Assistant Autorifleman
class B_EUDF35_D_Soldier_AAR_F : I_EUDF35_D_Soldier_AAR_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Assistant MG
class B_EUDF35_D_Soldier_AMG_F : I_EUDF35_D_Soldier_AMG_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Assistant AT Specialist
class B_EUDF35_D_Soldier_AAT_F : I_EUDF35_D_Soldier_AAT_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Autorifleman
class B_EUDF35_D_Soldier_AR_F : I_EUDF35_D_Soldier_AR_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// AT Specialist
class B_EUDF35_D_Soldier_AT_F : I_EUDF35_D_Soldier_AT_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Grenadier
class B_EUDF35_D_Soldier_GL_F : I_EUDF35_D_Soldier_GL_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Rifleman AT
class B_EUDF35_D_Soldier_LAT_F : I_EUDF35_D_Soldier_LAT_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Marksman
class B_EUDF35_D_Soldier_M_F : I_EUDF35_D_Soldier_M_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Squad Leader
class B_EUDF35_D_Soldier_SL_F : I_EUDF35_D_Soldier_SL_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Team Leader
class B_EUDF35_D_Soldier_TL_F : I_EUDF35_D_Soldier_TL_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Officer
class B_EUDF35_D_Officer_F : I_EUDF35_D_Officer_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Repair Specialist
class B_EUDF35_D_Soldier_Repair_F : I_EUDF35_D_Soldier_Repair_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// UAV Operator
class B_EUDF35_D_Soldier_UAV_F : I_EUDF35_D_Soldier_UAV_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
    backpack = "B_EUDF35_D_UAV_01_backpack_F";

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
class B_EUDF35_D_soldier_UAV_06_F : I_EUDF35_D_soldier_UAV_06_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
    backpack = "B_EUDF35_D_UAV_06_backpack_F";

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
class B_EUDF35_D_soldier_UAV_06_medical_F : I_EUDF35_D_soldier_UAV_06_medical_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
    backpack = "B_EUDF35_D_UAV_06_medical_backpack_F";
    
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
class B_EUDF35_D_Soldier_Unarmed_F : I_EUDF35_D_Soldier_Unarmed_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Survivor
class B_EUDF35_D_Survivor_F : I_EUDF35_D_Survivor_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Gunner HMG
class B_EUDF35_D_support_MG_F : I_EUDF35_D_support_MG_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Gunner GMG
class B_EUDF35_D_support_GMG_F : I_EUDF35_D_support_GMG_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Assistant Gunner (HMG/GMG)
class B_EUDF35_D_support_AMG_F : I_EUDF35_D_support_AMG_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Gunner Mortar
class B_EUDF35_D_Support_Mort_F : I_EUDF35_D_Support_Mort_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Assitant Gunner Mortar
class B_EUDF35_D_Support_AMort_F : I_EUDF35_D_Support_AMort_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Operator AHMG
class B_EUDF35_D_support_AHMG_F : I_EUDF35_D_support_AHMG_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
    backpack = "B_EUDF35_HMG_01_A_weapon_F";
    
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
class B_EUDF35_D_support_AGMG_F : I_EUDF35_D_support_AGMG_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
    backpack = "B_EUDF35_GMG_01_A_weapon_F";
    
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
class B_EUDF35_D_Soldier_PG_F : I_EUDF35_D_Soldier_PG_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Radio Operator
class B_EUDF35_D_Soldier_RadioOperator_F : I_EUDF35_D_Soldier_RadioOperator_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Fighter Pilot
class B_EUDF35_D_Fighter_Pilot_F : I_EUDF35_D_Fighter_Pilot_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Heavy Gunner
class B_EUDF35_D_HeavyGunner_F : I_EUDF35_D_HeavyGunner_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Mine Specialist
class B_EUDF35_D_Soldier_Mine_F : I_EUDF35_D_Soldier_Mine_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Marksman
class B_EUDF35_D_Sharpshooter_F : I_EUDF35_D_Sharpshooter_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};

// Explosives Specialist (AT)
class B_EUDF35_D_Soldier_ExpAT_F : I_EUDF35_D_Soldier_ExpAT_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};


// Military Police Officer
class B_EUDF35_D_Soldier_MP_F : I_EUDF35_D_Soldier_MP_F {
    faction = "BLU_EUDF35_D_F";
    side = 1;
};
