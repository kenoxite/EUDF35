#define true 1
#define false 0

#define VSoft 0
#define VArmor 1
#define VAir 2

// type scope
#define private 0
#define protected 1
#define public 2

#define CanSeeRadar 1
#define CanSeeEye 2
#define CanSeeOptics 4
#define CanSeeEar 8
#define CanSeeCompass 16
#define CanSeeRadarC CanSeeRadar+CanSeeCompass
#define CanSeeAll 31
#define CanSeePeripheral 32

//lock acquiring
#define manualLA      0
#define automaticLA   1

//lockable target type
#define lockGroundTT      0
#define lockAirGroundTT   1
#define lockAirTT         2
#define lockGround      0
#define lockAirGround   1
#define lockAir         2

//missile lock type
#define fireAndForgetLT   0
#define keepLockedLT      1
#define manualLT          2

#define SPEED_STATIC 1e10

#define LockNo		0
#define LockCadet	1
#define LockYes		2

enum {StabilizedInAxesNone,StabilizedInAxisX,StabilizedInAxisY,StabilizedInAxesBoth,StabilizedInAxesXYZ};

#define StabilizedInAxesNone 0
#define StabilizedInAxisX 1
#define StabilizedInAxisY 2
#define StabilizedInAxesBoth 3
#define StabilizedInAxesXYZ 4

#define CM_none        0
#define CM_Lock_Visual 1
#define CM_Lock_IR     2
#define CM_Lock_Laser  4
#define CM_Lock_Radar  8
#define CM_Missile     16


#define CMImmunity_GOOD 0.9
#define CMImmunity_MIDDLE 0.65
#define CMImmunity_BAD    0.5

#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define bag_xx(a,b) class _xx_##a {backpack = a; count = b;}

#define DEFAULT_SLOT 0
#define MUZZLE_SLOT 101
#define OPTICS_SLOT 201
#define FLASHLIGHT_SLOT 301
#define NVG_SLOT 602
#define GOGGLE_SLOT 603
#define HEADGEAR_SLOT 605
#define UNIFORM_SLOT 801

#define HMD_SLOT       616
#define BINOCULAR_SLOT 617
#define MEDIKIT_SLOT   619
#define RADIO_SLOT    611

#define VEST_SLOT      701
#define BACKPACK_SLOT  901

#define LOAD(weight,capacity) maximumLoad = ##capacity##; \
							  mass = ##weight##;
							  
#define HeadArmourCoef 2.5
#define BodyArmourCoef 10
#define HandArmourCoef 5
#define LegArmourCoef 5

#define mag_1(a) a
#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a
#define mag_13(a) a, a, a, a, a, a, a, a, a, a, a, a, a
#define mag_14(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define mag_15(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a

#define ALLOWED_FACEWEAR() \
        allowedFacewear[] = \
        { \
            "G_Balaclava_combat_EUDF35_green", 0.5, \
            "G_Tactical_Clear_EUDF35", 0.5, \
            "G_Balaclava_oli_EUDF35", 0.3, \
            "None_EUDF35", 0.1, \
            "", 1 \
        }

#define ALLOWED_FACEWEAR_ARCTIC() \
        allowedFacewear[] = \
        { \
            "G_Balaclava_combat_EUDF35_white", 0.5, \
            "G_Tactical_Clear_EUDF35", 0.5, \
            "G_Balaclava_EUDF35_white", 0.8, \
            "G_Bandanna_EUDF35_white", 0.8, \
            "", 1 \
        }

#define ALLOWED_FACEWEAR_ARID() \
        allowedFacewear[] = \
        { \
            "G_Combat_EUDF35", 0.5, \
            "G_Tactical_Clear_EUDF35", 0.5, \
            "G_Bandanna_tan_EUDF35", 0.8, \
            "", 1 \
        }

