#define VERSION "1.2"

#include "basicDefines.hpp"

class CfgPatches
{
    class EUDF35_vehicles_F
    {
        name = "European Defense Force 2035 - Vehicles";
        author = "kenoxite";
        authors[] = {
            "kenoxite"
        };
        requiredAddons[]=
        {
            "EUDF35_infantry_F",
            "EUDF35_vehicles_data_F",
            
            "A3_Air_F_Heli",
            "A3_Soft_F_Exp_Quadbike_01",
            "A3_Soft_F_Quadbike_01",
            "A3_Soft_F",
            "A3_Soft_F_Gamma_Hatchback_01",
            "A3_Soft_F_Exp_Offroad_02",
            "A3_Data_F_ParticleEffects",
            "A3_Armor_F_Beta",
            "A3_Soft_F_Beta_MRAP_03",
            "A3_Soft_F_Beta_Truck_02",
            "A3_Soft_F_Gamma_Truck_02",
            "A3_Soft_F_Enoch_Truck_02",
            "A3_Soft_F_Beta_Truck_01",
            "A3_Soft_F_Gamma_Truck_01",
            "A3_Soft_F_Gamma_Van_01",
            "A3_Soft_F_EPC_Truck_03",
            "A3_Soft_F_Orange_Van_02",
            "A3_Soft_F_Exp_LSV_01",
            "A3_Armor_F_Beta_APC_Wheeled_01",
            "A3_Armor_F_Beta_APC_Wheeled_02",
            "A3_Armor_F_Gamma_APC_Wheeled_03",
            "A3_Armor_F_Tank_AFV_Wheeled_01",
            "A3_Armor_F_Enoch_APC_Tracked_03",
            "A3_Armor_F_EPB_APC_Tracked_03",
            "A3_Armor_F_Beta_APC_Tracked_01",
            "A3_Armor_F_Beta_APC_Tracked_02",
            "A3_Armor_F_Gamma_MBT_01",
            "A3_Armor_F_Gamma_MBT_02",
            "A3_Armor_F_EPB_MBT_03",
            "A3_Armor_F_Tank_LT_01",
            "A3_Armor_F_Tank_MBT_04",
            "A3_Soft_F_Enoch_UGV_02",
            "A3_Air_F_EPB_Heli_Light_03",
            "A3_Air_F",
            "A3_Air_F_Beta_Heli_Transport_02",
            "A3_Air_F_Heli_Light_01",
            "A3_Air_F_Heli_Light_02",
            "A3_Air_F_Beta_Heli_Transport_01",
            "A3_Boat_F_Beta_Boat_Transport_01",
            "A3_Boat_F_Boat_Transport_01",
            "A3_Boat_F_Exp_Boat_Transport_01",
            "A3_Boat_F",
            "A3_Boat_F_Beta_Boat_Armed_01",
            "A3_Boat_F_Boat_Armed_01",
            "A3_Boat_F_Beta_SDV_01",
            "A3_Air_F_Jets_Plane_Fighter_04",
            "A3_Air_F_Beta",
            "A3_Air_F_Gamma_Plane_Fighter_03",
            "A3_Air_F_EPC_Plane_CAS_01",
            "A3_Air_F_EPC_Plane_CAS_02",
            "A3_Air_F_Exp_Plane_Civil_01",
            "A3_Air_F_Jets_Plane_Fighter_01",
            "A3_Air_F_Jets_Plane_Fighter_02",
            "A3_Air_F_Jets_UAV_05",
            "A3_Static_F_HMG_02",
            "A3_Static_F",
            "A3_Static_F_AA_01",
            "A3_Static_F_AT_01",
            "A3_Static_F_Sams_Radar_System_01",
            "A3_Static_F_Sams_SAM_System_03"
        };
        requiredVersion = 1.62;
        units[]={
            "I_EUDF35_Quad_Bike_F",
            "I_EUDF35_Strider_F",
            "I_EUDF35_Strider_GMG_F",
            "I_EUDF35_Strider_HMG_F",
            "I_EUDF35_Zamak_Transport_F",
            "I_EUDF35_Zamak_Covered_F",
            "I_EUDF35_Zamak_Fuel_F",
            "I_EUDF35_Zamak_Ammo_F",
            "I_EUDF35_Zamak_Repair_F",
            "I_EUDF35_Zamak_Medical_F",
            "I_EUDF35_APC_Wheeled_01_cannon_F",
            "I_EUDF35_APC_tracked_03_cannon_F",
            "I_EUDF35_MBT_03_cannon_F",
            "I_EUDF35_WY_55_F",
            "I_EUDF35_WY_55_Unarmed_F",
            "I_EUDF35_Heli_Transport_02_F",
            "I_EUDF35_Assault_Boat_F",
            "I_EUDF35_Speedboat_Minigun_F",
            "I_EUDF35_SDV_01_F",
            "I_EUDF35_MHMG_50_F",
            "I_EUDF35_MHMG_50_Raised_F",
            "I_EUDF35_GMG_20_mm_F",
            "I_EUDF35_GMG_20_mm_Raised_F",
            "I_EUDF35_static_AT_F",
            "I_EUDF35_static_AA_F",
            "I_EUDF35_HMG_01_A_F",
            "I_EUDF35_GMG_01_A_F",
            "I_EUDF35_Static_Designator_01_F",
            "I_EUDF35_Radar_System_01_F",
            "I_EUDF35_SAM_System_03_F",
            "I_EUDF35_MBT_01_arty_F",
            "I_EUDF35_MBT_01_mlrs_F",
            "I_EUDF35_Plane_Fighter_04_F",
            "I_EUDF35_LSV_01_unarmed_F",
            "I_EUDF35_LSV_01_AT_F",
            "I_EUDF35_LSV_01_armed_F",
            "I_EUDF35_UAV_01_F",
            "I_EUDF35_UGV_01_F",
            "I_EUDF35_UGV_01_rcws_F",
            "I_EUDF35_UAV_06_F",
            "I_EUDF35_UAV_06_medical_F",
            "I_EUDF35_UAV_02_dynamicLoadout_F",

            "I_EUDF35_A_Quad_Bike_F",
            "I_EUDF35_A_Strider_F",
            "I_EUDF35_A_Strider_GMG_F",
            "I_EUDF35_A_Strider_HMG_F",
            "I_EUDF35_A_Zamak_Transport_F",
            "I_EUDF35_A_Zamak_Covered_F",
            "I_EUDF35_A_Zamak_Fuel_F",
            "I_EUDF35_A_Zamak_Ammo_F",
            "I_EUDF35_A_Zamak_Repair_F",
            "I_EUDF35_A_Zamak_Medical_F",
            "I_EUDF35_A_APC_Wheeled_01_cannon_F",
            "I_EUDF35_A_APC_tracked_03_cannon_F",
            "I_EUDF35_A_MBT_03_cannon_F",
            "I_EUDF35_A_WY_55_F",
            "I_EUDF35_A_WY_55_Unarmed_F",
            "I_EUDF35_A_Heli_Transport_02_F",
            "I_EUDF35_A_Assault_Boat_F",
            "I_EUDF35_A_Speedboat_Minigun_F",
            "I_EUDF35_A_SDV_01_F",
            "I_EUDF35_A_MHMG_50_F",
            "I_EUDF35_A_MHMG_50_Raised_F",
            "I_EUDF35_A_GMG_20_mm_F",
            "I_EUDF35_A_GMG_20_mm_Raised_F",
            "I_EUDF35_A_static_AT_F",
            "I_EUDF35_A_static_AA_F",
            "I_EUDF35_A_HMG_01_A_F",
            "I_EUDF35_A_GMG_01_A_F",
            "I_EUDF35_A_Static_Designator_01_F",
            "I_EUDF35_A_Radar_System_01_F",
            "I_EUDF35_A_SAM_System_03_F",
            "I_EUDF35_A_MBT_01_arty_F",
            "I_EUDF35_A_MBT_01_mlrs_F",
            "I_EUDF35_A_Plane_Fighter_04_F",
            "I_EUDF35_A_LSV_01_unarmed_F",
            "I_EUDF35_A_LSV_01_AT_F",
            "I_EUDF35_A_LSV_01_armed_F",
            "I_EUDF35_A_UAV_01_F",
            "I_EUDF35_A_UGV_01_F",
            "I_EUDF35_A_UGV_01_rcws_F",
            "I_EUDF35_A_UAV_06_F",
            "I_EUDF35_A_UAV_06_medical_F",
            "I_EUDF35_A_UAV_02_dynamicLoadout_F",

            "I_EUDF35_D_Quad_Bike_F",
            "I_EUDF35_D_Strider_F",
            "I_EUDF35_D_Strider_GMG_F",
            "I_EUDF35_D_Strider_HMG_F",
            "I_EUDF35_D_Zamak_Transport_F",
            "I_EUDF35_D_Zamak_Covered_F",
            "I_EUDF35_D_Zamak_Fuel_F",
            "I_EUDF35_D_Zamak_Ammo_F",
            "I_EUDF35_D_Zamak_Repair_F",
            "I_EUDF35_D_Zamak_Medical_F",
            "I_EUDF35_D_APC_Wheeled_01_cannon_F",
            "I_EUDF35_D_APC_tracked_03_cannon_F",
            "I_EUDF35_D_MBT_03_cannon_F",
            "I_EUDF35_D_WY_55_F",
            "I_EUDF35_D_WY_55_Unarmed_F",
            "I_EUDF35_D_Heli_Transport_02_F",
            "I_EUDF35_D_Assault_Boat_F",
            "I_EUDF35_D_Speedboat_Minigun_F",
            "I_EUDF35_D_SDV_01_F",
            "I_EUDF35_D_MHMG_50_F",
            "I_EUDF35_D_MHMG_50_Raised_F",
            "I_EUDF35_D_GMG_20_mm_F",
            "I_EUDF35_D_GMG_20_mm_Raised_F",
            "I_EUDF35_D_static_AT_F",
            "I_EUDF35_D_static_AA_F",
            "I_EUDF35_D_HMG_01_A_F",
            "I_EUDF35_D_GMG_01_A_F",
            "I_EUDF35_D_Static_Designator_01_F",
            "I_EUDF35_D_Radar_System_01_F",
            "I_EUDF35_D_SAM_System_03_F",
            "I_EUDF35_D_MBT_01_arty_F",
            "I_EUDF35_D_MBT_01_mlrs_F",
            "I_EUDF35_D_Plane_Fighter_04_F",
            "I_EUDF35_D_LSV_01_unarmed_F",
            "I_EUDF35_D_LSV_01_AT_F",
            "I_EUDF35_D_LSV_01_armed_F",
            "I_EUDF35_D_UAV_01_F",
            "I_EUDF35_D_UGV_01_F",
            "I_EUDF35_D_UGV_01_rcws_F",
            "I_EUDF35_D_UAV_06_F",
            "I_EUDF35_D_UAV_06_medical_F",
            "I_EUDF35_D_UAV_02_dynamicLoadout_F",


            "B_EUDF35_Quad_Bike_F",
            "B_EUDF35_Strider_F",
            "B_EUDF35_Strider_GMG_F",
            "B_EUDF35_Strider_HMG_F",
            "B_EUDF35_Zamak_Transport_F",
            "B_EUDF35_Zamak_Covered_F",
            "B_EUDF35_Zamak_Fuel_F",
            "B_EUDF35_Zamak_Ammo_F",
            "B_EUDF35_Zamak_Repair_F",
            "B_EUDF35_Zamak_Medical_F",
            "B_EUDF35_APC_Wheeled_01_cannon_F",
            "B_EUDF35_APC_tracked_03_cannon_F",
            "B_EUDF35_MBT_03_cannon_F",
            "B_EUDF35_WY_55_F",
            "B_EUDF35_WY_55_Unarmed_F",
            "B_EUDF35_Heli_Transport_02_F",
            "B_EUDF35_Assault_Boat_F",
            "B_EUDF35_Speedboat_Minigun_F",
            "B_EUDF35_SDV_01_F",
            "B_EUDF35_MHMG_50_F",
            "B_EUDF35_MHMG_50_Raised_F",
            "B_EUDF35_GMG_20_mm_F",
            "B_EUDF35_GMG_20_mm_Raised_F",
            "B_EUDF35_static_AT_F",
            "B_EUDF35_static_AA_F",
            "B_EUDF35_HMG_01_A_F",
            "B_EUDF35_GMG_01_A_F",
            "B_EUDF35_Static_Designator_01_F",
            "B_EUDF35_Radar_System_01_F",
            "B_EUDF35_SAM_System_03_F",
            "B_EUDF35_MBT_01_arty_F",
            "B_EUDF35_MBT_01_mlrs_F",
            "B_EUDF35_Plane_Fighter_04_F",
            "B_EUDF35_LSV_01_unarmed_F",
            "B_EUDF35_LSV_01_AT_F",
            "B_EUDF35_LSV_01_armed_F",
            "B_EUDF35_UAV_01_F",
            "B_EUDF35_UGV_01_F",
            "B_EUDF35_UGV_01_rcws_F",
            "B_EUDF35_UAV_06_F",
            "B_EUDF35_UAV_06_medical_F",
            "B_EUDF35_UAV_02_dynamicLoadout_F",

            "B_EUDF35_A_Quad_Bike_F",
            "B_EUDF35_A_Strider_F",
            "B_EUDF35_A_Strider_GMG_F",
            "B_EUDF35_A_Strider_HMG_F",
            "B_EUDF35_A_Zamak_Transport_F",
            "B_EUDF35_A_Zamak_Covered_F",
            "B_EUDF35_A_Zamak_Fuel_F",
            "B_EUDF35_A_Zamak_Ammo_F",
            "B_EUDF35_A_Zamak_Repair_F",
            "B_EUDF35_A_Zamak_Medical_F",
            "B_EUDF35_A_APC_Wheeled_01_cannon_F",
            "B_EUDF35_A_APC_tracked_03_cannon_F",
            "B_EUDF35_A_MBT_03_cannon_F",
            "B_EUDF35_A_WY_55_F",
            "B_EUDF35_A_WY_55_Unarmed_F",
            "B_EUDF35_A_Heli_Transport_02_F",
            "B_EUDF35_A_Assault_Boat_F",
            "B_EUDF35_A_Speedboat_Minigun_F",
            "B_EUDF35_A_SDV_01_F",
            "B_EUDF35_A_MHMG_50_F",
            "B_EUDF35_A_MHMG_50_Raised_F",
            "B_EUDF35_A_GMG_20_mm_F",
            "B_EUDF35_A_GMG_20_mm_Raised_F",
            "B_EUDF35_A_static_AT_F",
            "B_EUDF35_A_static_AA_F",
            "B_EUDF35_A_HMG_01_A_F",
            "B_EUDF35_A_GMG_01_A_F",
            "B_EUDF35_A_Static_Designator_01_F",
            "B_EUDF35_A_Radar_System_01_F",
            "B_EUDF35_A_SAM_System_03_F",
            "B_EUDF35_A_MBT_01_arty_F",
            "B_EUDF35_A_MBT_01_mlrs_F",
            "B_EUDF35_A_Plane_Fighter_04_F",
            "B_EUDF35_A_LSV_01_unarmed_F",
            "B_EUDF35_A_LSV_01_AT_F",
            "B_EUDF35_A_LSV_01_armed_F",
            "B_EUDF35_A_UAV_01_F",
            "B_EUDF35_A_UGV_01_F",
            "B_EUDF35_A_UGV_01_rcws_F",
            "B_EUDF35_A_UAV_06_F",
            "B_EUDF35_A_UAV_06_medical_F",
            "B_EUDF35_A_UAV_02_dynamicLoadout_F",

            "B_EUDF35_D_Quad_Bike_F",
            "B_EUDF35_D_Strider_F",
            "B_EUDF35_D_Strider_GMG_F",
            "B_EUDF35_D_Strider_HMG_F",
            "B_EUDF35_D_Zamak_Transport_F",
            "B_EUDF35_D_Zamak_Covered_F",
            "B_EUDF35_D_Zamak_Fuel_F",
            "B_EUDF35_D_Zamak_Ammo_F",
            "B_EUDF35_D_Zamak_Repair_F",
            "B_EUDF35_D_Zamak_Medical_F",
            "B_EUDF35_D_APC_Wheeled_01_cannon_F",
            "B_EUDF35_D_APC_tracked_03_cannon_F",
            "B_EUDF35_D_MBT_03_cannon_F",
            "B_EUDF35_D_WY_55_F",
            "B_EUDF35_D_WY_55_Unarmed_F",
            "B_EUDF35_D_Heli_Transport_02_F",
            "B_EUDF35_D_Assault_Boat_F",
            "B_EUDF35_D_Speedboat_Minigun_F",
            "B_EUDF35_D_SDV_01_F",
            "B_EUDF35_D_MHMG_50_F",
            "B_EUDF35_D_MHMG_50_Raised_F",
            "B_EUDF35_D_GMG_20_mm_F",
            "B_EUDF35_D_GMG_20_mm_Raised_F",
            "B_EUDF35_D_static_AT_F",
            "B_EUDF35_D_static_AA_F",
            "B_EUDF35_D_HMG_01_A_F",
            "B_EUDF35_D_GMG_01_A_F",
            "B_EUDF35_D_Static_Designator_01_F",
            "B_EUDF35_D_Radar_System_01_F",
            "B_EUDF35_D_SAM_System_03_F",
            "B_EUDF35_D_MBT_01_arty_F",
            "B_EUDF35_D_MBT_01_mlrs_F",
            "B_EUDF35_D_Plane_Fighter_04_F",
            "B_EUDF35_D_LSV_01_unarmed_F",
            "B_EUDF35_D_LSV_01_AT_F",
            "B_EUDF35_D_LSV_01_armed_F",
            "B_EUDF35_D_UAV_01_F",
            "B_EUDF35_D_UGV_01_F",
            "B_EUDF35_D_UGV_01_rcws_F",
            "B_EUDF35_D_UAV_06_F",
            "B_EUDF35_D_UAV_06_medical_F",
            "B_EUDF35_D_UAV_02_dynamicLoadout_F",
            
            "O_EUDF35_Quad_Bike_F",
            "O_EUDF35_Strider_F",
            "O_EUDF35_Strider_GMG_F",
            "O_EUDF35_Strider_HMG_F",
            "O_EUDF35_Zamak_Transport_F",
            "O_EUDF35_Zamak_Covered_F",
            "O_EUDF35_Zamak_Fuel_F",
            "O_EUDF35_Zamak_Ammo_F",
            "O_EUDF35_Zamak_Repair_F",
            "O_EUDF35_Zamak_Medical_F",
            "O_EUDF35_APC_Wheeled_01_cannon_F",
            "O_EUDF35_APC_tracked_03_cannon_F",
            "O_EUDF35_MBT_03_cannon_F",
            "O_EUDF35_WY_55_F",
            "O_EUDF35_WY_55_Unarmed_F",
            "O_EUDF35_Heli_Transport_02_F",
            "O_EUDF35_Assault_Boat_F",
            "O_EUDF35_Speedboat_Minigun_F",
            "O_EUDF35_SDV_01_F",
            "O_EUDF35_MHMG_50_F",
            "O_EUDF35_MHMG_50_Raised_F",
            "O_EUDF35_GMG_20_mm_F",
            "O_EUDF35_GMG_20_mm_Raised_F",
            "O_EUDF35_static_AT_F",
            "O_EUDF35_static_AA_F",
            "O_EUDF35_HMG_01_A_F",
            "O_EUDF35_GMG_01_A_F",
            "O_EUDF35_Static_Designator_01_F",
            "O_EUDF35_Radar_System_01_F",
            "O_EUDF35_SAM_System_03_F",
            "O_EUDF35_MBT_01_arty_F",
            "O_EUDF35_MBT_01_mlrs_F",
            "O_EUDF35_Plane_Fighter_04_F",
            "O_EUDF35_LSV_01_unarmed_F",
            "O_EUDF35_LSV_01_AT_F",
            "O_EUDF35_LSV_01_armed_F",
            "O_EUDF35_UAV_01_F",
            "O_EUDF35_UGV_01_F",
            "O_EUDF35_UGV_01_rcws_F",
            "O_EUDF35_UAV_06_F",
            "O_EUDF35_UAV_06_medical_F",
            "O_EUDF35_UAV_02_dynamicLoadout_F",

            "O_EUDF35_A_Quad_Bike_F",
            "O_EUDF35_A_Strider_F",
            "O_EUDF35_A_Strider_GMG_F",
            "O_EUDF35_A_Strider_HMG_F",
            "O_EUDF35_A_Zamak_Transport_F",
            "O_EUDF35_A_Zamak_Covered_F",
            "O_EUDF35_A_Zamak_Fuel_F",
            "O_EUDF35_A_Zamak_Ammo_F",
            "O_EUDF35_A_Zamak_Repair_F",
            "O_EUDF35_A_Zamak_Medical_F",
            "O_EUDF35_A_APC_Wheeled_01_cannon_F",
            "O_EUDF35_A_APC_tracked_03_cannon_F",
            "O_EUDF35_A_MBT_03_cannon_F",
            "O_EUDF35_A_WY_55_F",
            "O_EUDF35_A_WY_55_Unarmed_F",
            "O_EUDF35_A_Heli_Transport_02_F",
            "O_EUDF35_A_Assault_Boat_F",
            "O_EUDF35_A_Speedboat_Minigun_F",
            "O_EUDF35_A_SDV_01_F",
            "O_EUDF35_A_MHMG_50_F",
            "O_EUDF35_A_MHMG_50_Raised_F",
            "O_EUDF35_A_GMG_20_mm_F",
            "O_EUDF35_A_GMG_20_mm_Raised_F",
            "O_EUDF35_A_static_AT_F",
            "O_EUDF35_A_static_AA_F",
            "O_EUDF35_A_HMG_01_A_F",
            "O_EUDF35_A_GMG_01_A_F",
            "O_EUDF35_A_Static_Designator_01_F",
            "O_EUDF35_A_Radar_System_01_F",
            "O_EUDF35_A_SAM_System_03_F",
            "O_EUDF35_A_MBT_01_arty_F",
            "O_EUDF35_A_MBT_01_mlrs_F",
            "O_EUDF35_A_Plane_Fighter_04_F",
            "O_EUDF35_A_LSV_01_unarmed_F",
            "O_EUDF35_A_LSV_01_AT_F",
            "O_EUDF35_A_LSV_01_armed_F",
            "O_EUDF35_A_UAV_01_F",
            "O_EUDF35_A_UGV_01_F",
            "O_EUDF35_A_UGV_01_rcws_F",
            "O_EUDF35_A_UAV_06_F",
            "O_EUDF35_A_UAV_06_medical_F",
            "O_EUDF35_A_UAV_02_dynamicLoadout_F",

            "O_EUDF35_D_Quad_Bike_F",
            "O_EUDF35_D_Strider_F",
            "O_EUDF35_D_Strider_GMG_F",
            "O_EUDF35_D_Strider_HMG_F",
            "O_EUDF35_D_Zamak_Transport_F",
            "O_EUDF35_D_Zamak_Covered_F",
            "O_EUDF35_D_Zamak_Fuel_F",
            "O_EUDF35_D_Zamak_Ammo_F",
            "O_EUDF35_D_Zamak_Repair_F",
            "O_EUDF35_D_Zamak_Medical_F",
            "O_EUDF35_D_APC_Wheeled_01_cannon_F",
            "O_EUDF35_D_APC_tracked_03_cannon_F",
            "O_EUDF35_D_MBT_03_cannon_F",
            "O_EUDF35_D_WY_55_F",
            "O_EUDF35_D_WY_55_Unarmed_F",
            "O_EUDF35_D_Heli_Transport_02_F",
            "O_EUDF35_D_Assault_Boat_F",
            "O_EUDF35_D_Speedboat_Minigun_F",
            "O_EUDF35_D_SDV_01_F",
            "O_EUDF35_D_MHMG_50_F",
            "O_EUDF35_D_MHMG_50_Raised_F",
            "O_EUDF35_D_GMG_20_mm_F",
            "O_EUDF35_D_GMG_20_mm_Raised_F",
            "O_EUDF35_D_static_AT_F",
            "O_EUDF35_D_static_AA_F",
            "O_EUDF35_D_HMG_01_A_F",
            "O_EUDF35_D_GMG_01_A_F",
            "O_EUDF35_D_Static_Designator_01_F",
            "O_EUDF35_D_Radar_System_01_F",
            "O_EUDF35_D_SAM_System_03_F",
            "O_EUDF35_D_MBT_01_arty_F",
            "O_EUDF35_D_MBT_01_mlrs_F",
            "O_EUDF35_D_Plane_Fighter_04_F",
            "O_EUDF35_D_LSV_01_unarmed_F",
            "O_EUDF35_D_LSV_01_AT_F",
            "O_EUDF35_D_LSV_01_armed_F",
            "O_EUDF35_D_UAV_01_F",
            "O_EUDF35_D_UGV_01_F",
            "O_EUDF35_D_UGV_01_rcws_F",
            "O_EUDF35_D_UAV_06_F",
            "O_EUDF35_D_UAV_06_medical_F",
            "O_EUDF35_D_UAV_02_dynamicLoadout_F"
        };
        weapons[]={};
        
