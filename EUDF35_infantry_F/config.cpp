#define VERSION "1.2.3"

#include "basicDefines.hpp"

class CfgPatches
{
    class EUDF35_infantry_F
    {
        name = "European Defense Force 2035 - Infantry";
        author = "kenoxite";
        authors[] = {
            "kenoxite"
        };
        requiredVersion = 1.62;
        requiredAddons[] = {
            "EUDF35_core_F",
            "EUDF35_infantry_data_F",
            "EUDF35_weapons_F",

            "A3_Characters_F",
            "A3_Characters_F_Orange",
            "A3_Characters_F_Enoch",
            "A3_Sounds_F",
            "A3_Sounds_F_Exp",
            "A3_Static_F_Mark_Designator_01"
        };
        units[]={
            "I_EUDF35_Soldier_F",
            "I_EUDF35_Soldier_lite_F",
            "I_EUDF35_Crew_F",
            "I_EUDF35_Engineer_F",
            "I_EUDF35_Soldier_Exp_F",
            "I_EUDF35_Pilot_F",
            "I_EUDF35_HeliPilot_F",
            "I_EUDF35_HeliCrew_F",
            "I_EUDF35_Medic_F",
            "I_EUDF35_Soldier_A_F",
            "I_EUDF35_Soldier_AA_F",
            "I_EUDF35_Soldier_AAA_F",
            "I_EUDF35_Soldier_AAR_F",
            "I_EUDF35_Soldier_AAT_F",
            "I_EUDF35_Soldier_AR_F",
            "I_EUDF35_Soldier_AT_F",
            "I_EUDF35_Soldier_GL_F",
            "I_EUDF35_Soldier_LAT_F",
            "I_EUDF35_Soldier_M_F",
            "I_EUDF35_Soldier_SL_F",
            "I_EUDF35_Soldier_TL_F",
            "I_EUDF35_Officer_F",
            "I_EUDF35_Soldier_Repair_F",
            "I_EUDF35_Soldier_UAV_F",
            "I_EUDF35_Soldier_Unarmed_F",
            "I_EUDF35_Survivor_F",
            "I_EUDF35_support_MG_F",
            "I_EUDF35_support_GMG_F",
            "I_EUDF35_support_AMG_F",
            "I_EUDF35_Support_Mort_F",
            "I_EUDF35_Support_AMort_F",
            "I_EUDF35_soldier_UAV_06_F",
            "I_EUDF35_soldier_UAV_06_medical_F",
            "I_EUDF35_support_AHMG_F",
            "I_EUDF35_support_AGMG_F",
            "I_EUDF35_Soldier_PG_F",
            "I_EUDF35_Soldier_RadioOperator_F",
            "I_EUDF35_Fighter_Pilot_F",
            "I_EUDF35_HeavyGunner_F",
            "I_EUDF35_Soldier_Mine_F",
            "I_EUDF35_Sharpshooter_F",
            "I_EUDF35_Soldier_AMG_F",
            "I_EUDF35_Soldier_ExpAT_F",

            "I_EUDF35_Recon_F",
            "I_EUDF35_Recon_LAT_F",
            "I_EUDF35_Recon_AR_F",
            "I_EUDF35_Recon_GL_F",
            "I_EUDF35_Recon_JTAC_F",
            "I_EUDF35_Recon_Medic_F",
            "I_EUDF35_Recon_M_F",
            "I_EUDF35_Recon_Exp_F",
            "I_EUDF35_Recon_TL_F",
            "I_EUDF35_Recon_Designator_F",
            "I_EUDF35_Recon_UAV_F",
            "I_EUDF35_Recon_Sharpshooter_F",

            "I_EUDF35_Sniper_F",
            "I_EUDF35_Spotter_F",

            "I_EUDF35_DA_F",
            "I_EUDF35_DA_LAT_F",
            "I_EUDF35_DA_AR_F",
            "I_EUDF35_DA_GL_F",
            "I_EUDF35_DA_JTAC_F",
            "I_EUDF35_DA_Medic_F",
            "I_EUDF35_DA_M_F",
            "I_EUDF35_DA_Exp_F",
            "I_EUDF35_DA_TL_F",
            "I_EUDF35_DA_Designator_F",
            "I_EUDF35_DA_UAV_F",
            "I_EUDF35_DA_Sharpshooter_F",
            "I_EUDF35_DA_Breacher_F",
            
            "I_EUDF35_Diver_F",
            "I_EUDF35_Diver_Exp_F",
            "I_EUDF35_Diver_TL_F",


            "I_EUDF35_A_Soldier_F",
            "I_EUDF35_A_Soldier_lite_F",
            "I_EUDF35_A_Crew_F",
            "I_EUDF35_A_Engineer_F",
            "I_EUDF35_A_Soldier_Exp_F",
            "I_EUDF35_A_Pilot_F",
            "I_EUDF35_A_HeliPilot_F",
            "I_EUDF35_A_HeliCrew_F",
            "I_EUDF35_A_Medic_F",
            "I_EUDF35_A_Soldier_A_F",
            "I_EUDF35_A_Soldier_AA_F",
            "I_EUDF35_A_Soldier_AAA_F",
            "I_EUDF35_A_Soldier_AAR_F",
            "I_EUDF35_A_Soldier_AAT_F",
            "I_EUDF35_A_Soldier_AR_F",
            "I_EUDF35_A_Soldier_AT_F",
            "I_EUDF35_A_Soldier_GL_F",
            "I_EUDF35_A_Soldier_LAT_F",
            "I_EUDF35_A_Soldier_M_F",
            "I_EUDF35_A_Soldier_SL_F",
            "I_EUDF35_A_Soldier_TL_F",
            "I_EUDF35_A_Officer_F",
            "I_EUDF35_A_Soldier_Repair_F",
            "I_EUDF35_A_Soldier_UAV_F",
            "I_EUDF35_A_Soldier_Unarmed_F",
            "I_EUDF35_A_Survivor_F",
            "I_EUDF35_A_support_MG_F",
            "I_EUDF35_A_support_GMG_F",
            "I_EUDF35_A_support_AMG_F",
            "I_EUDF35_A_Support_Mort_F",
            "I_EUDF35_A_Support_AMort_F",
            "I_EUDF35_A_soldier_UAV_06_F",
            "I_EUDF35_A_soldier_UAV_06_medical_F",
            "I_EUDF35_A_support_AHMG_F",
            "I_EUDF35_A_support_AGMG_F",
            "I_EUDF35_A_Soldier_PG_F",
            "I_EUDF35_A_Soldier_RadioOperator_F",
            "I_EUDF35_A_Fighter_Pilot_F",
            "I_EUDF35_A_HeavyGunner_F",
            "I_EUDF35_A_Soldier_Mine_F",
            "I_EUDF35_A_Sharpshooter_F",
            "I_EUDF35_A_Soldier_AMG_F",
            "I_EUDF35_A_Soldier_ExpAT_F",

            "I_EUDF35_A_Recon_F",
            "I_EUDF35_A_Recon_LAT_F",
            "I_EUDF35_A_Recon_AR_F",
            "I_EUDF35_A_Recon_GL_F",
            "I_EUDF35_A_Recon_JTAC_F",
            "I_EUDF35_A_Recon_Medic_F",
            "I_EUDF35_A_Recon_M_F",
            "I_EUDF35_A_Recon_Exp_F",
            "I_EUDF35_A_Recon_TL_F",
            "I_EUDF35_A_Recon_Designator_F",
            "I_EUDF35_A_Recon_UAV_F",
            "I_EUDF35_A_Recon_Sharpshooter_F",

            "I_EUDF35_A_Sniper_F",
            "I_EUDF35_A_Spotter_F",

            "I_EUDF35_A_DA_F",
            "I_EUDF35_A_DA_LAT_F",
            "I_EUDF35_A_DA_AR_F",
            "I_EUDF35_A_DA_GL_F",
            "I_EUDF35_A_DA_JTAC_F",
            "I_EUDF35_A_DA_Medic_F",
            "I_EUDF35_A_DA_M_F",
            "I_EUDF35_A_DA_Exp_F",
            "I_EUDF35_A_DA_TL_F",
            "I_EUDF35_A_DA_Designator_F",
            "I_EUDF35_A_DA_UAV_F",
            "I_EUDF35_A_DA_Sharpshooter_F",
            "I_EUDF35_A_DA_Breacher_F",
            
            "I_EUDF35_A_Diver_F",
            "I_EUDF35_A_Diver_Exp_F",
            "I_EUDF35_A_Diver_TL_F",

            "I_EUDF35_D_Soldier_F",
            "I_EUDF35_D_Soldier_lite_F",
            "I_EUDF35_D_Crew_F",
            "I_EUDF35_D_Engineer_F",
            "I_EUDF35_D_Soldier_Exp_F",
            "I_EUDF35_D_Pilot_F",
            "I_EUDF35_D_HeliPilot_F",
            "I_EUDF35_D_HeliCrew_F",
            "I_EUDF35_D_Medic_F",
            "I_EUDF35_D_Soldier_A_F",
            "I_EUDF35_D_Soldier_AA_F",
            "I_EUDF35_D_Soldier_AAA_F",
            "I_EUDF35_D_Soldier_AAR_F",
            "I_EUDF35_D_Soldier_AAT_F",
            "I_EUDF35_D_Soldier_AR_F",
            "I_EUDF35_D_Soldier_AT_F",
            "I_EUDF35_D_Soldier_GL_F",
            "I_EUDF35_D_Soldier_LAT_F",
            "I_EUDF35_D_Soldier_M_F",
            "I_EUDF35_D_Soldier_SL_F",
            "I_EUDF35_D_Soldier_TL_F",
            "I_EUDF35_D_Officer_F",
            "I_EUDF35_D_Soldier_Repair_F",
            "I_EUDF35_D_Soldier_UAV_F",
            "I_EUDF35_D_Soldier_Unarmed_F",
            "I_EUDF35_D_Survivor_F",
            "I_EUDF35_D_support_MG_F",
            "I_EUDF35_D_support_GMG_F",
            "I_EUDF35_D_support_AMG_F",
            "I_EUDF35_D_Support_Mort_F",
            "I_EUDF35_D_Support_AMort_F",
            "I_EUDF35_D_soldier_UAV_06_F",
            "I_EUDF35_D_soldier_UAV_06_medical_F",
            "I_EUDF35_D_support_AHMG_F",
            "I_EUDF35_D_support_AGMG_F",
            "I_EUDF35_D_Soldier_PG_F",
            "I_EUDF35_D_Soldier_RadioOperator_F",
            "I_EUDF35_D_Fighter_Pilot_F",
            "I_EUDF35_D_HeavyGunner_F",
            "I_EUDF35_D_Soldier_Mine_F",
            "I_EUDF35_D_Sharpshooter_F",
            "I_EUDF35_D_Soldier_AMG_F",
            "I_EUDF35_D_Soldier_ExpAT_F",

            "I_EUDF35_D_Recon_F",
            "I_EUDF35_D_Recon_LAT_F",
            "I_EUDF35_D_Recon_AR_F",
            "I_EUDF35_D_Recon_GL_F",
            "I_EUDF35_D_Recon_JTAC_F",
            "I_EUDF35_D_Recon_Medic_F",
            "I_EUDF35_D_Recon_M_F",
            "I_EUDF35_D_Recon_Exp_F",
            "I_EUDF35_D_Recon_TL_F",
            "I_EUDF35_D_Recon_Designator_F",
            "I_EUDF35_D_Recon_UAV_F",
            "I_EUDF35_D_Recon_Sharpshooter_F",

            "I_EUDF35_D_Sniper_F",
            "I_EUDF35_D_Spotter_F",

            "I_EUDF35_D_DA_F",
            "I_EUDF35_D_DA_LAT_F",
            "I_EUDF35_D_DA_AR_F",
            "I_EUDF35_D_DA_GL_F",
            "I_EUDF35_D_DA_JTAC_F",
            "I_EUDF35_D_DA_Medic_F",
            "I_EUDF35_D_DA_M_F",
            "I_EUDF35_D_DA_Exp_F",
            "I_EUDF35_D_DA_TL_F",
            "I_EUDF35_D_DA_Designator_F",
            "I_EUDF35_D_DA_UAV_F",
            "I_EUDF35_D_DA_Sharpshooter_F",
            "I_EUDF35_D_DA_Breacher_F",
            
            "I_EUDF35_D_Diver_F",
            "I_EUDF35_D_Diver_Exp_F",
            "I_EUDF35_D_Diver_TL_F",

            "I_EUDF35_Officer_Parade_F",
            "I_EUDF35_Officer_Parade_Veteran_F",
            "I_EUDF35_Soldier_MP_F",
            "I_EUDF35_A_Soldier_MP_F",
            "I_EUDF35_D_Soldier_MP_F",
            "B_EUDF35_Soldier_F",
            "B_EUDF35_Soldier_lite_F",
            "B_EUDF35_Crew_F",
            "B_EUDF35_Engineer_F",
            "B_EUDF35_Soldier_Exp_F",
            "B_EUDF35_Pilot_F",
            "B_EUDF35_HeliPilot_F",
            "B_EUDF35_HeliCrew_F",
            "B_EUDF35_Medic_F",
            "B_EUDF35_Soldier_A_F",
            "B_EUDF35_Soldier_AA_F",
            "B_EUDF35_Soldier_AAA_F",
            "B_EUDF35_Soldier_AAR_F",
            "B_EUDF35_Soldier_AAT_F",
            "B_EUDF35_Soldier_AR_F",
            "B_EUDF35_Soldier_AT_F",
            "B_EUDF35_Soldier_GL_F",
            "B_EUDF35_Soldier_LAT_F",
            "B_EUDF35_Soldier_M_F",
            "B_EUDF35_Soldier_SL_F",
            "B_EUDF35_Soldier_TL_F",
            "B_EUDF35_Officer_F",
            "B_EUDF35_Soldier_Repair_F",
            "B_EUDF35_Soldier_UAV_F",
            "B_EUDF35_Soldier_Unarmed_F",
            "B_EUDF35_Survivor_F",
            "B_EUDF35_support_MG_F",
            "B_EUDF35_support_GMG_F",
            "B_EUDF35_support_AMG_F",
            "B_EUDF35_Support_Mort_F",
            "B_EUDF35_Support_AMort_F",
            "B_EUDF35_soldier_UAV_06_F",
            "B_EUDF35_soldier_UAV_06_medical_F",
            "B_EUDF35_support_AHMG_F",
            "B_EUDF35_support_AGMG_F",
            "B_EUDF35_Soldier_PG_F",
            "B_EUDF35_Soldier_RadioOperator_F",
            "B_EUDF35_Fighter_Pilot_F",
            "B_EUDF35_HeavyGunner_F",
            "B_EUDF35_Soldier_Mine_F",
            "B_EUDF35_Sharpshooter_F",
            "B_EUDF35_Soldier_AMG_F",
            "B_EUDF35_Soldier_ExpAT_F",

            "B_EUDF35_Recon_F",
            "B_EUDF35_Recon_LAT_F",
            "B_EUDF35_Recon_AR_F",
            "B_EUDF35_Recon_GL_F",
            "B_EUDF35_Recon_JTAC_F",
            "B_EUDF35_Recon_Medic_F",
            "B_EUDF35_Recon_M_F",
            "B_EUDF35_Recon_Exp_F",
            "B_EUDF35_Recon_TL_F",
            "B_EUDF35_Recon_Designator_F",
            "B_EUDF35_Recon_UAV_F",
            "B_EUDF35_Recon_Sharpshooter_F",

            "B_EUDF35_Sniper_F",
            "B_EUDF35_Spotter_F",

            "B_EUDF35_DA_F",
            "B_EUDF35_DA_LAT_F",
            "B_EUDF35_DA_AR_F",
            "B_EUDF35_DA_GL_F",
            "B_EUDF35_DA_JTAC_F",
            "B_EUDF35_DA_Medic_F",
            "B_EUDF35_DA_M_F",
            "B_EUDF35_DA_Exp_F",
            "B_EUDF35_DA_TL_F",
            "B_EUDF35_DA_Designator_F",
            "B_EUDF35_DA_UAV_F",
            "B_EUDF35_DA_Sharpshooter_F",
            "B_EUDF35_DA_Breacher_F",
            
            "B_EUDF35_Diver_F",
            "B_EUDF35_Diver_Exp_F",
            "B_EUDF35_Diver_TL_F",


            "B_EUDF35_A_Soldier_F",
            "B_EUDF35_A_Soldier_lite_F",
            "B_EUDF35_A_Crew_F",
            "B_EUDF35_A_Engineer_F",
            "B_EUDF35_A_Soldier_Exp_F",
            "B_EUDF35_A_Pilot_F",
            "B_EUDF35_A_HeliPilot_F",
            "B_EUDF35_A_HeliCrew_F",
            "B_EUDF35_A_Medic_F",
            "B_EUDF35_A_Soldier_A_F",
            "B_EUDF35_A_Soldier_AA_F",
            "B_EUDF35_A_Soldier_AAA_F",
            "B_EUDF35_A_Soldier_AAR_F",
            "B_EUDF35_A_Soldier_AAT_F",
            "B_EUDF35_A_Soldier_AR_F",
            "B_EUDF35_A_Soldier_AT_F",
            "B_EUDF35_A_Soldier_GL_F",
            "B_EUDF35_A_Soldier_LAT_F",
            "B_EUDF35_A_Soldier_M_F",
            "B_EUDF35_A_Soldier_SL_F",
            "B_EUDF35_A_Soldier_TL_F",
            "B_EUDF35_A_Officer_F",
            "B_EUDF35_A_Soldier_Repair_F",
            "B_EUDF35_A_Soldier_UAV_F",
            "B_EUDF35_A_Soldier_Unarmed_F",
            "B_EUDF35_A_Survivor_F",
            "B_EUDF35_A_support_MG_F",
            "B_EUDF35_A_support_GMG_F",
            "B_EUDF35_A_support_AMG_F",
            "B_EUDF35_A_Support_Mort_F",
            "B_EUDF35_A_Support_AMort_F",
            "B_EUDF35_A_soldier_UAV_06_F",
            "B_EUDF35_A_soldier_UAV_06_medical_F",
            "B_EUDF35_A_support_AHMG_F",
            "B_EUDF35_A_support_AGMG_F",
            "B_EUDF35_A_Soldier_PG_F",
            "B_EUDF35_A_Soldier_RadioOperator_F",
            "B_EUDF35_A_Fighter_Pilot_F",
            "B_EUDF35_A_HeavyGunner_F",
            "B_EUDF35_A_Soldier_Mine_F",
            "B_EUDF35_A_Sharpshooter_F",
            "B_EUDF35_A_Soldier_AMG_F",
            "B_EUDF35_A_Soldier_ExpAT_F",

            "B_EUDF35_A_Recon_F",
            "B_EUDF35_A_Recon_LAT_F",
            "B_EUDF35_A_Recon_AR_F",
            "B_EUDF35_A_Recon_GL_F",
            "B_EUDF35_A_Recon_JTAC_F",
            "B_EUDF35_A_Recon_Medic_F",
            "B_EUDF35_A_Recon_M_F",
            "B_EUDF35_A_Recon_Exp_F",
            "B_EUDF35_A_Recon_TL_F",
            "B_EUDF35_A_Recon_Designator_F",
            "B_EUDF35_A_Recon_UAV_F",
            "B_EUDF35_A_Recon_Sharpshooter_F",

            "B_EUDF35_A_Sniper_F",
            "B_EUDF35_A_Spotter_F",

            "B_EUDF35_A_DA_F",
            "B_EUDF35_A_DA_LAT_F",
            "B_EUDF35_A_DA_AR_F",
            "B_EUDF35_A_DA_GL_F",
            "B_EUDF35_A_DA_JTAC_F",
            "B_EUDF35_A_DA_Medic_F",
            "B_EUDF35_A_DA_M_F",
            "B_EUDF35_A_DA_Exp_F",
            "B_EUDF35_A_DA_TL_F",
            "B_EUDF35_A_DA_Designator_F",
            "B_EUDF35_A_DA_UAV_F",
            "B_EUDF35_A_DA_Sharpshooter_F",
            "B_EUDF35_A_DA_Breacher_F",
            
            "B_EUDF35_A_Diver_F",
            "B_EUDF35_A_Diver_Exp_F",
            "B_EUDF35_A_Diver_TL_F",

            "B_EUDF35_D_Soldier_F",
            "B_EUDF35_D_Soldier_lite_F",
            "B_EUDF35_D_Crew_F",
            "B_EUDF35_D_Engineer_F",
            "B_EUDF35_D_Soldier_Exp_F",
            "B_EUDF35_D_Pilot_F",
            "B_EUDF35_D_HeliPilot_F",
            "B_EUDF35_D_HeliCrew_F",
            "B_EUDF35_D_Medic_F",
            "B_EUDF35_D_Soldier_A_F",
            "B_EUDF35_D_Soldier_AA_F",
            "B_EUDF35_D_Soldier_AAA_F",
            "B_EUDF35_D_Soldier_AAR_F",
            "B_EUDF35_D_Soldier_AAT_F",
            "B_EUDF35_D_Soldier_AR_F",
            "B_EUDF35_D_Soldier_AT_F",
            "B_EUDF35_D_Soldier_GL_F",
            "B_EUDF35_D_Soldier_LAT_F",
            "B_EUDF35_D_Soldier_M_F",
            "B_EUDF35_D_Soldier_SL_F",
            "B_EUDF35_D_Soldier_TL_F",
            "B_EUDF35_D_Officer_F",
            "B_EUDF35_D_Soldier_Repair_F",
            "B_EUDF35_D_Soldier_UAV_F",
            "B_EUDF35_D_Soldier_Unarmed_F",
            "B_EUDF35_D_Survivor_F",
            "B_EUDF35_D_support_MG_F",
            "B_EUDF35_D_support_GMG_F",
            "B_EUDF35_D_support_AMG_F",
            "B_EUDF35_D_Support_Mort_F",
            "B_EUDF35_D_Support_AMort_F",
            "B_EUDF35_D_soldier_UAV_06_F",
            "B_EUDF35_D_soldier_UAV_06_medical_F",
            "B_EUDF35_D_support_AHMG_F",
            "B_EUDF35_D_support_AGMG_F",
            "B_EUDF35_D_Soldier_PG_F",
            "B_EUDF35_D_Soldier_RadioOperator_F",
            "B_EUDF35_D_Fighter_Pilot_F",
            "B_EUDF35_D_HeavyGunner_F",
            "B_EUDF35_D_Soldier_Mine_F",
            "B_EUDF35_D_Sharpshooter_F",
            "B_EUDF35_D_Soldier_AMG_F",
            "B_EUDF35_D_Soldier_ExpAT_F",

            "B_EUDF35_D_Recon_F",
            "B_EUDF35_D_Recon_LAT_F",
            "B_EUDF35_D_Recon_AR_F",
            "B_EUDF35_D_Recon_GL_F",
            "B_EUDF35_D_Recon_JTAC_F",
            "B_EUDF35_D_Recon_Medic_F",
            "B_EUDF35_D_Recon_M_F",
            "B_EUDF35_D_Recon_Exp_F",
            "B_EUDF35_D_Recon_TL_F",
            "B_EUDF35_D_Recon_Designator_F",
            "B_EUDF35_D_Recon_UAV_F",
            "B_EUDF35_D_Recon_Sharpshooter_F",

            "B_EUDF35_D_Sniper_F",
            "B_EUDF35_D_Spotter_F",

            "B_EUDF35_D_DA_F",
            "B_EUDF35_D_DA_LAT_F",
            "B_EUDF35_D_DA_AR_F",
            "B_EUDF35_D_DA_GL_F",
            "B_EUDF35_D_DA_JTAC_F",
            "B_EUDF35_D_DA_Medic_F",
            "B_EUDF35_D_DA_M_F",
            "B_EUDF35_D_DA_Exp_F",
            "B_EUDF35_D_DA_TL_F",
            "B_EUDF35_D_DA_Designator_F",
            "B_EUDF35_D_DA_UAV_F",
            "B_EUDF35_D_DA_Sharpshooter_F",
            "B_EUDF35_D_DA_Breacher_F",
            
            "B_EUDF35_D_Diver_F",
            "B_EUDF35_D_Diver_Exp_F",
            "B_EUDF35_D_Diver_TL_F",

            "B_EUDF35_Officer_Parade_F",
            "B_EUDF35_Officer_Parade_Veteran_F",
            "B_EUDF35_Soldier_MP_F",
            "B_EUDF35_A_Soldier_MP_F",
            "B_EUDF35_D_Soldier_MP_F",
            "O_EUDF35_Soldier_F",
            "O_EUDF35_Soldier_lite_F",
            "O_EUDF35_Crew_F",
            "O_EUDF35_Engineer_F",
            "O_EUDF35_Soldier_Exp_F",
            "O_EUDF35_Pilot_F",
            "O_EUDF35_HeliPilot_F",
            "O_EUDF35_HeliCrew_F",
            "O_EUDF35_Medic_F",
            "O_EUDF35_Soldier_A_F",
            "O_EUDF35_Soldier_AA_F",
            "O_EUDF35_Soldier_AAA_F",
            "O_EUDF35_Soldier_AAR_F",
            "O_EUDF35_Soldier_AAT_F",
            "O_EUDF35_Soldier_AR_F",
            "O_EUDF35_Soldier_AT_F",
            "O_EUDF35_Soldier_GL_F",
            "O_EUDF35_Soldier_LAT_F",
            "O_EUDF35_Soldier_M_F",
            "O_EUDF35_Soldier_SL_F",
            "O_EUDF35_Soldier_TL_F",
            "O_EUDF35_Officer_F",
            "O_EUDF35_Soldier_Repair_F",
            "O_EUDF35_Soldier_UAV_F",
            "O_EUDF35_Soldier_Unarmed_F",
            "O_EUDF35_Survivor_F",
            "O_EUDF35_support_MG_F",
            "O_EUDF35_support_GMG_F",
            "O_EUDF35_support_AMG_F",
            "O_EUDF35_Support_Mort_F",
            "O_EUDF35_Support_AMort_F",
            "O_EUDF35_soldier_UAV_06_F",
            "O_EUDF35_soldier_UAV_06_medical_F",
            "O_EUDF35_support_AHMG_F",
            "O_EUDF35_support_AGMG_F",
            "O_EUDF35_Soldier_PG_F",
            "O_EUDF35_Soldier_RadioOperator_F",
            "O_EUDF35_Fighter_Pilot_F",
            "O_EUDF35_HeavyGunner_F",
            "O_EUDF35_Soldier_Mine_F",
            "O_EUDF35_Sharpshooter_F",
            "O_EUDF35_Soldier_AMG_F",
            "O_EUDF35_Soldier_ExpAT_F",

            "O_EUDF35_Recon_F",
            "O_EUDF35_Recon_LAT_F",
            "O_EUDF35_Recon_AR_F",
            "O_EUDF35_Recon_GL_F",
            "O_EUDF35_Recon_JTAC_F",
            "O_EUDF35_Recon_Medic_F",
            "O_EUDF35_Recon_M_F",
            "O_EUDF35_Recon_Exp_F",
            "O_EUDF35_Recon_TL_F",
            "O_EUDF35_Recon_Designator_F",
            "O_EUDF35_Recon_UAV_F",
            "O_EUDF35_Recon_Sharpshooter_F",

            "O_EUDF35_Sniper_F",
            "O_EUDF35_Spotter_F",

            "O_EUDF35_DA_F",
            "O_EUDF35_DA_LAT_F",
            "O_EUDF35_DA_AR_F",
            "O_EUDF35_DA_GL_F",
            "O_EUDF35_DA_JTAC_F",
            "O_EUDF35_DA_Medic_F",
            "O_EUDF35_DA_M_F",
            "O_EUDF35_DA_Exp_F",
            "O_EUDF35_DA_TL_F",
            "O_EUDF35_DA_Designator_F",
            "O_EUDF35_DA_UAV_F",
            "O_EUDF35_DA_Sharpshooter_F",
            "O_EUDF35_DA_Breacher_F",
            
            "O_EUDF35_Diver_F",
            "O_EUDF35_Diver_Exp_F",
            "O_EUDF35_Diver_TL_F",


            "O_EUDF35_A_Soldier_F",
            "O_EUDF35_A_Soldier_lite_F",
            "O_EUDF35_A_Crew_F",
            "O_EUDF35_A_Engineer_F",
            "O_EUDF35_A_Soldier_Exp_F",
            "O_EUDF35_A_Pilot_F",
            "O_EUDF35_A_HeliPilot_F",
            "O_EUDF35_A_HeliCrew_F",
            "O_EUDF35_A_Medic_F",
            "O_EUDF35_A_Soldier_A_F",
            "O_EUDF35_A_Soldier_AA_F",
            "O_EUDF35_A_Soldier_AAA_F",
            "O_EUDF35_A_Soldier_AAR_F",
            "O_EUDF35_A_Soldier_AAT_F",
            "O_EUDF35_A_Soldier_AR_F",
            "O_EUDF35_A_Soldier_AT_F",
            "O_EUDF35_A_Soldier_GL_F",
            "O_EUDF35_A_Soldier_LAT_F",
            "O_EUDF35_A_Soldier_M_F",
            "O_EUDF35_A_Soldier_SL_F",
            "O_EUDF35_A_Soldier_TL_F",
            "O_EUDF35_A_Officer_F",
            "O_EUDF35_A_Soldier_Repair_F",
            "O_EUDF35_A_Soldier_UAV_F",
            "O_EUDF35_A_Soldier_Unarmed_F",
            "O_EUDF35_A_Survivor_F",
            "O_EUDF35_A_support_MG_F",
            "O_EUDF35_A_support_GMG_F",
            "O_EUDF35_A_support_AMG_F",
            "O_EUDF35_A_Support_Mort_F",
            "O_EUDF35_A_Support_AMort_F",
            "O_EUDF35_A_soldier_UAV_06_F",
            "O_EUDF35_A_soldier_UAV_06_medical_F",
            "O_EUDF35_A_support_AHMG_F",
            "O_EUDF35_A_support_AGMG_F",
            "O_EUDF35_A_Soldier_PG_F",
            "O_EUDF35_A_Soldier_RadioOperator_F",
            "O_EUDF35_A_Fighter_Pilot_F",
            "O_EUDF35_A_HeavyGunner_F",
            "O_EUDF35_A_Soldier_Mine_F",
            "O_EUDF35_A_Sharpshooter_F",
            "O_EUDF35_A_Soldier_AMG_F",
            "O_EUDF35_A_Soldier_ExpAT_F",

            "O_EUDF35_A_Recon_F",
            "O_EUDF35_A_Recon_LAT_F",
            "O_EUDF35_A_Recon_AR_F",
            "O_EUDF35_A_Recon_GL_F",
            "O_EUDF35_A_Recon_JTAC_F",
            "O_EUDF35_A_Recon_Medic_F",
            "O_EUDF35_A_Recon_M_F",
            "O_EUDF35_A_Recon_Exp_F",
            "O_EUDF35_A_Recon_TL_F",
            "O_EUDF35_A_Recon_Designator_F",
            "O_EUDF35_A_Recon_UAV_F",
            "O_EUDF35_A_Recon_Sharpshooter_F",

            "O_EUDF35_A_Sniper_F",
            "O_EUDF35_A_Spotter_F",

            "O_EUDF35_A_DA_F",
            "O_EUDF35_A_DA_LAT_F",
            "O_EUDF35_A_DA_AR_F",
            "O_EUDF35_A_DA_GL_F",
            "O_EUDF35_A_DA_JTAC_F",
            "O_EUDF35_A_DA_Medic_F",
            "O_EUDF35_A_DA_M_F",
            "O_EUDF35_A_DA_Exp_F",
            "O_EUDF35_A_DA_TL_F",
            "O_EUDF35_A_DA_Designator_F",
            "O_EUDF35_A_DA_UAV_F",
            "O_EUDF35_A_DA_Sharpshooter_F",
            "O_EUDF35_A_DA_Breacher_F",
            
            "O_EUDF35_A_Diver_F",
            "O_EUDF35_A_Diver_Exp_F",
            "O_EUDF35_A_Diver_TL_F",

            "O_EUDF35_D_Soldier_F",
            "O_EUDF35_D_Soldier_lite_F",
            "O_EUDF35_D_Crew_F",
            "O_EUDF35_D_Engineer_F",
            "O_EUDF35_D_Soldier_Exp_F",
            "O_EUDF35_D_Pilot_F",
            "O_EUDF35_D_HeliPilot_F",
            "O_EUDF35_D_HeliCrew_F",
            "O_EUDF35_D_Medic_F",
            "O_EUDF35_D_Soldier_A_F",
            "O_EUDF35_D_Soldier_AA_F",
            "O_EUDF35_D_Soldier_AAA_F",
            "O_EUDF35_D_Soldier_AAR_F",
            "O_EUDF35_D_Soldier_AAT_F",
            "O_EUDF35_D_Soldier_AR_F",
            "O_EUDF35_D_Soldier_AT_F",
            "O_EUDF35_D_Soldier_GL_F",
            "O_EUDF35_D_Soldier_LAT_F",
            "O_EUDF35_D_Soldier_M_F",
            "O_EUDF35_D_Soldier_SL_F",
            "O_EUDF35_D_Soldier_TL_F",
            "O_EUDF35_D_Officer_F",
            "O_EUDF35_D_Soldier_Repair_F",
            "O_EUDF35_D_Soldier_UAV_F",
            "O_EUDF35_D_Soldier_Unarmed_F",
            "O_EUDF35_D_Survivor_F",
            "O_EUDF35_D_support_MG_F",
            "O_EUDF35_D_support_GMG_F",
            "O_EUDF35_D_support_AMG_F",
            "O_EUDF35_D_Support_Mort_F",
            "O_EUDF35_D_Support_AMort_F",
            "O_EUDF35_D_soldier_UAV_06_F",
            "O_EUDF35_D_soldier_UAV_06_medical_F",
            "O_EUDF35_D_support_AHMG_F",
            "O_EUDF35_D_support_AGMG_F",
            "O_EUDF35_D_Soldier_PG_F",
            "O_EUDF35_D_Soldier_RadioOperator_F",
            "O_EUDF35_D_Fighter_Pilot_F",
            "O_EUDF35_D_HeavyGunner_F",
            "O_EUDF35_D_Soldier_Mine_F",
            "O_EUDF35_D_Sharpshooter_F",
            "O_EUDF35_D_Soldier_AMG_F",
            "O_EUDF35_D_Soldier_ExpAT_F",

            "O_EUDF35_D_Recon_F",
            "O_EUDF35_D_Recon_LAT_F",
            "O_EUDF35_D_Recon_AR_F",
            "O_EUDF35_D_Recon_GL_F",
            "O_EUDF35_D_Recon_JTAC_F",
            "O_EUDF35_D_Recon_Medic_F",
            "O_EUDF35_D_Recon_M_F",
            "O_EUDF35_D_Recon_Exp_F",
            "O_EUDF35_D_Recon_TL_F",
            "O_EUDF35_D_Recon_Designator_F",
            "O_EUDF35_D_Recon_UAV_F",
            "O_EUDF35_D_Recon_Sharpshooter_F",

            "O_EUDF35_D_Sniper_F",
            "O_EUDF35_D_Spotter_F",

            "O_EUDF35_D_DA_F",
            "O_EUDF35_D_DA_LAT_F",
            "O_EUDF35_D_DA_AR_F",
            "O_EUDF35_D_DA_GL_F",
            "O_EUDF35_D_DA_JTAC_F",
            "O_EUDF35_D_DA_Medic_F",
            "O_EUDF35_D_DA_M_F",
            "O_EUDF35_D_DA_Exp_F",
            "O_EUDF35_D_DA_TL_F",
            "O_EUDF35_D_DA_Designator_F",
            "O_EUDF35_D_DA_UAV_F",
            "O_EUDF35_D_DA_Sharpshooter_F",
            "O_EUDF35_D_DA_Breacher_F",
            
            "O_EUDF35_D_Diver_F",
            "O_EUDF35_D_Diver_Exp_F",
            "O_EUDF35_D_Diver_TL_F",

            "O_EUDF35_Officer_Parade_F",
            "O_EUDF35_Officer_Parade_Veteran_F",
            "O_EUDF35_Soldier_MP_F",
            "O_EUDF35_A_Soldier_MP_F",
            "O_EUDF35_D_Soldier_MP_F",

            "Item_I_CombatUniform_EUDF35_Woodland",
            "Item_I_EUDF35_OfficerUniform_Woodland",
            "Item_I_EUDF35_OfficerUniform_Arid",
            "Item_I_EUDF35_HeliPilotCoveralls_Woodland",
            "Item_I_EUDF35_HeliPilotCoveralls_Arid",
            "Item_I_EUDF35_Gorka_Woodland",
            "Item_I_EUDF35_GhillieSuit_Woodland",
            "Item_I_EUDF35_GhillieSuit_Woodland_1",
            "Item_I_CombatUniform_Recon_EUDF35_Woodland",
            "Item_I_EUDF35_Gorka_Arctic",
            "Item_I_CombatUniform_EUDF35_Arid",
            "Item_I_CombatUniform_EUDF35_Arid_Shortsleeve",
            "Item_I_CombatUniform_EUDF35_Arid_Tanktop",
            "Item_I_CombatUniform_Recon_EUDF35_Arid",
            "Item_I_CombatUniform_Recon_EUDF35_Arid_Shortsleeve",
            "Item_I_CombatUniform_Recon_EUDF35_Arid_Tanktop",

            "Item_I_CombatUniform_EUDF35_Woodland_mp",
            "Item_I_CombatUniform_EUDF35_Arid_Shortsleeve_mp",

            "Item_I_ParadeUniform_01_EUDF",
            "Item_I_ParadeUniform_01_EUDF_decorated",

            "Item_I_EUDF35_Wetsuit",
            "Item_I_EUDF35_FullGhillieSuit_Woodland",
            "Item_I_EUDF35_pilotCoveralls",

            "Vest_V_CarrierRigKBT_01_vest_EUDF35_Woodland",
            "Vest_V_CarrierRigKBT_01_EUDF35_Woodland",
            "Vest_V_CarrierRigKBT_01_heavy_EUDF35_Woodland",

            "Vest_V_CarrierRigKBT_01_vest_EUDF35_Woodland_1",
            "Vest_V_CarrierRigKBT_01_EUDF35_Woodland_1",
            "Vest_V_CarrierRigKBT_01_heavy_EUDF35_Woodland_1",

            "Vest_V_Chestrig_EUDF35_Woodland",
            "Vest_V_Chestrig_EUDF35_Woodland_1",

            "Vest_V_CarrierRigKBT_01_vest_EUDF35_Arctic",
            "Vest_V_CarrierRigKBT_01_EUDF35_Arctic",
            "Vest_V_CarrierRigKBT_01_heavy_EUDF35_Arctic",

            "Vest_V_Chestrig_EUDF35_Arctic",

            "Vest_V_CarrierRigKBT_01_vest_EUDF35_Arid",
            "Vest_V_CarrierRigKBT_01_EUDF35_Arid",
            "Vest_V_CarrierRigKBT_01_heavy_EUDF35_Arid",

            "Vest_V_CarrierRigKBT_01_vest_EUDF35_Arid_1",
            "Vest_V_CarrierRigKBT_01_EUDF35_Arid_1",
            "Vest_V_CarrierRigKBT_01_heavy_EUDF35_Arid_1",

            "Vest_V_CarrierRigKBT_01_vest_EUDF35_mp",
            "Vest_V_CarrierRigKBT_01_EUDF35_mp",
            "Vest_V_CarrierRigKBT_01_heavy_EUDF35_mp",

            "Vest_V_Chestrig_EUDF35_Arid",
            "Vest_V_Chestrig_EUDF35_Arid_1",

            "Headgear_H_HelmetB_camo_EUDF35_woodland",
            "Headgear_H_HelmetCrew_EUDF35_woodland",
            "Headgear_H_Cap_EUDF35_woodland",
            "Headgear_H_Cap_EUDF35_woodland_hs",
            "Headgear_H_Cap_EUDF35_woodland_1",
            "Headgear_H_Cap_EUDF35_woodland_1_hs",
            "Headgear_H_MilCap_EUDF35_woodland",
            "Headgear_H_MilCap_EUDF35_woodland_1",
            "Headgear_H_Booniehat_EUDF35_woodland",
            "Headgear_H_Booniehat_EUDF35_woodland_hs",
            "Headgear_H_Booniehat_EUDF35_woodland_1",
            "Headgear_H_Booniehat_EUDF35_woodland_1_hs",
            "Headgear_H_Watchcap_EUDF35_woodland",
            "Headgear_H_Watchcap_EUDF35_woodland_1",
            "Headgear_H_HelmetHBK_headset_EUDF35_woodland_1",
            "Headgear_H_HelmetHBK_headset_EUDF35_arctic",
            "Headgear_H_HelmetHBK_headset_EUDF35_arid_1",
            "Headgear_H_HelmetB_light_EUDF35_woodland",
            "Headgear_H_HelmetB_light_EUDF35_woodland_1",
            "Headgear_H_HelmetB_light_EUDF35_arctic",
            "Headgear_H_HelmetB_light_EUDF35_arid",
            "Headgear_H_HelmetB_light_EUDF35_arid_1",
            "Headgear_H_Cap_EUDF35_arctic",
            "Headgear_H_Cap_EUDF35_arctic_hs",
            "Headgear_H_Watchcap_EUDF35_arctic",
            "Headgear_H_Beret_gen_EUDF35",

            "Headgear_H_Beret_gen_EUDF35_mp",
            "Headgear_H_ParadeDressCap_01_EUDF_F",

            "B_TacticalPack_EUDF35_woodland",
            "B_TacticalPack_EUDF35_woodland_1",
            "B_Carryall_EUDF35_woodland",
            "B_Carryall_EUDF35_woodland_1",
            "B_AssaultPack_EUDF35_woodland",
            "B_AssaultPack_EUDF35_woodland_1",
            "B_Bergen_EUDF35_woodland",
            "B_Bergen_EUDF35_woodland_1",
            "B_RadioBag_01_EUDF35_woodland",
            "B_RadioBag_01_EUDF35_woodland_1",

            "I_EUDF35_Static_Designator_01_weapon_F",
            "I_EUDF35_UAV_01_backpack_F",
            "I_EUDF35_UAV_06_backpack_F",
            "I_EUDF35_UAV_06_medical_backpack_F",
            "I_EUDF35_HMG_01_A_weapon_F",
            "I_EUDF35_GMG_01_A_weapon_F",

            "B_EUDF35_Static_Designator_01_weapon_F",
            "B_EUDF35_UAV_01_backpack_F",
            "B_EUDF35_UAV_06_backpack_F",
            "B_EUDF35_UAV_06_medical_backpack_F",
            "B_EUDF35_HMG_01_A_weapon_F",
            "B_EUDF35_GMG_01_A_weapon_F",

            "O_EUDF35_Static_Designator_01_weapon_F",
            "O_EUDF35_UAV_01_backpack_F",
            "O_EUDF35_UAV_06_backpack_F",
            "O_EUDF35_UAV_06_medical_backpack_F",
            "O_EUDF35_HMG_01_A_weapon_F",
            "O_EUDF35_GMG_01_A_weapon_F",

            "B_TacticalPack_EUDF35_arctic",
            "B_Carryall_EUDF35_arctic",
            "B_AssaultPack_EUDF35_arctic",
            "B_Bergen_EUDF35_arctic",
            "B_RadioBag_01_EUDF35_arctic",
            
            "I_EUDF35_A_Static_Designator_01_weapon_F",
            "I_EUDF35_A_UAV_06_backpack_F",
            "I_EUDF35_A_UAV_01_backpack_F",
            "I_EUDF35_A_UAV_06_medical_backpack_F",
            
            "B_EUDF35_A_Static_Designator_01_weapon_F",
            "B_EUDF35_A_UAV_06_backpack_F",
            "B_EUDF35_A_UAV_01_backpack_F",
            "B_EUDF35_A_UAV_06_medical_backpack_F",
            
            "O_EUDF35_A_Static_Designator_01_weapon_F",
            "O_EUDF35_A_UAV_06_backpack_F",
            "O_EUDF35_A_UAV_01_backpack_F",
            "O_EUDF35_A_UAV_06_medical_backpack_F",

            "B_TacticalPack_EUDF35_arid",
            "B_TacticalPack_EUDF35_arid_1",
            "B_Carryall_EUDF35_arid",
            "B_Carryall_EUDF35_arid_1",
            "B_AssaultPack_EUDF35_arid",
            "B_AssaultPack_EUDF35_arid_1",
            "B_Bergen_EUDF35_arid",
            "B_Bergen_EUDF35_arid_1",
            "B_RadioBag_01_EUDF35_arid",
            "B_RadioBag_01_EUDF35_arid_1",
            
            "I_EUDF35_D_Static_Designator_01_weapon_F",
            "I_EUDF35_D_UAV_06_backpack_F",
            "I_EUDF35_D_UAV_01_backpack_F",
            "I_EUDF35_D_UAV_06_medical_backpack_F",
            
            "B_EUDF35_D_Static_Designator_01_weapon_F",
            "B_EUDF35_D_UAV_06_backpack_F",
            "B_EUDF35_D_UAV_01_backpack_F",
            "B_EUDF35_D_UAV_06_medical_backpack_F",
            
            "O_EUDF35_D_Static_Designator_01_weapon_F",
            "O_EUDF35_D_UAV_06_backpack_F",
            "O_EUDF35_D_UAV_01_backpack_F",
            "O_EUDF35_D_UAV_06_medical_backpack_F",

            "IND_EUDF35_F_AmmoBox",
            "IND_EUDF35_F_WeaponsBox",
            "IND_EUDF35_F_LaunchersBox",
            "IND_EUDF35_F_UniformBox",
            "IND_EUDF35_F_SupportBox",
            "IND_EUDF35_F_SupplyBox",

            "IND_EUDF35_A_F_AmmoBox",
            "IND_EUDF35_A_F_WeaponsBox",
            "IND_EUDF35_A_F_LaunchersBox",
            "IND_EUDF35_A_F_UniformBox",
            "IND_EUDF35_A_F_SupportBox",
            "IND_EUDF35_A_F_SupplyBox",

            "IND_EUDF35_D_F_AmmoBox",
            "IND_EUDF35_D_F_WeaponsBox",
            "IND_EUDF35_D_F_LaunchersBox",
            "IND_EUDF35_D_F_UniformBox",
            "IND_EUDF35_D_F_SupportBox",
            "IND_EUDF35_D_F_SupplyBox"
        };
        weapons[]={
            "U_I_CombatUniform_EUDF35_Woodland",
            "U_I_EUDF35_OfficerUniform_Woodland",
            "U_I_EUDF35_OfficerUniform_Arid",
            "U_I_EUDF35_HeliPilotCoveralls_Woodland",
            "U_I_EUDF35_HeliPilotCoveralls_Arid",
            "U_I_EUDF35_Gorka_Woodland",
            "U_I_EUDF35_GhillieSuit_Woodland",
            "U_I_EUDF35_GhillieSuit_Woodland_1",
            "U_I_CombatUniform_Recon_EUDF35_Woodland",
            "U_I_EUDF35_Gorka_Arctic",
            "U_I_CombatUniform_EUDF35_Arid",
            "U_I_CombatUniform_EUDF35_Arid_Shortsleeve",
            "U_I_CombatUniform_EUDF35_Arid_Tanktop",
            "U_I_CombatUniform_Recon_EUDF35_Arid",
            "U_I_CombatUniform_Recon_EUDF35_Arid_Shortsleeve",
            "U_I_CombatUniform_Recon_EUDF35_Arid_Tanktop",

            "U_I_CombatUniform_EUDF35_Woodland_mp",
            "U_I_CombatUniform_EUDF35_Arid_Shortsleeve_mp",
            "U_I_ParadeUniform_01_EUDF",
            "U_I_ParadeUniform_01_EUDF_decorated",

            "U_I_EUDF35_Wetsuit",
            "U_I_EUDF35_FullGhillieSuit_Woodland",
            "U_I_EUDF35_pilotCoveralls",

            "H_HelmetB_camo_EUDF35_woodland",
            "H_HelmetCrew_EUDF35_woodland",
            "H_Cap_EUDF35_woodland",
            "H_Cap_EUDF35_woodland_1",
            "H_Cap_EUDF35_woodland_hs",
            "H_Cap_EUDF35_woodland_1_hs",
            "H_Beret_gen_EUDF35",
            "H_MilCap_EUDF35_woodland",
            "H_MilCap_EUDF35_woodland_1",
            "H_Booniehat_EUDF35_woodland",
            "H_Booniehat_EUDF35_woodland_1",
            "H_Booniehat_EUDF35_woodland_hs",
            "H_Booniehat_EUDF35_woodland_1_hs",
            "H_Watchcap_EUDF35_woodland",
            "H_Watchcap_EUDF35_woodland_1",
            "H_HelmetHBK_headset_EUDF35_woodland_1",
            "H_HelmetB_light_EUDF35_woodland",
            "H_HelmetB_light_EUDF35_woodland_1",

            "H_Beret_gen_EUDF35_mp",
            "H_ParadeDressCap_01_EUDF_F",

            "H_HelmetHBK_headset_EUDF35_arctic",
            "H_HelmetB_light_EUDF35_arctic",
            "H_Cap_EUDF35_arctic",
            "H_Cap_EUDF35_arctic_hs",
            "H_Watchcap_EUDF35_arctic",

            "H_HelmetHBK_headset_EUDF35_arid_1",
            "H_HelmetB_light_EUDF35_arid",
            "H_HelmetB_light_EUDF35_arid_1",
            "H_Cap_EUDF35_arid",
            "H_Cap_EUDF35_arid_hs",
            "H_Cap_EUDF35_arid_1",
            "H_Cap_EUDF35_arid_1_hs",
            "H_Cap_EUDF35_arid",
            "H_Cap_EUDF35_arid_1",
            "H_Cap_EUDF35_arid_hs",
            "H_Cap_EUDF35_arid_1_hs",
            "H_MilCap_EUDF35_arid",
            "H_MilCap_EUDF35_arid_1",
            "H_Booniehat_EUDF35_arid",
            "H_Booniehat_EUDF35_arid_1",
            "H_Booniehat_EUDF35_arid_hs",
            "H_Booniehat_EUDF35_arid_1_hs",

            "V_CarrierRigKBT_01_vest_EUDF35_Woodland",
            "V_CarrierRigKBT_01_EUDF35_Woodland",
            "V_CarrierRigKBT_01_heavy_EUDF35_Woodland",

            "V_CarrierRigKBT_01_vest_EUDF35_mp",
            "V_CarrierRigKBT_01_EUDF35_mp",
            "V_CarrierRigKBT_01_heavy_EUDF35_mp",

            "V_Chestrig_EUDF35_Woodland",
            "V_Chestrig_EUDF35_Woodland_1",

            "V_CarrierRigKBT_01_vest_EUDF35_Arctic",
            "V_CarrierRigKBT_01_EUDF35_Arctic",
            "V_CarrierRigKBT_01_heavy_EUDF35_Arctic",

            "V_Chestrig_EUDF35_Arctic",

            "V_CarrierRigKBT_01_vest_EUDF35_Arid",
            "V_CarrierRigKBT_01_EUDF35_Arid",
            "V_CarrierRigKBT_01_heavy_EUDF35_Arid",

            "V_CarrierRigKBT_01_vest_EUDF35_Arid_1",
            "V_CarrierRigKBT_01_EUDF35_Arid_1",
            "V_CarrierRigKBT_01_heavy_EUDF35_Arid_1",

            "V_Chestrig_EUDF35_Arid",
            "V_Chestrig_EUDF35_Arid_1"
        };
        
