// Rifleman
class B_EUDF35_Soldier_F : I_EUDF35_Soldier_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Rifleman (Light)
class B_EUDF35_Soldier_lite_F : I_EUDF35_Soldier_lite_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Crewman
class B_EUDF35_Crew_F : I_EUDF35_Crew_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Engineer
class B_EUDF35_Engineer_F : I_EUDF35_Engineer_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Explosives Specialist
class B_EUDF35_Soldier_Exp_F : I_EUDF35_Soldier_Exp_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Helicopter Pilot
class B_EUDF35_HeliPilot_F : I_EUDF35_HeliPilot_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Helicopter Crew
class B_EUDF35_HeliCrew_F : I_EUDF35_HeliCrew_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Pilot
class B_EUDF35_Pilot_F : I_EUDF35_Pilot_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Combat Medic
class B_EUDF35_Medic_F : I_EUDF35_Medic_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Ammo bearer
class B_EUDF35_Soldier_A_F : I_EUDF35_Soldier_A_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// AA Specialist
class B_EUDF35_Soldier_AA_F : I_EUDF35_Soldier_AA_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Assistant AA Specialist
class B_EUDF35_Soldier_AAA_F : I_EUDF35_Soldier_AAA_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Assistant Autorifleman
class B_EUDF35_Soldier_AAR_F : I_EUDF35_Soldier_AAR_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Assistant MG
class B_EUDF35_Soldier_AMG_F : I_EUDF35_Soldier_AMG_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Assistant AT Specialist
class B_EUDF35_Soldier_AAT_F : I_EUDF35_Soldier_AAT_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Autorifleman
class B_EUDF35_Soldier_AR_F : I_EUDF35_Soldier_AR_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// AT Specialist
class B_EUDF35_Soldier_AT_F : I_EUDF35_Soldier_AT_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Grenadier
class B_EUDF35_Soldier_GL_F : I_EUDF35_Soldier_GL_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Rifleman AT
class B_EUDF35_Soldier_LAT_F : I_EUDF35_Soldier_LAT_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Marksman
class B_EUDF35_Soldier_M_F : I_EUDF35_Soldier_M_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Squad Leader
class B_EUDF35_Soldier_SL_F : I_EUDF35_Soldier_SL_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Team Leader
class B_EUDF35_Soldier_TL_F : I_EUDF35_Soldier_TL_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Officer
class B_EUDF35_Officer_F : I_EUDF35_Officer_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Repair Specialist
class B_EUDF35_Soldier_Repair_F : I_EUDF35_Soldier_Repair_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// UAV Operator
class B_EUDF35_Soldier_UAV_F : I_EUDF35_Soldier_UAV_F {
    faction = "BLU_EUDF35_F";
    side = 1;
    backpack = "B_EUDF35_UAV_01_backpack_F";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
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
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
};

// UAV Operator (AL-6)
class B_EUDF35_soldier_UAV_06_F : I_EUDF35_soldier_UAV_06_F {
    faction = "BLU_EUDF35_F";
    side = 1;
    backpack = "B_EUDF35_UAV_06_backpack_F";
    
    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
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
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
};

// UAV Operator (AL-6, Medical)
class B_EUDF35_soldier_UAV_06_medical_F : I_EUDF35_soldier_UAV_06_medical_F {
    faction = "BLU_EUDF35_F";
    side = 1;
    backpack = "B_EUDF35_UAV_06_medical_backpack_F";
    
    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
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
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
};

// Rifleman (Unarmed)
class B_EUDF35_Soldier_Unarmed_F : I_EUDF35_Soldier_Unarmed_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Survivor
class B_EUDF35_Survivor_F : I_EUDF35_Survivor_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Gunner HMG
class B_EUDF35_support_MG_F : I_EUDF35_support_MG_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Gunner GMG
class B_EUDF35_support_GMG_F : I_EUDF35_support_GMG_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Assistant Gunner (HMG/GMG)
class B_EUDF35_support_AMG_F : I_EUDF35_support_AMG_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Gunner Mortar
class B_EUDF35_Support_Mort_F : I_EUDF35_Support_Mort_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Assitant Gunner Mortar
class B_EUDF35_Support_AMort_F : I_EUDF35_Support_AMort_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Operator AHMG
class B_EUDF35_support_AHMG_F : I_EUDF35_support_AHMG_F {
    faction = "BLU_EUDF35_F";
    side = 1;
    backpack = "B_EUDF35_HMG_01_A_weapon_F";
    
    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
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
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
};

// Operator AGMG
class B_EUDF35_support_AGMG_F : I_EUDF35_support_AGMG_F {
    faction = "BLU_EUDF35_F";
    side = 1;
    backpack = "B_EUDF35_GMG_01_A_weapon_F";
    
    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
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
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
};

// Paratrooper
class B_EUDF35_Soldier_PG_F : I_EUDF35_Soldier_PG_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Radio Operator
class B_EUDF35_Soldier_RadioOperator_F : I_EUDF35_Soldier_RadioOperator_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Fighter Pilot
class B_EUDF35_Fighter_Pilot_F : I_EUDF35_Fighter_Pilot_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Heavy Gunner
class B_EUDF35_HeavyGunner_F : I_EUDF35_HeavyGunner_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Mine Specialist
class B_EUDF35_Soldier_Mine_F : I_EUDF35_Soldier_Mine_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Marksman
class B_EUDF35_Sharpshooter_F : I_EUDF35_Sharpshooter_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Explosives Specialist (AT)
class B_EUDF35_Soldier_ExpAT_F : I_EUDF35_Soldier_ExpAT_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};

// Parade Officer
class B_EUDF35_Officer_Parade_F: I_EUDF35_Officer_Parade_F
{
    faction = "BLU_EUDF35_F";
    side = 1;
};
// Parade Officer (Veteran)
class B_EUDF35_Officer_Parade_Veteran_F: I_EUDF35_Officer_Parade_Veteran_F
{
    faction = "BLU_EUDF35_F";
    side = 1;
};


// Military Police Officer
class B_EUDF35_Soldier_MP_F : I_EUDF35_Soldier_MP_F {
    faction = "BLU_EUDF35_F";
    side = 1;
};