        version = VERSION;
    };
};

class CfgVehicles
{
    #include "indep\woodland\apcs.hpp"
    #include "indep\woodland\cars.hpp"
    #include "indep\woodland\tanks.hpp"
    #include "indep\woodland\helicopters.hpp"
    #include "indep\woodland\artillery.hpp"
    #include "indep\woodland\ships.hpp"
    #include "indep\woodland\planes.hpp"
    #include "indep\woodland\statics.hpp"
    #include "indep\woodland\drones.hpp"

    #include "indep\arctic\apcs.hpp"
    #include "indep\arctic\cars.hpp"
    #include "indep\arctic\tanks.hpp"
    #include "indep\arctic\helicopters.hpp"
    #include "indep\arctic\artillery.hpp"
    #include "indep\arctic\ships.hpp"
    #include "indep\arctic\planes.hpp"
    #include "indep\arctic\statics.hpp"
    #include "indep\arctic\drones.hpp"

    #include "indep\arid\apcs.hpp"
    #include "indep\arid\cars.hpp"
    #include "indep\arid\tanks.hpp"
    #include "indep\arid\helicopters.hpp"
    #include "indep\arid\artillery.hpp"
    #include "indep\arid\ships.hpp"
    #include "indep\arid\planes.hpp"
    #include "indep\arid\statics.hpp"
    #include "indep\arid\drones.hpp"