        version = VERSION;
    };
};

class cfgWeapons
{
    class InventoryItem_Base_F;
    class ItemCore;

    #include "cfgWeapons\uniformInventory.hpp"
    #include "cfgWeapons\headgear.hpp"
    #include "cfgWeapons\vests.hpp"
};

class CfgVehicles
{
    // BACKPACKS
    #include "CfgVehicles\backpacks\common\woodland\backpacks.hpp"
    #include "CfgVehicles\backpacks\common\arctic\backpacks.hpp"
    #include "CfgVehicles\backpacks\common\arid\backpacks.hpp"

    #include "CfgVehicles\backpacks\indep\woodland\backpacks_statics.hpp"
    #include "CfgVehicles\backpacks\indep\arctic\backpacks_statics.hpp"
    #include "CfgVehicles\backpacks\indep\arid\backpacks_statics.hpp"

    #include "CfgVehicles\backpacks\blufor\woodland\backpacks_statics.hpp"
    #include "CfgVehicles\backpacks\blufor\arctic\backpacks_statics.hpp"
    #include "CfgVehicles\backpacks\blufor\arid\backpacks_statics.hpp"

    #include "CfgVehicles\backpacks\opfor\woodland\backpacks_statics.hpp"
    #include "CfgVehicles\backpacks\opfor\arctic\backpacks_statics.hpp"
    #include "CfgVehicles\backpacks\opfor\arid\backpacks_statics.hpp"

