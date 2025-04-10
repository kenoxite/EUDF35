class HeadgearItem;

// HELMETS
// - Combat Helmet (Camo)
class H_HelmetB_camo;
class H_HelmetB_camo_EUDF35_base: H_HelmetB_camo
{
    author="kenoxite";
    scope=0;
    weaponPoolAvailable=0;
    displayName="Combat Helmet (Camo)";
    picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_camo_ca.paa";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {
        "\A3\Characters_f\BLUFOR\Data\equip1_co.paa",
        "\A3\characters_f\common\data\ghillie2_co.paa"
    };
    descriptionShort="$STR_A3_SP_AL_II";
    class ItemInfo: HeadgearItem
    {
        mass=40;
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
        modelSides[]={3,1};
        hiddenSelections[] = {"camo1","camo2"};
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=6;
                passThrough=0.5;
            };
        };
    };

    ALLOWED_FACEWEAR();
};

class H_HelmetB_camo_EUDF35_woodland: H_HelmetB_camo_EUDF35_base
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Combat Helmet (Camo) (EuroForest)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_HelmetB_camo_EUDF35_woodland.paa";
    modelSides[]={0,1,2,3};
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\equip1_co.paa",
        "\EUDF35_infantry_data_F\data\headgear\ghillie2_co.paa"
    };
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";

    class ItemInfo: ItemInfo
    {
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
    };
};

// - Light Combat Helmet
class H_HelmetB_light_sand;
class H_HelmetB_light_EUDF35_base: H_HelmetB_light_sand
{
    author="kenoxite";
    scope=0;
    weaponPoolAvailable=0;
    displayName = "Light Combat Helmet";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "\A3\Characters_F\BLUFOR\Data\equip1_co.paa"
    };

    ALLOWED_FACEWEAR();
};
class H_HelmetB_light_EUDF35_woodland: H_HelmetB_light_EUDF35_base
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Light Combat Helmet (EuroForest)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_HelmetB_light_EUDF35_woodland.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\equip1_EUDF35_woodland.paa"
    };
};
class H_HelmetB_light_EUDF35_woodland_1: H_HelmetB_light_EUDF35_base
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Light Combat Helmet (EuroAlpine)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_HelmetB_light_EUDF35_woodland_1.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\equip1_EUDF35_woodland_1.paa"
    };
};
class H_HelmetB_light_EUDF35_arctic: H_HelmetB_light_EUDF35_base
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Light Combat Helmet (EuroArctic)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_HelmetB_light_EUDF35_arctic.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\equip1_EUDF35_arctic.paa"
    };
    ALLOWED_FACEWEAR_ARCTIC();
};
class H_HelmetB_light_EUDF35_arid: H_HelmetB_light_EUDF35_base
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Light Combat Helmet (EuroArid)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_HelmetB_light_EUDF35_arid.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\equip1_EUDF35_arid.paa"
    };
    ALLOWED_FACEWEAR_ARID();
};

class H_HelmetB_light_EUDF35_arid_1: H_HelmetB_light_EUDF35_base
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Light Combat Helmet (Brown)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_HelmetB_light_EUDF35_arid_1.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\equip1_EUDF35_arid_1.paa"
    };
    ALLOWED_FACEWEAR_ARID();
};

// - Advanced Modular Helmet
class H_HelmetHBK_headset_F;
class H_HelmetHBK_headset_EUDF35_woodland_1: H_HelmetHBK_headset_F
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Advanced Modular Helmet (EuroAlpine)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_HelmetHBK_headset_EUDF35_woodland_1.paa";
    modelSides[]={0,1,2,3};
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\H_HelmetHBK_01_EUDF35_woodland_1.paa"
    };

    ALLOWED_FACEWEAR_SF();
};
class H_HelmetHBK_headset_EUDF35_arctic: H_HelmetHBK_headset_EUDF35_woodland_1
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Advanced Modular Helmet (EuroArctic)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_HelmetHBK_headset_EUDF35_arctic.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\H_HelmetHBK_01_EUDF35_arctic.paa"
    };
    ALLOWED_FACEWEAR_SF_ARCTIC();
};
class H_HelmetHBK_headset_EUDF35_arid_1: H_HelmetHBK_headset_EUDF35_woodland_1
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Advanced Modular Helmet (EuroCam)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_HelmetHBK_headset_EUDF35_arid_1.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\H_HelmetHBK_01_EUDF35_arid_1.paa"
    };
    ALLOWED_FACEWEAR_SF_ARID();
};

