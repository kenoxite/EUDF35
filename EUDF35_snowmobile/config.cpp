#define VERSION "1.2"

class CfgPatches
{
    class EUDF35_snowmobile_F
    {
        name = "European Defense Force 2035 - Snowmobile";
        author = "kenoxite";
        authors[] = {
            "kenoxite",
            "xacuda"
        };
        requiredVersion = 1.60;
        requiredAddons[] = {
            "EUDF35_infantry_F",
            "xakuda_f_xs_Snowmobile"
        };
        units[]={
            "I_EUDF35_A_Snowmobile",
            "B_EUDF35_A_Snowmobile",
            "O_EUDF35_A_Snowmobile"
        };
        weapons[] = {};

        skipWhenMissingDependencies = 1;
        
        version = VERSION;
    };
};

#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define bag_xx(a,b) class _xx_##a {backpack = a; count = b;}

class CfgVehicles
{
    class LandVehicle;
    class Car: LandVehicle
    {
        class HitPoints;
    };
    class Car_F: Car
    {
        class HitPoints
        {
            class HitLFWheel;
            class HitLBWheel;
            class HitLMWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRBWheel;
            class HitRMWheel;
            class HitRF2Wheel;
            class HitGlass1;
            class HitFuel;
            class HitEngine;
            class HitBody;
        };
        class EventHandlers;
    };
    class I_EUDF35_A_Snowmobile: Car_F
    {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "IND_EUDF35_A_F";
        editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_Snowmobile.jpg";
        crew = "I_EUDF35_A_soldier_F";

        displayName="$STR_Snowmobile_base";
        editorSubcategory="EdSubcat_Cars";

        model="\xakuda_f\xs_Snowmobile\xs_Snowmobile1.p3d";
        armor=30;
        damageResistance=0.0091300001;
        cost=100000;