    // INFANTRY
    class I_Soldier_base_F;
    #include "CfgVehicles\infantry\uniforms.hpp"

    #include "CfgVehicles\infantry\indep\woodland\infantry.hpp"
    #include "CfgVehicles\infantry\indep\woodland\recon.hpp"
    #include "CfgVehicles\infantry\indep\woodland\DA.hpp"
    #include "CfgVehicles\infantry\indep\woodland\snipers.hpp"
    #include "CfgVehicles\infantry\indep\woodland\divers.hpp"

    #include "CfgVehicles\infantry\indep\arctic\infantry.hpp"
    #include "CfgVehicles\infantry\indep\arctic\recon.hpp"
    #include "CfgVehicles\infantry\indep\arctic\DA.hpp"
    #include "CfgVehicles\infantry\indep\arctic\snipers.hpp"
    #include "CfgVehicles\infantry\indep\arctic\divers.hpp"

    #include "CfgVehicles\infantry\indep\arid\infantry.hpp"
    #include "CfgVehicles\infantry\indep\arid\recon.hpp"
    #include "CfgVehicles\infantry\indep\arid\DA.hpp"
    #include "CfgVehicles\infantry\indep\arid\snipers.hpp"
    #include "CfgVehicles\infantry\indep\arid\divers.hpp"