#define ALLOWED_FACEWEAR_SF() \
        allowedFacewear[] = \
        { \
            "G_Balaclava_combat_EUDF35_green", 0.5, \
            "G_Tactical_Clear_EUDF35", 0.5, \
            "", 1 \
        }

#define ALLOWED_FACEWEAR_SF_ARCTIC() \
        allowedFacewear[] = \
        { \
            "G_Balaclava_combat_EUDF35_white", 0.5, \
            "G_Tactical_Clear_EUDF35", 0.5, \
            "", 1 \
        }

#define ALLOWED_FACEWEAR_SF_ARID() \
        allowedFacewear[] = \
        { \
            "G_Combat_EUDF35", 0.5, \
            "G_Tactical_Clear_EUDF35", 0.5, \
            "", 1 \
        }

#define ALLOWED_FACEWEAR_CAP() \
        allowedFacewear[] = \
        { \
            "G_Tactical_Clear_EUDF35", 0.8, \
            "G_Combat_Goggles_tna_F_EUDF35", 0.3, \
            "None_EUDF35", 0.1, \
            "", 1 \
        }

#define ALLOWED_FACEWEAR_CAP_ARCTIC() \
        allowedFacewear[] = \
        { \
            "G_Balaclava_combat_EUDF35_white", 0.8, \
            "G_Tactical_Clear_EUDF35", 0.3, \
            "G_Combat_Goggles_tna_F_EUDF35", 0.3, \
            "", 1 \
        }

#define ALLOWED_FACEWEAR_CAP_ARID() \
        allowedFacewear[] = \
        { \
            "G_Tactical_Clear_EUDF35", 0.8, \
            "G_Combat_EUDF35", 0.3, \
            "None_EUDF35", 0.1, \
            "", 1 \
        }

#define OFFDUTY() \
    identityTypes[] = { \
        "Head_NATO", \
        "Head_Enoch", \
        "Head_TK", \
        "LanguageGRE_F", \
        "G_EUDF35_OffDuty" \
        }

#define SOLDIER_CAP() \
    identityTypes[] = { \
        "Head_NATO", \
        "Head_Enoch", \
        "Head_TK", \
        "LanguageGRE_F", \
        "G_EUDF35_Cap" \
        }

#define SOLDIER_CAP_ARID() \
    identityTypes[] = { \
        "Head_NATO", \
        "Head_Enoch", \
        "Head_TK", \
        "LanguageGRE_F", \
        "G_EUDF35_Cap_Arid" \
        }

#define RANDOM_HEADGEAR_RECON() \
        headgearList[]= \
        { \
            "H_MilCap_EUDF35_woodland_1", 1, \
            "H_Watchcap_EUDF35_woodland_1", 1, \
            "H_Booniehat_EUDF35_woodland_1_hs", 2, \
            "H_Cap_EUDF35_woodland_1_hs", 3 \
        }; \
        class EventHandlers: EventHandlers \
        { \
            init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};"; \
        }

#define RANDOM_HEADGEAR_RECON_ARCTIC() \
        headgearList[]= \
        { \
            "H_Watchcap_EUDF35_arctic", 1, \
            "H_Cap_EUDF35_arctic_hs", 1 \
        }; \
        class EventHandlers: EventHandlers \
        { \
            init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};"; \
        }

#define RANDOM_HEADGEAR_RECON_ARID() \
        headgearList[]= \
        { \
            "H_MilCap_EUDF35_arid_1", 1, \
            "H_Booniehat_EUDF35_arid_1_hs", 2, \
            "H_Cap_EUDF35_arid_1_hs", 3 \
        }; \
        class EventHandlers: EventHandlers \
        { \
            init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};"; \
        }

#define RANDOM_HEADGEAR_DA() \
        headgearList[]= \
        { \
            "H_HelmetHBK_headset_EUDF35_woodland_1", 3, \
            "H_HelmetB_light_EUDF35_woodland_1", 1 \
        }; \
        class EventHandlers: EventHandlers \
        { \
            init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};"; \
        }

