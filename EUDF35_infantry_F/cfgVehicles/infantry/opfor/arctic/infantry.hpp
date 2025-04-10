// Rifleman
class O_EUDF35_A_Soldier_F : I_EUDF35_A_Soldier_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Rifleman (Light)
class O_EUDF35_A_Soldier_lite_F : I_EUDF35_A_Soldier_lite_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Crewman
class O_EUDF35_A_Crew_F : I_EUDF35_A_Crew_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Engineer
class O_EUDF35_A_Engineer_F : I_EUDF35_A_Engineer_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Explosives Specialist
class O_EUDF35_A_Soldier_Exp_F : I_EUDF35_A_Soldier_Exp_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Helicopter Pilot
class O_EUDF35_A_HeliPilot_F : I_EUDF35_A_HeliPilot_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Helicopter Crew
class O_EUDF35_A_HeliCrew_F : I_EUDF35_A_HeliCrew_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Pilot
class O_EUDF35_A_Pilot_F : I_EUDF35_A_Pilot_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Combat Medic
class O_EUDF35_A_Medic_F : I_EUDF35_A_Medic_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Ammo bearer
class O_EUDF35_A_Soldier_A_F : I_EUDF35_A_Soldier_A_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// AA Specialist
class O_EUDF35_A_Soldier_AA_F : I_EUDF35_A_Soldier_AA_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Assistant AA Specialist
class O_EUDF35_A_Soldier_AAA_F : I_EUDF35_A_Soldier_AAA_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Assistant Autorifleman
class O_EUDF35_A_Soldier_AAR_F : I_EUDF35_A_Soldier_AAR_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Assistant MG
class O_EUDF35_A_Soldier_AMG_F : I_EUDF35_A_Soldier_AMG_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Assistant AT Specialist
class O_EUDF35_A_Soldier_AAT_F : I_EUDF35_A_Soldier_AAT_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Autorifleman
class O_EUDF35_A_Soldier_AR_F : I_EUDF35_A_Soldier_AR_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// AT Specialist
class O_EUDF35_A_Soldier_AT_F : I_EUDF35_A_Soldier_AT_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Grenadier
class O_EUDF35_A_Soldier_GL_F : I_EUDF35_A_Soldier_GL_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Rifleman AT
class O_EUDF35_A_Soldier_LAT_F : I_EUDF35_A_Soldier_LAT_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Marksman
class O_EUDF35_A_Soldier_M_F : I_EUDF35_A_Soldier_M_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Squad Leader
class O_EUDF35_A_Soldier_SL_F : I_EUDF35_A_Soldier_SL_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Team Leader
class O_EUDF35_A_Soldier_TL_F : I_EUDF35_A_Soldier_TL_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Officer
class O_EUDF35_A_Officer_F : I_EUDF35_A_Officer_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Repair Specialist
class O_EUDF35_A_Soldier_Repair_F : I_EUDF35_A_Soldier_Repair_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// UAV Operator
class O_EUDF35_A_Soldier_UAV_F : I_EUDF35_A_Soldier_UAV_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
    backpack = "O_EUDF35_A_UAV_01_backpack_F";  

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_light_EUDF35_arctic",
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
        "H_HelmetB_light_EUDF35_arctic",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
};

// UAV Operator (AL-6)
class O_EUDF35_A_soldier_UAV_06_F : I_EUDF35_A_soldier_UAV_06_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
    backpack = "O_EUDF35_A_UAV_06_backpack_F";  

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_light_EUDF35_arctic",
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
        "H_HelmetB_light_EUDF35_arctic",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
};

// UAV Operator (AL-6, Medical)
class O_EUDF35_A_soldier_UAV_06_medical_F : I_EUDF35_A_soldier_UAV_06_medical_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
    backpack = "O_EUDF35_A_UAV_06_medical_backpack_F";  

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_light_EUDF35_arctic",
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
        "H_HelmetB_light_EUDF35_arctic",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
};

// Rifleman (Unarmed)
class O_EUDF35_A_Soldier_Unarmed_F : I_EUDF35_A_Soldier_Unarmed_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Survivor
class O_EUDF35_A_Survivor_F : I_EUDF35_A_Survivor_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Gunner HMG
class O_EUDF35_A_support_MG_F : I_EUDF35_A_support_MG_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Gunner GMG
class O_EUDF35_A_support_GMG_F : I_EUDF35_A_support_GMG_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Assistant Gunner (HMG/GMG)
class O_EUDF35_A_support_AMG_F : I_EUDF35_A_support_AMG_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Gunner Mortar
class O_EUDF35_A_Support_Mort_F : I_EUDF35_A_Support_Mort_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Assitant Gunner Mortar
class O_EUDF35_A_Support_AMort_F : I_EUDF35_A_Support_AMort_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Operator AHMG
class O_EUDF35_A_support_AHMG_F : I_EUDF35_A_support_AHMG_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
    backpack = "O_EUDF35_HMG_01_A_weapon_F";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_light_EUDF35_arctic",
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
        "H_HelmetB_light_EUDF35_arctic",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
};

// Operator AGMG
class O_EUDF35_A_support_AGMG_F : I_EUDF35_A_support_AGMG_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
    backpack = "O_EUDF35_GMG_01_A_weapon_F";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_light_EUDF35_arctic",
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
        "H_HelmetB_light_EUDF35_arctic",
        "ItemMap",
        "ItemRadio",
        "B_UavTerminal",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
};

// Paratrooper
class O_EUDF35_A_Soldier_PG_F : I_EUDF35_A_Soldier_PG_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Radio Operator
class O_EUDF35_A_Soldier_RadioOperator_F : I_EUDF35_A_Soldier_RadioOperator_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Fighter Pilot
class O_EUDF35_A_Fighter_Pilot_F : I_EUDF35_A_Fighter_Pilot_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Heavy Gunner
class O_EUDF35_A_HeavyGunner_F : I_EUDF35_A_HeavyGunner_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Mine Specialist
class O_EUDF35_A_Soldier_Mine_F : I_EUDF35_A_Soldier_Mine_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Marksman
class O_EUDF35_A_Sharpshooter_F : I_EUDF35_A_Sharpshooter_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};

// Explosives Specialist (AT)
class O_EUDF35_A_Soldier_ExpAT_F : I_EUDF35_A_Soldier_ExpAT_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};


// Military Police Officer
class O_EUDF35_A_Soldier_MP_F : I_EUDF35_A_Soldier_MP_F {
    faction = "OPF_EUDF35_A_F";
    side = 0;
};