    #include "CfgVehicles\infantry\blufor\woodland\infantry.hpp"
    #include "CfgVehicles\infantry\blufor\woodland\recon.hpp"
    #include "CfgVehicles\infantry\blufor\woodland\DA.hpp"
    #include "CfgVehicles\infantry\blufor\woodland\snipers.hpp"
    #include "CfgVehicles\infantry\blufor\woodland\divers.hpp"

    #include "CfgVehicles\infantry\blufor\arctic\infantry.hpp"
    #include "CfgVehicles\infantry\blufor\arctic\recon.hpp"
    #include "CfgVehicles\infantry\blufor\arctic\DA.hpp"
    #include "CfgVehicles\infantry\blufor\arctic\snipers.hpp"
    #include "CfgVehicles\infantry\blufor\arctic\divers.hpp"

    #include "CfgVehicles\infantry\blufor\arid\infantry.hpp"
    #include "CfgVehicles\infantry\blufor\arid\recon.hpp"
    #include "CfgVehicles\infantry\blufor\arid\DA.hpp"
    #include "CfgVehicles\infantry\blufor\arid\snipers.hpp"
    #include "CfgVehicles\infantry\blufor\arid\divers.hpp"

    #include "CfgVehicles\infantry\opfor\woodland\infantry.hpp"
    #include "CfgVehicles\infantry\opfor\woodland\recon.hpp"
    #include "CfgVehicles\infantry\opfor\woodland\DA.hpp"
    #include "CfgVehicles\infantry\opfor\woodland\snipers.hpp"
    #include "CfgVehicles\infantry\opfor\woodland\divers.hpp"