// - Crew Helmet
class H_HelmetCrew_B;
class H_HelmetCrew_EUDF35_woodland : H_HelmetCrew_B
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    modelSides[]={0,1,2,3};
    displayName="Crew Helmet (EuroForest) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_H_HelmetCrew_EUDF35_woodland.paa";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\vests\armor1_EUDF35_woodland_co.paa"
    };
};
class H_HelmetCrew_EUDF35_arid : H_HelmetCrew_B
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    modelSides[]={0,1,2,3};
    displayName="Crew Helmet (EuroArid) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_H_HelmetCrew_EUDF35_arid.paa";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\vests\armor1_EUDF35_arid_co.paa"
    };
};

// CAPS
class H_Cap_oli;
class H_Cap_EUDF35_woodland: H_Cap_oli
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Cap (EuroForest)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Cap_EUDF35_woodland.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\capb_EUDF35_woodland.paa"
    };
    ALLOWED_FACEWEAR_CAP();
};
class H_Cap_EUDF35_woodland_1: H_Cap_EUDF35_woodland
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Cap (EuroAlpine)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Cap_EUDF35_woodland_1.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\capb_EUDF35_woodland_1.paa"
    };
};
class H_Cap_EUDF35_arctic: H_Cap_EUDF35_woodland
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Cap (EuroArctic)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Cap_EUDF35_arctic.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\capb_EUDF35_arctic.paa"
    };
    ALLOWED_FACEWEAR_CAP_ARCTIC();
};
class H_Cap_EUDF35_arid: H_Cap_EUDF35_woodland
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Cap (EuroArid)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Cap_EUDF35_arid.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\capb_EUDF35_arid.paa"
    };
    ALLOWED_FACEWEAR_CAP_ARID();
};
class H_Cap_EUDF35_arid_1: H_Cap_EUDF35_arid
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Cap (EuroCam)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Cap_EUDF35_arid_1.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\capb_EUDF35_arid_1.paa"
    };
};

// CAPS - HEADSET
class H_Cap_oli_hs;
class H_Cap_EUDF35_woodland_hs: H_Cap_oli_hs
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Cap (EuroForest, Headset)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Cap_EUDF35_woodland_hs.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\capb_EUDF35_woodland.paa"
    };
    ALLOWED_FACEWEAR_CAP();
};
class H_Cap_EUDF35_woodland_1_hs: H_Cap_EUDF35_woodland_hs
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Cap (EuroAlpine, Headset)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Cap_EUDF35_woodland_1_hs.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\capb_EUDF35_woodland_1.paa"
    };
};
class H_Cap_EUDF35_arctic_hs: H_Cap_EUDF35_woodland_hs
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Cap (EuroArctic, Headset)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Cap_EUDF35_arctic_hs.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\capb_EUDF35_arctic.paa"
    };
    ALLOWED_FACEWEAR_CAP_ARCTIC();
};
class H_Cap_EUDF35_arid_hs: H_Cap_EUDF35_woodland_hs
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Cap (EuroArid, Headset)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Cap_EUDF35_arid_hs.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\capb_EUDF35_arid.paa"
    };
    ALLOWED_FACEWEAR_CAP_ARID();
};
class H_Cap_EUDF35_arid_1_hs: H_Cap_EUDF35_arid_hs
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Cap (EuroCam, Headset)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Cap_EUDF35_arid_1_hs.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\capb_EUDF35_arid_1.paa"
    };
};

// BERETS
class H_Beret_gen_F;
class H_Beret_gen_EUDF35: H_Beret_gen_F
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Beret [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Beret_gen_EUDF35.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\h_beret_EUDF35.paa"
    };
    ALLOWED_FACEWEAR_CAP();
};
class H_Beret_gen_EUDF35_mp: H_Beret_gen_EUDF35
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Beret (MP) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Beret_gen_EUDF35_mp.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\h_beret_EUDF35_mp.paa"
    };
};