    #include "blufor\woodland\apcs.hpp"
    #include "blufor\woodland\cars.hpp"
    #include "blufor\woodland\tanks.hpp"
    #include "blufor\woodland\helicopters.hpp"
    #include "blufor\woodland\artillery.hpp"
    #include "blufor\woodland\ships.hpp"
    #include "blufor\woodland\planes.hpp"
    #include "blufor\woodland\statics.hpp"
    #include "blufor\woodland\drones.hpp"

    #include "blufor\arctic\apcs.hpp"
    #include "blufor\arctic\cars.hpp"
    #include "blufor\arctic\tanks.hpp"
    #include "blufor\arctic\helicopters.hpp"
    #include "blufor\arctic\artillery.hpp"
    #include "blufor\arctic\ships.hpp"
    #include "blufor\arctic\planes.hpp"
    #include "blufor\arctic\statics.hpp"
    #include "blufor\arctic\drones.hpp"

    #include "blufor\arid\apcs.hpp"
    #include "blufor\arid\cars.hpp"
    #include "blufor\arid\tanks.hpp"
    #include "blufor\arid\helicopters.hpp"
    #include "blufor\arid\artillery.hpp"
    #include "blufor\arid\ships.hpp"
    #include "blufor\arid\planes.hpp"
    #include "blufor\arid\statics.hpp"
    #include "blufor\arid\drones.hpp"