#define RANDOM_HEADGEAR_DA_ARCTIC() \
        headgearList[]= \
        { \
            "H_HelmetHBK_headset_EUDF35_arctic", 3, \
            "H_HelmetB_light_EUDF35_arctic", 1 \
        }; \
        class EventHandlers: EventHandlers \
        { \
            init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};"; \
        }

#define RANDOM_HEADGEAR_DA_ARID() \
        headgearList[]= \
        { \
            "H_HelmetHBK_headset_EUDF35_arid_1", 3, \
            "H_HelmetB_light_EUDF35_arid_1", 1 \
        }; \
        class EventHandlers: EventHandlers \
        { \
            init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};"; \
        }

#define PILOT() \
        class SpeechVariants \
        { \
            class Default \
            { \
                speechSingular[]= \
                { \
                    "veh_infantry_pilot_s" \
                }; \
                speechPlural[]= \
                { \
                    "veh_infantry_pilot_p" \
                }; \
            }; \
        }; \
        textSingular="$STR_A3_nameSound_veh_infantry_pilot_s"; \
        textPlural="$STR_A3_nameSound_veh_infantry_pilot_p"; \
        nameSound="veh_infantry_pilot_s"; \
        cost=93000; \
        role="Crewman"; \
        camouflage=1.8; \
        identityTypes[] = { \
            "Head_NATO", \
            "Head_Enoch", \
            "Head_TK", \
            "LanguageGRE_F", \
            "G_EUDF35_Crew" \
            }

#define CREWMAN() \
        cost=93000; \
        role="Crewman"; \
        identityTypes[] = { \
            "Head_NATO", \
            "Head_Enoch", \
            "Head_TK", \
            "LanguageGRE_F", \
            "G_EUDF35_Cap" \
            }

#define RIFLEMAN_AT() \
        icon="iconManAT"; \
        role="MissileSpecialist"; \
        cost=130000; \
        threat[]={0.80000001,0.80000001,0.30000001}; \
        secondaryAmmoCoef=0.5; \
        textSingular="$STR_A3_nameSound_veh_infantry_AT_s"; \
        textPlural="$STR_A3_nameSound_veh_infantry_AT_p"; \
        nameSound="veh_infantry_AT_s"; \
        class SpeechVariants \
        { \
            class Default \
            { \
                speechSingular[]= \
                { \
                    "veh_infantry_AT_s" \
                }; \
                speechPlural[]= \
                { \
                    "veh_infantry_AT_p" \
                }; \
            }; \
        }

#define RIFLEMAN_AA() \
        icon="iconManAT"; \
        role="MissileSpecialist"; \
        cost=130000; \
        threat[]={0.80000001,0.1,1}; \
        secondaryAmmoCoef=0.5; \
        textSingular="$STR_A3_nameSound_veh_infantry_AT_s"; \
        textPlural="$STR_A3_nameSound_veh_infantry_AT_p"; \
        nameSound="veh_infantry_AT_s"; \
        class SpeechVariants \
        { \
            class Default \
            { \
                speechSingular[]= \
                { \
                    "veh_infantry_AT_s" \
                }; \
                speechPlural[]= \
                { \
                    "veh_infantry_AT_p" \
                }; \
            }; \
        }

#define RIFLEMAN_LMG() \
        cost=220000; \
        icon="iconManMG"; \
        role="MachineGunner"; \
        threat[]={0.80000001,0.80000001,0.30000001}; \
        textSingular="$STR_A3_nameSound_veh_infantry_MG_s"; \
        textPlural="$STR_A3_nameSound_veh_infantry_MG_p"; \
        nameSound="veh_infantry_MG_s"; \
        class SpeechVariants \
        { \
            class Default \
            { \
                speechSingular[]= \
                { \
                    "veh_infantry_MG_s" \
                }; \
                speechPlural[]= \
                { \
                    "veh_infantry_MG_p" \
                }; \
            }; \
        }