        mapSize=3.5599999;
        waterResistance=3;
        maxFordingDepth=0.5;
        attenuationEffectType="OpenCarAttenuation";
        soundGetIn[]=
        {
            "",
            0.056234099,
            1
        };
        soundGetOut[]=
        {
            "",
            0.056234099,
            1,
            40
        };
        soundDammage[]=
        {
            "",
            0.56234097,
            1
        };
        soundEngineOnInt[]=
        {
            "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_start",
            0.56234097,
            1
        };
        soundEngineOnExt[]=
        {
            "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_start",
            0.56234097,
            1,
            200
        };
        soundEngineOffInt[]=
        {
            "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_stop",
            0.56234097,
            1
        };
        soundEngineOffExt[]=
        {
            "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_stop",
            0.56234097,
            1,
            200
        };
        buildCrash0[]=
        {
            "A3\sounds_f\Vehicles\soft\noises\crash_building_01",
            1,
            1,
            100
        };
        buildCrash1[]=
        {
            "A3\sounds_f\Vehicles\soft\noises\crash_building_02",
            1,
            1,
            100
        };
        buildCrash2[]=
        {
            "A3\sounds_f\Vehicles\soft\noises\crash_building_03",
            1,
            1,
            100
        };
        buildCrash3[]=
        {
            "A3\sounds_f\Vehicles\soft\noises\crash_building_04",
            1,
            1,
            100
        };
        soundBuildingCrash[]=
        {
            "buildCrash0",
            0.25,
            "buildCrash1",
            0.25,
            "buildCrash2",
            0.25,
            "buildCrash3",
            0.25
        };
        WoodCrash0[]=
        {
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",
            1,
            1,
            100
        };
        WoodCrash1[]=
        {
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",
            1,
            1,
            100
        };
        WoodCrash2[]=
        {
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",
            1,
            1,
            100
        };
        WoodCrash3[]=
        {
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",
            1,
            1,
            100
        };
        WoodCrash4[]=
        {
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",
            1,
            1,
            100
        };
        WoodCrash5[]=
        {
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",
            1,
            1,
            100
        };
        soundWoodCrash[]=
        {
            "woodCrash0",
            0.16599999,
            "woodCrash1",
            0.16599999,
            "woodCrash2",
            0.16599999,
            "woodCrash3",
            0.16599999,
            "woodCrash4",
            0.16599999,
            "woodCrash5",
            0.16599999
        };
        ArmorCrash0[]=
        {
            "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",
            1,
            1,
            100
        };
        ArmorCrash1[]=
        {
            "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",
            1,
            1,
            100
        };
        ArmorCrash2[]=
        {
            "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",
            1,
            1,
            100
        };
        ArmorCrash3[]=
        {
            "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",
            1,
            1,
            100
        };
        soundArmorCrash[]=
        {
            "ArmorCrash0",
            0.25,
            "ArmorCrash1",
            0.25,
            "ArmorCrash2",
            0.25,
            "ArmorCrash3",
            0.25
        };
        class Sounds
        {
            class Idle_ext
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm1",
                    0.316228,
                    1,
                    100
                };
                frequency=1;
                volume="engineOn*camPos*(((rpm/ 2000) factor[(200/ 2000),(400/ 2000)]) * ((rpm/ 2000) factor[(750/ 2000),( 600/ 2000)]))";
            };
            class Engine
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm2",
                    0.35481301,
                    1,
                    200
                };
                frequency="0.9 + ((rpm/ 2000) factor[(600/ 2000),(1000/ 2000)])*0.2";
                volume="engineOn*camPos*(((rpm/ 2000) factor[(600/ 2000),(730/ 2000)]) * ((rpm/ 2000) factor[(1020/ 2000),( 800/ 2000)]))";
            };
            class Engine1_ext
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm3",
                    0.39810699,
                    1,
                    200
                };
                frequency="0.9 + ((rpm/ 2000) factor[(800/ 2000),(1300/ 2000)])*0.2";
                volume="engineOn*camPos*(((rpm/ 2000) factor[(780/ 2000),(1000/ 2000)]) * ((rpm/ 2000) factor[(1300/ 2000),( 1100/ 2000)]))";
            };
            class Engine2_ext
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm4",
                    0.446684,
                    1,
                    250
                };
                frequency="0.9 + ((rpm/ 2000) factor[(1080/ 2000),(1560/ 2000)])*0.2";
                volume="engineOn*camPos*(((rpm/ 2000) factor[(1100/ 2000),(1280/ 2000)]) * ((rpm/ 2000) factor[(1570/ 2000),( 1380/ 2000)]))";
            };
            class Engine3_ext
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm5",
                    0.50118703,
                    1,
                    250
                };
                frequency="0.95 + ((rpm/ 2000) factor[(1380/ 2000),(1860/ 2000)])*0.2";
                volume="engineOn*camPos*(((rpm/ 2000) factor[(1350/ 2000),(1550/ 2000)]) * ((rpm/ 2000) factor[(1870/ 2000),( 1630/ 2000)]))";
            };
            class Engine4_ext
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm7",
                    0.56234097,
                    1,
                    300
                };
                frequency="0.95 + ((rpm/ 2000) factor[(1630/ 2000),(2000/ 2000)]) *0.2";
                volume="engineOn*camPos*((rpm/ 2000) factor[(1650/ 2000),(1900/ 2000)])";
            };
            class IdleThrust
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm1",
                    0.56234097,
                    1,
                    150
                };
                frequency=1;
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(200/ 2000),(400/ 2000)]) * ((rpm/ 2000) factor[(750/ 2000),( 600/ 2000)]))";
            };
            class EngineThrust
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm2",
                    0.63095701,
                    1,
                    200
                };
                frequency="0.9 + ((rpm/ 2000) factor[(600/ 2000),(1000/ 2000)])*0.2";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(600/ 2000),(730/ 2000)]) * ((rpm/ 2000) factor[(1020/ 2000),( 800/ 2000)]))";
            };
            class Engine1_Thrust_ext
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm3",
                    0.707946,
                    1,
                    250
                };
                frequency="0.9 + ((rpm/ 2000) factor[(800/ 2000),(1300/ 2000)])*0.2";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(780/ 2000),(1000/ 2000)]) * ((rpm/ 2000) factor[(1300/ 2000),( 1100/ 2000)]))";
            };
            class Engine2_Thrust_ext
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm4",
                    0.79432797,
                    1,
                    300
                };
                frequency="0.9 + ((rpm/ 2000) factor[(1080/ 2000),(1560/ 2000)])*0.2";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(1100/ 2000),(1280/ 2000)]) * ((rpm/ 2000) factor[(1570/ 2000),( 1380/ 2000)]))";
            };
            class Engine3_Thrust_ext
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm5",
                    0.89125103,
                    1,
                    350
                };
                frequency="0.95 + ((rpm/ 2000) factor[(1380/ 2000),(1860/ 2000)])*0.2";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(1350/ 2000),(1550/ 2000)]) * ((rpm/ 2000) factor[(1870/ 2000),( 1630/ 2000)]))";
            };
            class Engine4_Thrust_ext
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm7",
                    1,
                    1,
                    400
                };
                frequency="0.95 + ((rpm/ 2000) factor[(1630/ 2000),(2000/ 2000)]) *0.2";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2000) factor[(1650/ 2000),(1900/ 2000)])";
            };
            class Idle_int
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm1",
                    0.25118899,
                    1
                };
                frequency=1;
                volume="engineOn*(1-camPos)*(((rpm/ 2000) factor[(200/ 2000),(400/ 2000)]) * ((rpm/ 2000) factor[(750/ 2000),( 600/ 2000)]))";
            };
            class Engine_int
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm2",
                    0.281838,
                    1
                };
                frequency="0.9 + ((rpm/ 2000) factor[(600/ 2000),(1000/ 2000)])*0.2";
                volume="engineOn*(1-camPos)*(((rpm/ 2000) factor[(600/ 2000),(730/ 2000)]) * ((rpm/ 2000) factor[(1020/ 2000),( 800/ 2000)]))";
            };
            class Engine1_int
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm3",
                    0.316228,
                    1
                };
                frequency="0.9 + ((rpm/ 2000) factor[(800/ 2000),(1300/ 2000)])*0.2";
                volume="engineOn*(1-camPos)*(((rpm/ 2000) factor[(780/ 2000),(1000/ 2000)]) * ((rpm/ 2000) factor[(1300/ 2000),( 1100/ 2000)]))";
            };
            class Engine2_int
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm4",
                    0.35481301,
                    1
                };
                frequency="0.9 + ((rpm/ 2000) factor[(1080/ 2000),(1560/ 2000)])*0.2";
                volume="engineOn*(1-camPos)*(((rpm/ 2000) factor[(1100/ 2000),(1280/ 2000)]) * ((rpm/ 2000) factor[(1570/ 2000),( 1380/ 2000)]))";
            };
            class Engine3_int
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm5",
                    0.39810699,
                    1
                };
                frequency="0.95 + ((rpm/ 2000) factor[(1380/ 2000),(1860/ 2000)])*0.2";
                volume="engineOn*(1-camPos)*(((rpm/ 2000) factor[(1350/ 2000),(1550/ 2000)]) * ((rpm/ 2000) factor[(1870/ 2000),( 1630/ 2000)]))";
            };
            class Engine4_int
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm7",
                    0.446684,
                    1
                };
                frequency="0.95 + ((rpm/ 2000) factor[(1630/ 2000),(2000/ 2000)]) *0.2";
                volume="engineOn*(1-camPos)*((rpm/ 2000) factor[(1650/ 2000),(1900/ 2000)])";
            };
            class IdleThrust_Int
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm1",
                    0.56234097,
                    1
                };
                frequency=1;
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(200/ 2000),(400/ 2000)]) * ((rpm/ 2000) factor[(750/ 2000),( 600/ 2000)]))";
            };
            class EngineThrust_Int
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm2",
                    0.63095701,
                    1
                };
                frequency="0.9 + ((rpm/ 2000) factor[(600/ 2000),(1000/ 2000)])*0.2";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(600/ 2000),(730/ 2000)]) * ((rpm/ 2000) factor[(1020/ 2000),( 800/ 2000)]))";
            };
            class Engine1_Thrust_int
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm3",
                    0.707946,
                    1
                };
                frequency="0.9 + ((rpm/ 2000) factor[(800/ 2000),(1300/ 2000)])*0.2";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(780/ 2000),(1000/ 2000)]) * ((rpm/ 2000) factor[(1300/ 2000),( 1100/ 2000)]))";
            };
            class Engine2_Thrust_int
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm4",
                    0.79432797,
                    1
                };
                frequency="0.9 + ((rpm/ 2000) factor[(1080/ 2000),(1560/ 2000)])*0.2";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(1100/ 2000),(1280/ 2000)]) * ((rpm/ 2000) factor[(1570/ 2000),( 1380/ 2000)]))";
            };
            class Engine3_Thrust_int
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm5",
                    0.89125103,
                    1
                };
                frequency="0.95 + ((rpm/ 2000) factor[(1380/ 2000),(1860/ 2000)])*0.2";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(1350/ 2000),(1550/ 2000)]) * ((rpm/ 2000) factor[(1870/ 2000),( 1630/ 2000)]))";
            };
            class Engine4_Thrust_int
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm7",
                    1,
                    1
                };
                frequency="0.95 + ((rpm/ 2000) factor[(1630/ 2000),(2000/ 2000)]) *0.2";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2000) factor[(1650/ 2000),(1900/ 2000)])";
            };
            class TiresRockOut
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
                    1,
                    1,
                    60
                };
                frequency="1";
                volume="camPos*rock*(speed factor[2, 20])";
            };
            class TiresSandOut
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
                    1,
                    1,
                    60
                };
                frequency="1";
                volume="camPos*sand*(speed factor[2, 20])";
            };
            class TiresGrassOut
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
                    1,
                    1,
                    60
                };
                frequency="1";
                volume="camPos*grass*(speed factor[2, 20])";
            };
            class TiresMudOut
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
                    1,
                    1,
                    60
                };
                frequency="1";
                volume="camPos*mud*(speed factor[2, 20])";
            };
            class TiresGravelOut
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
                    1,
                    1,
                    60
                };
                frequency="1";
                volume="camPos*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltOut
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
                    1,
                    1,
                    60
                };
                frequency="1";
                volume="camPos*asphalt*(speed factor[2, 20])";
            };
            class NoiseOut
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",
                    0.89125103,
                    1,
                    90
                };
                frequency="1";
                volume="camPos*(damper0 max 0.02)*(speed factor[0, 15])";
            };
            class TiresRockIn
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
                    0.63095701,
                    1
                };
                frequency="1";
                volume="(1-camPos)*rock*(speed factor[2, 20])";
            };
            class TiresSandIn
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\tires\ext-tires-sand2",
                    0.63095701,
                    1
                };
                frequency="1";
                volume="(1-camPos)*sand*(speed factor[2, 20])";
            };
            class TiresGrassIn
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
                    0.63095701,
                    1
                };
                frequency="1";
                volume="(1-camPos)*grass*(speed factor[2, 20])";
            };
            class TiresMudIn
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
                    0.63095701,
                    1
                };
                frequency="1";
                volume="(1-camPos)*mud*(speed factor[2, 20])";
            };
            class TiresGravelIn
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
                    0.63095701,
                    1
                };
                frequency="1";
                volume="(1-camPos)*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltIn
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
                    0.50118703,
                    1
                };
                frequency="1";
                volume="(1-camPos)*asphalt*(speed factor[2, 20])";
            };
            class NoiseIn
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",
                    0.56234097,
                    1
                };
                frequency="1";
                volume="(damper0 max 0.1)*(speed factor[0, 15])*(1-camPos)";
            };
            class breaking_ext_road
            {
                sound[]=
                {
                    "",
                    0.707946,
                    1,
                    80
                };
                frequency=1;
                volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
            };
            class acceleration_ext_road
            {
                sound[]=
                {
                    "",
                    0.707946,
                    1,
                    80
                };
                frequency=1;
                volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_ext_road
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    0.707946,
                    1,
                    80
                };
                frequency=1;
                volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_ext_road
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    0.707946,
                    1,
                    80
                };
                frequency=1;
                volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_ext_dirt
            {
                sound[]=
                {
                    "",
                    0.707946,
                    1,
                    60
                };
                frequency=1;
                volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
            };
            class acceleration_ext_dirt
            {
                sound[]=
                {
                    "",
                    0.707946,
                    1,
                    60
                };
                frequency=1;
                volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_ext_dirt
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
                    0.707946,
                    1,
                    60
                };
                frequency=1;
                volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_ext_dirt
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
                    0.707946,
                    1,
                    60
                };
                frequency=1;
                volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_int_road
            {
                sound[]=
                {
                    "",
                    0.50118703,
                    1
                };
                frequency=1;
                volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
            };
            class acceleration_int_road
            {
                sound[]=
                {
                    "",
                    0.50118703,
                    1
                };
                frequency=1;
                volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_int_road
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
                    0.50118703,
                    1
                };
                frequency=1;
                volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_int_road
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
                    0.50118703,
                    1
                };
                frequency=1;
                volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_int_dirt
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
                    0.50118703,
                    1
                };
                frequency=1;
                volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
            };
            class acceleration_int_dirt
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",
                    0.50118703,
                    1
                };
                frequency=1;
                volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_int_dirt
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
                    0.50118703,
                    1
                };
                frequency=1;
                volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_int_dirt
            {
                sound[]=
                {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
                    0.50118703,
                    1
                };
                frequency=1;
                volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
        };
        thrustDelay=0.1;
        engineBrakeCoef=0.1;
        overSpeedBrakeCoef=0.80000001;
        brakeIdleSpeed=1.78;
        maxSpeed=150;
        fuelCapacity=30;
        wheelCircumference=1.5;
        antiRollbarForceCoef=0.30000001;
        antiRollbarForceLimit=0.2;
        antiRollbarSpeedMin=20;
        antiRollbarSpeedMax=50;
        idleRpm=600;
        redRpm=2000;

        class complexGearbox
        {
            GearboxRatios[]=
            {
                "R1",
                -2.3510001,
                "N",
                0,
                "D1",
                2.0810001,
                "D2",
                1.257,
                "D3",
                0.73699999
            };
            TransmissionRatios[]=
            {
                "High",
                2
            };
            gearBoxMode="auto";
            moveOffGear=1;
            driveString="D";
            neutralString="N";
            reverseString="R";
        };

        simulation="carx";
        dampersBumpCoef=0.30000001;
        differentialType="rear_open";
        frontRearSplit=0.5;
        frontBias=1.3;
        rearBias=1.3;
        centreBias=1.3;
        clutchStrength=50;
        enginePower=245;
        maxOmega=220;
        peakTorque=480;
        dampingRateFullThrottle=0.079999998;
        dampingRateZeroThrottleClutchEngaged=0.15000001;
        dampingRateZeroThrottleClutchDisengaged=0.15000001;

        torqueCurve[]=
        {
            {0,0.60000002},
            {0.2,0.64999998},
            {0.30000001,0.80000001},
            {0.69999999,0.94999999},
            {0.80000001,1},
            {0.89999998,0.94999999},
            {1,0.5}
        };
        changeGearMinEffectivity[]={0.94999999,0.15000001,0.98000002,0.98000002,0.94999999};
        switchTime=0.1;
        latency=1;

        class Wheels
        {
            class L1
            {
                boneName="wheel_1_1_damper";
                steering=1;
                side="left";
                center="wheel_1_1_axis";
                boundary="wheel_1_1_bound";
                width=0.2;
                mass=20;
                MOI=3.3;
                dampingRate=0.5;
                dampingRateDamaged=5;
                dampingRateDestroyed=5000;
                maxBrakeTorque=1000;
                maxHandBrakeTorque=0;
                suspTravelDirection[]={0,-1,0};
                suspForceAppPointOffset="wheel_1_1_axis";
                tireForceAppPointOffset="wheel_1_1_axis";
                maxCompression=0.15000001;
                mMaxDroop=0.050000001;
                sprungMass=50;
                springStrength=9050;
                springDamperRate=1000;
                longitudinalStiffnessPerUnitGravity=5000;
                latStiffX=25;
                latStiffY=120;
                frictionVsSlipGraph[]=
                {
                    {0,1},
                    {0.5,1},
                    {1,1}
                };
            };
            class L2: L1
            {
                boneName="wheel_1_2_damper";
                steering=0;
                center="wheel_1_2_axis";
                boundary="wheel_1_2_bound";
                suspForceAppPointOffset="wheel_1_2_axis";
                tireForceAppPointOffset="wheel_1_2_axis";
                maxHandBrakeTorque=1500;
                springDamperRate=650;
            };
            class R1: L1
            {
                boneName="wheel_2_1_damper";
                center="wheel_2_1_axis";
                boundary="wheel_2_1_bound";
                suspForceAppPointOffset="wheel_2_1_axis";
                tireForceAppPointOffset="wheel_2_1_axis";
                steering=1;
                side="right";
            };
            class R2: L1
            {
                boneName="wheel_2_2_damper";
                steering=0;
                center="wheel_2_2_axis";
                boundary="wheel_2_2_bound";
                suspForceAppPointOffset="wheel_2_2_axis";
                tireForceAppPointOffset="wheel_2_2_axis";
                maxHandBrakeTorque=1500;
                springDamperRate=650;
            };
            class L3: L2
            {
                boneName="wheel_1_3_damper";
                steering=0;
                center="wheel_1_3_axis";
                boundary="wheel_1_3_bound";
                suspForceAppPointOffset="wheel_1_3_axis";
                tireForceAppPointOffset="wheel_1_3_axis";
                maxHandBrakeTorque=300000;
            };
            class R3: R2
            {
                boneName="wheel_2_3_damper";
                steering=0;
                center="wheel_2_3_axis";
                boundary="wheel_2_3_bound";
                suspForceAppPointOffset="wheel_2_3_axis";
                tireForceAppPointOffset="wheel_2_3_axis";
                maxHandBrakeTorque=300000;
            };
        };
        transportSoldier=0;
        turnCoef=4.5;
        ejectDeadCargo=1;
        ejectDeadDriver=1;
        crewCrashProtection=0.75;
        showNVGCargo[]={1};
        soundAttenuationCargo[]={1,0};
        showNVGDriver=1;
        hideWeaponsDriver=0;
        hideWeaponsCargo=0;
        weapons[]=
        {
            "MiniCarHorn"
        };
        driverAction="driver_quadbike";
        getInAction="GetInQuadbike";
        getOutAction="GetOutQuadbike";
        cargoAction[]=
        {
            "passenger_quadbike"
        };
        cargoGetInAction[]=
        {
            "GetInQuadbike_cargo"
        };
        cargoGetOutAction[]=
        {
            "GetOutQuadbike_cargo"
        };
        preciseGetInOut=1;
        cargoPreciseGetInOut[]={1};
        extCameraPosition[]={0,1.5,-4.5};
        class HitPoints: HitPoints
        {
            class HitFuel: HitFuel
            {
                armor=1;
                material=-1;
                name="palivo";
                visual="";
                passThrough=0.2;
                radius=0.30000001;
            };
            class HitEngine: HitEngine
            {
                armor=2;
                material=-1;
                name="engine";
                visual="";
                passThrough=0.2;
                radius=0.30000001;
                explosionShielding=1;
            };
            class HitBody: HitBody
            {
                armor=2;
                name="body";
                visual="camo";
                passThrough=1;
                radius=0.30000001;
            };
            class HitLFWheel: HitLFWheel
            {
                armor=5;
            };
            class HitLF2Wheel: HitLF2Wheel
            {
                armor=5;
            };
            class HitRFWheel: HitRFWheel
            {
                armor=5;
            };
            class HitRF2Wheel: HitRF2Wheel
            {
                armor=5;
            };
            class HitRBWheel: HitRBWheel
            {
                armor=5;
            };
            class HitLBWheel: HitLBWheel
            {
                armor=5;
            };
            class HitGlass1: HitGlass1
            {
                armor=1.25;
                radius=0.30000001;
            };
        };
        class Damage
        {
            tex[]={};
            mat[]=
            {
                "xakuda_f\xs_Snowmobile\data\body.rvmat",
                "xakuda_f\xs_Snowmobile\data\body_damage.rvmat",
                "xakuda_f\xs_Snowmobile\data\body_destruct.rvmat",
                "xakuda_f\xs_Snowmobile\data\glass.rvmat",
                "A3\data_f\Glass_veh_damage.rvmat",
                "A3\data_f\Glass_veh_damage.rvmat",
                "xakuda_f\xs_Snowmobile\data\koja.rvmat",
                "xakuda_f\xs_Snowmobile\data\body_damage.rvmat",
                "xakuda_f\xs_Snowmobile\data\body_destruct.rvmat"
            };
        };
        class Reflectors
        {
            class Left
            {
                color[]={1900,1800,1700};
                ambient[]={5,5,5};
                position="Light_L";
                direction="Light_L_end";
                hitpoint="Light_L";
                selection="Light_L";
                size=1;
                innerAngle=100;
                outerAngle=179;
                coneFadeCoef=10;
                intensity=1;
                useFlare=0;
                dayLight=0;
                flareSize=1;
                class Attenuation
                {
                    start=1;
                    constant=0;
                    linear=0;
                    quadratic=0.25;
                    hardLimitStart=60;
                    hardLimitEnd=120;
                };
            };
            class Right: Left
            {
                position="Light_R";
                direction="Light_R_end";
                hitpoint="Light_R";
                selection="Light_R";
            };
        };
        aggregateReflectors[]=
        {
            
            {
                "Left",
                "Right"
            }
        };
        hiddenSelections[]=
        {
            "camo",
            "camo1"
        };
        hiddenSelectionsTextures[]=
        {
            "xakuda_f\xs_snowmobile\data\body_camo.paa",
            "xakuda_f\xs_snowmobile\data\koja_camo.paa"
        };
        class EventHandlers: EventHandlers
        {
        };

        class CargoTurret;
        class Turrets
        {
            class CargoTurret_01: CargoTurret
            {
                gunnerAction="passenger_inside_3";
                memoryPointsGetInGunner="pos cargo";
                memoryPointsGetInGunnerDir="pos cargo dir";
                gunnerName="$STR_Snowmobile_Passenger_shooter";
                gunnerCompartments="Compartment2";
                proxyIndex=1;
                isPersonTurret=1;
                class TurnIn
                {
                    limitsArrayTop[]=
                    {
                        {24,-88},
                        {24,-5}
                    };
                    limitsArrayBottom[]=
                    {
                        {-44,-88},
                        {-44,-5}
                    };
                };
            };
            class CargoTurret_02: CargoTurret_01
            {
                gunnerAction="passenger_inside_3";
                memoryPointsGetInGunner="pos cargo";
                memoryPointsGetInGunnerDir="pos cargo dir";
                gunnerName="$STR_Snowmobile_Rear_shooter";
                gunnerCompartments="Compartment2";
                proxyIndex=2;
                isPersonTurret=1;
                class TurnIn
                {
                    limitsArrayTop[]=
                    {
                        {54,-88},
                        {54,98}
                    };
                    limitsArrayBottom[]=
                    {
                        {-64,-88},
                        {-64,98}
                    };
                };
            };
        };

        class TransportBackpacks
        {
            bag_xx(B_TacticalPack_EUDF35_arctic,1);
        };
        class TransportItems
        {
            item_xx(FirstAidKit,3);
            item_xx(Medikit,1);
            item_xx(ToolKit,1);
        };
    };
    class B_EUDF35_A_Snowmobile: I_EUDF35_A_Snowmobile
    {
        side = 1;
        faction = "BLU_EUDF35_A_F";
        crew = "B_EUDF35_A_soldier_F";
    };
    class O_EUDF35_A_Snowmobile: I_EUDF35_A_Snowmobile
    {
        side = 0;
        faction = "OPF_EUDF35_A_F";
        crew = "O_EUDF35_A_soldier_F";
    };
};