    #include "opfor\woodland\apcs.hpp"
    #include "opfor\woodland\cars.hpp"
    #include "opfor\woodland\tanks.hpp"
    #include "opfor\woodland\helicopters.hpp"
    #include "opfor\woodland\artillery.hpp"
    #include "opfor\woodland\ships.hpp"
    #include "opfor\woodland\planes.hpp"
    #include "opfor\woodland\statics.hpp"
    #include "opfor\woodland\drones.hpp"

    #include "opfor\arctic\apcs.hpp"
    #include "opfor\arctic\cars.hpp"
    #include "opfor\arctic\tanks.hpp"
    #include "opfor\arctic\helicopters.hpp"
    #include "opfor\arctic\artillery.hpp"
    #include "opfor\arctic\ships.hpp"
    #include "opfor\arctic\planes.hpp"
    #include "opfor\arctic\statics.hpp"
    #include "opfor\arctic\drones.hpp"

    #include "opfor\arid\apcs.hpp"
    #include "opfor\arid\cars.hpp"
    #include "opfor\arid\tanks.hpp"
    #include "opfor\arid\helicopters.hpp"
    #include "opfor\arid\artillery.hpp"
    #include "opfor\arid\ships.hpp"
    #include "opfor\arid\planes.hpp"
    #include "opfor\arid\statics.hpp"
    #include "opfor\arid\drones.hpp"
};