#define RIFLEMAN_MEDIC() \
        textSingular="$STR_A3_nameSound_veh_infantry_medic_s"; \
        textPlural="$STR_A3_nameSound_veh_infantry_medic_p"; \
        nameSound="veh_infantry_medic_s"; \
        icon="iconManMedic"; \
        role="CombatLifeSaver"; \
        picture="pictureHeal"; \
        attendant=1; \
        class SpeechVariants \
        { \
            class Default \
            { \
                speechSingular[]= \
                { \
                    "veh_infantry_medic_s" \
                }; \
                speechPlural[]= \
                { \
                    "veh_infantry_medic_p" \
                }; \
            }; \
        }

#define RIFLEMAN_GL() \
        cost=200000; \
        role="Grenadier"

#define RIFLEMAN_LEADER() \
        cost=250000; \
        icon="iconManLeader"

#define RIFLEMAN_OFFICER() \
        class SpeechVariants \
        { \
            class Default \
            { \
                speechSingular[]= \
                { \
                    "veh_infantry_officer_s" \
                }; \
                speechPlural[]= \
                { \
                    "veh_infantry_officer_p" \
                }; \
            }; \
        }; \
        textSingular="$STR_A3_nameSound_veh_infantry_officer_s"; \
        textPlural="$STR_A3_nameSound_veh_infantry_officer_p"; \
        nameSound="veh_infantry_officer_s"; \
        icon="iconManOfficer"; \
        cost=250000; \
        identityTypes[] = { \
            "Head_NATO", \
            "Head_Enoch", \
            "Head_TK", \
            "LanguageGRE_F", \
            "G_EUDF35_Cap" \
            }

#define RIFLEMAN_MARKSMAN() \
        cost=250000; \
        role="Marksman"; \
        class SpeechVariants \
        { \
            class Default \
            { \
                speechSingular[]= \
                { \
                    "veh_infantry_sniper_s" \
                }; \
                speechPlural[]= \
                { \
                    "veh_infantry_sniper_p" \
                }; \
            }; \
        }; \
        textSingular="$STR_A3_nameSound_veh_infantry_sniper_s"; \
        textPlural="$STR_A3_nameSound_veh_infantry_sniper_p"; \
        nameSound="veh_infantry_sniper_s"

#define RIFLEMAN_DEMO() \
        canDeactivateMines=1; \
        engineer=1; \
        detectSkill=24; \
        cost=93000; \
        icon="iconManEngineer"; \
        role="Sapper"; \
        picture="pictureRepair"

#define RIFLEMAN_ENGI() \
        canDeactivateMines=1; \
        engineer=1; \
        detectSkill=31; \
        cost=93000; \
        icon="iconManEngineer"; \
        role="Sapper"; \
        picture="pictureRepair"; \
        armor=2; \
        armorStructural=4; \
        explosionShielding=0.40000001

#define RIFLEMAN_REPAIR() \
        engineer=1; \
        detectSkill=24; \
        cost=93000; \
        icon="iconManEngineer"; \
        role="Sapper"; \
        picture="pictureRepair"

#define RIFLEMAN_UAV() \
        role="SpecialOperative"; \
        uavHacker=1

#define RIFLEMAN_SPECOP() \
        role="SpecialOperative"; \
        cost=200000

#define RIFLEMAN_HEAVYGUNNER() \
        class SpeechVariants \
        { \
            class Default \
            { \
                speechSingular[]= \
                { \
                    "veh_infantry_MG_s" \
                }; \
                speechPlural[]= \
                { \
                    "veh_infantry_MG_p" \
                }; \
            }; \
        }; \
        textSingular="$STR_A3_nameSound_veh_infantry_MG_s"; \
        textPlural="$STR_A3_nameSound_veh_infantry_MG_p"; \
        nameSound="veh_infantry_MG_s"; \
        DLC="Mark"; \
        icon="iconManMG"; \
        role="MachineGunner"