    #include "CfgVehicles\infantry\opfor\arctic\infantry.hpp"
    #include "CfgVehicles\infantry\opfor\arctic\recon.hpp"
    #include "CfgVehicles\infantry\opfor\arctic\DA.hpp"
    #include "CfgVehicles\infantry\opfor\arctic\snipers.hpp"
    #include "CfgVehicles\infantry\opfor\arctic\divers.hpp"

    #include "CfgVehicles\infantry\opfor\arid\infantry.hpp"
    #include "CfgVehicles\infantry\opfor\arid\recon.hpp"
    #include "CfgVehicles\infantry\opfor\arid\DA.hpp"
    #include "CfgVehicles\infantry\opfor\arid\snipers.hpp"
    #include "CfgVehicles\infantry\opfor\arid\divers.hpp"

    // ITEMS
    class Item_Base_F;
    #include "CfgVehicles\items_uniforms.hpp"
    #include "CfgVehicles\items_vests.hpp"
    #include "CfgVehicles\items_headgear.hpp"

    // CRATES
    #include "CfgVehicles\crates\woodland\crates.hpp"
    #include "CfgVehicles\crates\arctic\crates.hpp"
    #include "CfgVehicles\crates\arid\crates.hpp"
};

#include "cfgGlasses.hpp"