// MILITARY CAPS
class H_MilCap_grn;
class H_MilCap_EUDF35_woodland: H_MilCap_grn
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Military Cap (EuroForest)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_MilCap_EUDF35_woodland.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\cappatrol_EUDF35_woodland.paa"
    };
    ALLOWED_FACEWEAR_CAP();
};
class H_MilCap_EUDF35_woodland_1: H_MilCap_EUDF35_woodland
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Military Cap (EuroAlpine)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_MilCap_EUDF35_woodland_1.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\cappatrol_EUDF35_woodland_1.paa"
    };
};
class H_MilCap_EUDF35_arid: H_MilCap_EUDF35_woodland
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Military Cap (EuroArid)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_MilCap_EUDF35_arid.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\cappatrol_EUDF35_arid.paa"
    };
    ALLOWED_FACEWEAR_CAP_ARID();
};
class H_MilCap_EUDF35_arid_1: H_MilCap_EUDF35_arid
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Military Cap (EuroCam)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_MilCap_EUDF35_arid_1.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\cappatrol_EUDF35_arid_1.paa"
    };
};

// BOONIEHATS
class H_Booniehat_khk;
class H_Booniehat_EUDF35_woodland: H_Booniehat_khk
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Booniehat (EuroForest)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Booniehat_EUDF35_woodland.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\booniehat_EUDF35_woodland_co.paa"
    };
    ALLOWED_FACEWEAR_CAP();
};
class H_Booniehat_EUDF35_woodland_1: H_Booniehat_EUDF35_woodland
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Booniehat (EuroAlpine)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Booniehat_EUDF35_woodland_1.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\booniehat_EUDF35_woodland_1_co.paa"
    };
};
class H_Booniehat_EUDF35_arid: H_Booniehat_EUDF35_woodland
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Booniehat (EuroArid)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Booniehat_EUDF35_arid.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\booniehat_EUDF35_arid_co.paa"
    };
    ALLOWED_FACEWEAR_CAP_ARID();
};
class H_Booniehat_EUDF35_arid_1: H_Booniehat_EUDF35_arid
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Booniehat (EuroCam)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Booniehat_EUDF35_arid_1.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\booniehat_EUDF35_arid_1_co.paa"
    };
};

// BOONIEHATS - HEADSET
class H_Booniehat_khk_hs;
class H_Booniehat_EUDF35_woodland_hs: H_Booniehat_khk_hs
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Booniehat (EuroForest, Headset)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Booniehat_EUDF35_woodland_hs.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\booniehat_EUDF35_woodland_co.paa"
    };
    ALLOWED_FACEWEAR_CAP();
};
class H_Booniehat_EUDF35_woodland_1_hs: H_Booniehat_EUDF35_woodland_hs
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Booniehat (EuroAlpine, Headset)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Booniehat_EUDF35_woodland_1_hs.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\booniehat_EUDF35_woodland_1_co.paa"
    };
};
class H_Booniehat_EUDF35_arid_hs: H_Booniehat_EUDF35_woodland_hs
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Booniehat (EuroArid, Headset)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Booniehat_EUDF35_arid_hs.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\booniehat_EUDF35_arid_co.paa"
    };
    ALLOWED_FACEWEAR_CAP_ARID();
};
class H_Booniehat_EUDF35_arid_1_hs: H_Booniehat_EUDF35_arid_hs
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Booniehat (EuroCam, Headset)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Booniehat_EUDF35_arid_1_hs.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\booniehat_EUDF35_arid_1_co.paa"
    };
};

// BEANIES
class H_Watchcap_camo;
class H_Watchcap_EUDF35_woodland: H_Watchcap_camo
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Beanie (EuroForest)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Watchcap_EUDF35_woodland.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\woolhat_EUDF35_woodland_co.paa"
    };
    ALLOWED_FACEWEAR_CAP();
};
class H_Watchcap_EUDF35_woodland_1: H_Watchcap_EUDF35_woodland
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Beanie (EuroAlpine)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Watchcap_EUDF35_woodland_1.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\woolhat_EUDF35_woodland_1_co.paa"
    };
};
class H_Watchcap_EUDF35_arctic: H_Watchcap_EUDF35_woodland
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Beanie (EuroArctic)";
    picture="\EUDF35_core_F\data\previews\items\icon_H_Watchcap_EUDF35_arctic.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\woolhat_EUDF35_arctic_co.paa"
    };
    ALLOWED_FACEWEAR_CAP_ARCTIC();
};

// PARADE CAP
class H_ParadeDressCap_01_CSAT_F;
class H_ParadeDressCap_01_EUDF_F: H_ParadeDressCap_01_CSAT_F
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Parade Cap [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_H_ParadeDressCap_01_EUDF_F.paa";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsMaterials[] = {"a3\Characters_F_AoW\Headgear\Data\ParadeDressCap_01_CSAT_F.rvmat"};
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\headgear\ParadeDressCap_01_EUDF_F_ca.paa"
    };
};