class CfgUnitInsignia
{
    // class 111thID
    // {
    //     displayName = "111th Infantry Division";                                // Name displayed in Arsenal
    //     author = "Bohemia Interactive";                                         // Author displayed in Arsenal
    //     texture = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\111thID_ca.paa";          // Image path
    //     material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat"; // .rvmat path
    //     textureVehicle = "";                                                    // Does nothing, reserved for future use
    // };

    class EUDF35_EU
    {
        displayName = "EU";
        author = "kenoxite";
        texture = "\EUDF35_infantry_data_F\data\insignias\insignia_EU.paa";
        material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
        textureVehicle = "";
    };

    class EUDF35_EUDF
    {
        displayName = "EUDF";
        author = "kenoxite";
        texture = "\EUDF35_infantry_data_F\data\insignias\insignia_EUDF.paa";
        material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
        textureVehicle = "";
    };
};

class CfgWorlds
{
    class GenericNames
    {
        class EUDF35Men
        {
            class FirstNames
            {
                Abdul="Abdul";
                Adrian="Adrian";
                Ahmed="Ahmed";
                Aleksander="Aleksander";
                Alexandru="Alexandru";
                Andreas="Andreas";
                Andrei="Andrei";
                Andres="Andres";
                Antoine="Antoine";
                Antonio="Antonio";
                Anze="Anze";
                Artur="Artur";
                Axel="Axel";
                Bastian="Bastian";
                Bogdan="Bogdan";
                Boris="Boris";
                Carlos="Carlos";
                Chen="Chen";
                Christoph="Christoph";
                Cosmin="Cosmin";
                Daniel="Daniel";
                David="David";
                Dieter="Dieter";
                Dimitri="Dimitri";
                Dino="Dino";
                Erik="Erik";
                Fabian="Fabian";
                Felix="Felix";
                Ferenc="Ferenc";
                Francois="Francois";
                Friedrich="Friedrich";
                Gabriel="Gabriel";
                Georg="Georg";
                Giorgos="Giorgos";
                Guillaume="Guillaume";
                Hans="Hans";
                Henri="Henri";
                Hugo="Hugo";
                Ioan="Ioan";
                Ivan="Ivan";
                Jacques="Jacques";
                Jan="Jan";
                Jani="Jani";
                Janez="Janez";
                Janne="Janne";
                Janos="Janos";
                Jean="Jean";
                Jens="Jens";
                Joao="Joao";
                Johannes="Johannes";
                Jonas="Jonas";
                Jozef="Jozef";
                Jurgen="Jurgen";
                Karl="Karl";
                Klaus="Klaus";
                Konstantinos="Konstantinos";
                Lars="Lars";
                Lasse="Lasse";
                Luca="Luca";
                Ludwig="Ludwig";
                Lukas="Lukas";
                Manuel="Manuel";
                Marc="Marc";
                Marco="Marco";
                Mario="Mario";
                Markus="Markus";
                Martin="Martin";
                Mathieu="Mathieu";
                Mats="Mats";
                Matthias="Matthias";
                Max="Max";
                Michael="Michael";
                Michel="Michel";
                Mikael="Mikael";
                Mikel="Mikel";
                Miroslav="Miroslav";
                Nico="Nico";
                Nicolas="Nicolas";
                Niklas="Niklas";
                Nikos="Nikos";
                Oliver="Oliver";
                Oscar="Oscar";
                Otto="Otto";
                Patrick="Patrick";
                Paul="Paul";
                Pavel="Pavel";
                Peter="Peter";
                Petr="Petr";
                Philippe="Philippe";
                Pierre="Pierre";
                Piotr="Piotr";
                Rajesh="Rajesh";
                Robert="Robert";
                Roman="Roman";
                Samuel="Samuel";
                Sebastian="Sebastian";
                Simon="Simon";
                Stefan="Stefan";
                Thomas="Thomas";
                Tobias="Tobias";
                Tomasz="Tomasz";
                Uwe="Uwe";
                Victor="Victor";
                Vincent="Vincent";
                Werner="Werner";
                Wilhelm="Wilhelm";
                Wolfgang="Wolfgang";
                Xavier="Xavier";
                Yannick="Yannick";
                Yusuf="Yusuf";
                Zoltan="Zoltan";
            };
            class LastNames
            {
                Andersson="Andersson";
                Bauer="Bauer";
                Becker="Becker";
                Bernard="Bernard";
                Bertrand="Bertrand";
                Bonnet="Bonnet";
                Brandt="Brandt";
                Braun="Braun";
                Christensen="Christensen";
                Costa="Costa";
                Dubois="Dubois";
                Durand="Durand";
                Fischer="Fischer";
                Fontaine="Fontaine";
                Fournier="Fournier";
                Garcia="Garcia";
                Gruber="Gruber";
                Haddad="Haddad";
                Hansen="Hansen";
                Hoffmann="Hoffmann";
                Huber="Huber";
                Ivanov="Ivanov";
                Jansen="Jansen";
                Jensen="Jensen";
                Johansson="Johansson";
                Jonsson="Jonsson";
                Jorgensen="Jorgensen";
                Karlsson="Karlsson";
                Khan="Khan";
                Klein="Klein";
                Koch="Koch";
                Korhonen="Korhonen";
                Kovacs="Kovacs";
                Kowalski="Kowalski";
                Kramer="Kramer";
                Krawczyk="Krawczyk";
                Lambert="Lambert";
                Larsson="Larsson";
                Laurent="Laurent";
                Lefebvre="Lefebvre";
                Lehmann="Lehmann";
                Leroy="Leroy";
                Lopes="Lopes";
                Lopez="Lopez";
                Mayer="Mayer";
                Meyer="Meyer";
                Moreau="Moreau";
                Muller="Muller";
                Murphy="Murphy";
                Nguyen="Nguyen";
                Nielsen="Nielsen";
                Nilsson="Nilsson";
                Nowak="Nowak";
                OBrien="OBrien";
                Ozdemir="Ozdemir";
                Papadopoulos="Papadopoulos";
                Patel="Patel";
                Peeters="Peeters";
                Perez="Perez";
                Petersen="Petersen";
                Popescu="Popescu";
                Richter="Richter";
                Richard="Richard";
                Rodriguez="Rodriguez";
                Rossi="Rossi";
                Roux="Roux";
                Sanchez="Sanchez";
                Santos="Santos";
                Schmidt="Schmidt";
                Schneider="Schneider";
                Schroder="Schroder";
                Schulz="Schulz";
                Schwarz="Schwarz";
                Silva="Silva";
                Simon="Simon";
                Smirnov="Smirnov";
                Steiner="Steiner";
                Svensson="Svensson";
                Thomas="Thomas";
                Tremblay="Tremblay";
                Vasiliev="Vasiliev";
                Wagner="Wagner";
                Weber="Weber";
                Werner="Werner";
                Winkler="Winkler";
                Wolf="Wolf";
                Zimmermann="Zimmermann";
            };
        };
    };
};
