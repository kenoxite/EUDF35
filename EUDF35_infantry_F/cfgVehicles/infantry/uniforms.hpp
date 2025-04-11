// REGULAR
// -------
class I_EUDF35_Rifleman_Base_F: I_Soldier_base_F
{
    author="kenoxite";
    scope=0;
    accuracy=3.9000001;
    camouflage=1.2;
    cost=50000;
    minFireTime=9;
    picture="";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Soldier_F.jpg";
    editorSubcategory="EdSubcat_Personnel";
    portrait="";
    side=2;
    DLC="Enoch";
    identityTypes[] = {
        // "Head_Euro",
        // "Head_NATO",
        // "Head_Enoch",
        // "Head_African",
        // "Head_TK",
        "Head_NATO_camo_lush",
        "LanguageGRE_F",
        // "LanguageENGB_F",
        "G_EUDF35_Army"
        };

    genericNames="EUDF35Men";
    faction="IND_EUDF35_F";
    icon="iconMan";
    Items[]=
    {
        "FirstAidKit"
    };
    linkedItems[]=
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    RespawnItems[]=
    {
        "FirstAidKit"
    };
    respawnLinkedItems[]=
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_camo_EUDF35_woodland",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    
    model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
    modelSides[]={0,1,2,3};
    nakedUniform="U_BasicBody";
    uniformClass="U_I_CombatUniform_EUDF35_Woodland";

    vehicleClass="Men";
    Weapons[]=
    {
        "Throw",
        "Put"
    };
    respawnWeapons[]=
    {
        "Throw",
        "Put"
    };
    class EventHandlers
    {
    };

    class Wounds
    {
        tex[]={};
        mat[] = {"a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
    };
};

class I_EUDF35_Rifleman_Arctic_Base_F: I_EUDF35_Rifleman_Base_F
{
    author="kenoxite";
    scope=0;
    camouflage=1.2;
    side=2;
    faction="IND_EUDF35_A_F";
    DLC="Enoch";

    identityTypes[] = {
        "Head_NATO",
        "Head_Enoch",
        "Head_TK",
        "LanguageGRE_F",
        "G_EUDF35_Army_Arctic"
        };

    linkedItems[]=
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_light_EUDF35_arctic",
        "G_Bandanna_EUDF35_white",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    RespawnItems[]=
    {
        "FirstAidKit"
    };
    respawnLinkedItems[]=
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland",
        "H_HelmetB_light_EUDF35_arctic",
        "G_Bandanna_EUDF35_white",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    
    model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
    modelSides[]={0,1,2,3};
    uniformClass="U_I_EUDF35_Gorka_Arctic";
};

class I_EUDF35_Rifleman_Arid_Base_F: I_EUDF35_Rifleman_Base_F
{
    author="kenoxite";
    scope=0;
    camouflage=1.2;
    side=2;
    faction="IND_EUDF35_D_F";
    DLC="Enoch";

    identityTypes[] = {
        "Head_NATO",
        "Head_Enoch",
        "Head_TK",
        "LanguageGRE_F",
        "G_EUDF35_Army_Arid"
        };

    linkedItems[]=
    {
        "V_CarrierRigKBT_01_EUDF35_Arid",
        "H_HelmetB_light_EUDF35_arid",
        "G_Bandanna_tan_EUDF35",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
    RespawnItems[]=
    {
        "FirstAidKit"
    };
    respawnLinkedItems[]=
    {
        "V_CarrierRigKBT_01_EUDF35_Arid",
        "H_HelmetB_light_EUDF35_arid",
        "G_Bandanna_tan_EUDF35",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
    
    model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
    modelSides[]={0,1,2,3};
    uniformClass="U_I_CombatUniform_EUDF35_Arid";
};

// Combat Fatigues
class I_EUDF35_Rifleman_Woodland_UnifBase : I_EUDF35_Rifleman_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
    modelSides[]={0,1,2,3};

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland";
    hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Woodland_02_co.paa",
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Woodland_02_pants_co.paa",
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Woodland_02_gloves_co.paa"
    };
};
class I_EUDF35_Rifleman_Arid_UnifBase : I_EUDF35_Rifleman_Arid_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
    modelSides[]={0,1,2,3};

    uniformClass = "U_I_CombatUniform_EUDF35_Arid";
    hiddenSelections[]=
    {
        "Camo",
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Arid_02_pants_co.paa"
    };
    class Wounds
    {
        tex[]={};
        mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
    };
};
class I_EUDF35_Rifleman_Arid_Shortsleeve_UnifBase : I_EUDF35_Rifleman_Arid_UnifBase {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";

    uniformClass = "U_I_CombatUniform_EUDF35_Arid_Shortsleeve";

    class Wounds
    {
        tex[]={};
        mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
    };
};
class I_EUDF35_Rifleman_Arid_Tanktop_UnifBase : I_EUDF35_Rifleman_Arid_UnifBase {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_TankTop_F.p3d";

    uniformClass = "U_I_CombatUniform_EUDF35_Arid_Tanktop";

    hiddenSelections[] = {"camo1","camo2","camo3","insignia"};

    hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\uniforms\I_E_Soldier_01_TankTop_EUDF35_Arid_CO.paa",
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Arid_02_pants_co.paa",
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Arid_02_gloves_co.paa"
    };

    class Wounds
    {
        tex[]={};
        mat[] = {"a3\characters_f_exp\syndikat\data\u_i_c_soldier_bandit_5_f_1.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
    };
};

class I_EUDF35_Rifleman_Woodland_mp_UnifBase : I_EUDF35_Rifleman_Woodland_UnifBase {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;

    uniformClass = "U_I_CombatUniform_EUDF35_Woodland_mp";
    hiddenSelections[] = {"camo1","camo2","camo3"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Woodland_mp_02_co.paa",
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Woodland_mp_02_pants_co.paa",
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Woodland_02_gloves_co.paa"
    };
};
class I_EUDF35_Rifleman_Arid_Shortsleeve_mp_UnifBase : I_EUDF35_Rifleman_Arid_Shortsleeve_UnifBase {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;

    uniformClass = "U_I_CombatUniform_EUDF35_Arid_Shortsleeve_mp";
    hiddenSelections[]=
    {
        "Camo"
    };
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Arid_mp_02_pants_co.paa"
    };
};

// Combat Fatigues (Recon)
class I_EUDF35_Recon_Woodland_UnifBase : I_EUDF35_Rifleman_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
    modelSides[]={0,1,2,3};

    uniformClass = "U_I_CombatUniform_Recon_EUDF35_Woodland";
    hiddenSelections[]=
    {
        "Camo",
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Woodland_1_02_pants_co.paa"
    };

    class Wounds
    {
        tex[]={};
        mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
    };

};
class I_EUDF35_Recon_Arid_UnifBase : I_EUDF35_Recon_Woodland_UnifBase {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
    modelSides[]={0,1,2,3};

    uniformClass = "U_I_CombatUniform_Recon_EUDF35_Arid";
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Arid_1_02_pants_co.paa"
    };
};
class I_EUDF35_Recon_Arid_Shortsleeve_UnifBase : I_EUDF35_Recon_Arid_UnifBase {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";

    uniformClass = "U_I_CombatUniform_Recon_EUDF35_Arid_Shortsleeve";

    class Wounds
    {
        tex[]={};
        mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
    };
};
class I_EUDF35_Recon_Arid_Tanktop_UnifBase : I_EUDF35_Recon_Arid_UnifBase {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_TankTop_F.p3d";

    uniformClass = "U_I_CombatUniform_Recon_EUDF35_Arid_Tanktop";

    hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\uniforms\I_E_Soldier_01_TankTop_EUDF35_Arid_1_CO.paa",
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Arid_1_02_pants_co.paa",
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Arid_1_02_gloves_co.paa"
    };
    class Wounds
    {
        tex[]={};
        mat[] = {"a3\characters_f_exp\syndikat\data\u_i_c_soldier_bandit_5_f_1.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
    };
};

// Heli Pilot Coveralls
class I_EUDF35_Rifleman_HeliPilotCoveralls_UnifBase : I_EUDF35_Rifleman_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F\Common\coveralls.p3d";
    
    uniformClass = "U_I_EUDF35_HeliPilotCoveralls_Woodland";
    hiddenSelections[]=
    {
        "Camo",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\uniforms\coveralls_EUDF35_Woodland.paa"
    };
};
class I_EUDF35_Rifleman_HeliPilotCoveralls_Arid_UnifBase : I_EUDF35_Rifleman_Arid_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F\Common\coveralls.p3d";
    
    uniformClass = "U_I_EUDF35_HeliPilotCoveralls_Arid";
    hiddenSelections[]=
    {
        "Camo",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\uniforms\coveralls_EUDF35_Arid.paa"
    };
};

// Officer Combat Fatigues
class I_EUDF35_Officer_woodland_UnifBase : I_EUDF35_Rifleman_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";

    uniformClass = "U_I_EUDF35_OfficerUniform_Woodland";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Woodland_02_officer_co.paa",
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Woodland_02_pants_co.paa"
    };
};

class I_EUDF35_Officer_arid_UnifBase : I_EUDF35_Rifleman_Arid_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";

    uniformClass = "U_I_EUDF35_OfficerUniform_Arid";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Arid_02_officer_co.paa",
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Arid_02_pants_co.paa"
    };
};

// Pilot Coveralls
class I_EUDF35_PilotCoveralls_UnifBase : I_EUDF35_Rifleman_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model = "\A3\characters_F\Common\pilot_f.p3d";
    
    uniformClass = "U_I_EUDF35_pilotCoveralls";
    hiddenSelections[] = {"Camo","insignia"};
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\pilot_suit_rus_co.paa"};
};


// RECON
// -----
class I_EUDF35_Recon_Base_F: I_EUDF35_Rifleman_Base_F
{
    author="kenoxite";
    scope=0;
    accuracy=3.9000001;
    cost=50000;
    minFireTime=9;
    picture="";
    editorSubcategory="EdSubcat_Personnel_SpecialForces";
    
    identityTypes[] = {
        "Head_NATO_camo_lush",
        "LanguageGRE_F",
        "G_EUDF35_Cap"
        };
    
    class SpeechVariants
    {
        class Default
        {
            speechSingular[]=
            {
                "veh_infantry_SF_s"
            };
            speechPlural[]=
            {
                "veh_infantry_SF_p"
            };
        };
    };
    textSingular="$STR_A3_nameSound_veh_infantry_SF_s";
    textPlural="$STR_A3_nameSound_veh_infantry_SF_p";
    nameSound="veh_infantry_SF_s";
    vehicleClass="MenRecon";
    role="Rifleman";
    camouflage=0.60000002;
    detectSkill=18;

    linkedItems[]=
    {
        "V_Chestrig_EUDF35_Woodland_1",
        "H_Cap_EUDF35_woodland_1_hs",
        "G_Tactical_Clear_EUDF35",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnLinkedItems[]=
    {
        "V_Chestrig_EUDF35_Woodland_1",
        "H_Cap_EUDF35_woodland_1_hs",
        "G_Tactical_Clear_EUDF35",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    RANDOM_HEADGEAR_RECON();
};
class I_EUDF35_A_Recon_Base_F: I_EUDF35_Recon_Base_F
{
    author="kenoxite";
    scope=0;
    faction="IND_EUDF35_A_F";
    
    identityTypes[] = {
        "Head_NATO",
        "Head_Enoch",
        "Head_TK",
        "LanguageGRE_F",
        "G_EUDF35_Cap_Arctic"
        };

    linkedItems[]=
    {
        "V_Chestrig_EUDF35_arctic",
        "H_Watchcap_EUDF35_arctic",
        "G_Balaclava_combat_EUDF35_white",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnLinkedItems[]=
    {
        "V_Chestrig_EUDF35_arctic",
        "H_Watchcap_EUDF35_arctic",
        "G_Balaclava_combat_EUDF35_white",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    RANDOM_HEADGEAR_RECON_ARCTIC();
};
class I_EUDF35_D_Recon_Base_F: I_EUDF35_Recon_Base_F
{
    author="kenoxite";
    scope=0;
    faction="IND_EUDF35_D_F";
    
    identityTypes[] = {
        "Head_NATO_camo_arid",
        "LanguageGRE_F",
        "G_EUDF35_Cap_Arid"
        };

    linkedItems[]=
    {
        "V_Chestrig_EUDF35_Arid_1",
        "H_Cap_EUDF35_arid_1_hs",
        "G_Tactical_Clear_EUDF35",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
    respawnLinkedItems[]=
    {
        "V_Chestrig_EUDF35_Arid_1",
        "H_Cap_EUDF35_arid_1_hs",
        "G_Tactical_Clear_EUDF35",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };

    RANDOM_HEADGEAR_RECON_ARID();
};

// Recon Fatigues (Gorka)
//  (with default uniform values, not the Granit ones)
class I_EUDF35_Gorka_woodland_UnifBase : I_EUDF35_Rifleman_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
    DLC="Enoch";

    uniformClass = "U_I_EUDF35_Gorka_Woodland";
    hiddenSelections[]=
    {
        "camo_1",
        "camo_2",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\uniforms\Gorka_01_EUDF35_woodland.paa"
    };

    class Wounds
    {
        tex[]={};
        mat[]=
        {
            "a3\Characters_F_Enoch\Uniforms\Data\Gorka_01.rvmat",
            "a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_injury.rvmat",
            "a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_injury.rvmat",
            "A3\Characters_F\Common\Data\basicbody.rvmat",
            "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
            "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
            "a3\characters_f\heads\data\hl_white.rvmat",
            "a3\characters_f\heads\data\hl_white_injury.rvmat",
            "a3\characters_f\heads\data\hl_white_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
        };
    };
};
class I_EUDF35_Gorka_arctic_UnifBase : I_EUDF35_Gorka_woodland_UnifBase {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;

    uniformClass = "U_I_EUDF35_Gorka_Arctic";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\uniforms\Gorka_01_EUDF35_arctic.paa"
    };
};

// SF DA
// -----
class I_EUDF35_DA_Base_F: I_EUDF35_Recon_Base_F
{
    identityTypes[] = {
        "Head_NATO_camo_lush",
        "LanguageGRE_F",
        "G_EUDF35_SF"
        };

    uniformClass = "U_I_CombatUniform_Recon_EUDF35_Woodland";

    linkedItems[]=
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland_1",
        "H_HelmetHBK_headset_EUDF35_woodland_1",
        "G_Balaclava_combat_EUDF35_green",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnLinkedItems[]=
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland_1",
        "H_HelmetHBK_headset_EUDF35_woodland_1",
        "G_Balaclava_combat_EUDF35_green",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    RANDOM_HEADGEAR_DA();
};

class I_EUDF35_A_DA_Base_F: I_EUDF35_DA_Base_F
{
    faction="IND_EUDF35_A_F";

    identityTypes[] = {
        "Head_NATO",
        "Head_Enoch",
        "Head_TK",
        "LanguageGRE_F",
        "G_EUDF35_SF_Arctic"
        };

    uniformClass = "U_I_EUDF35_Gorka_Arctic";

    linkedItems[]=
    {
        "V_CarrierRigKBT_01_EUDF35_arctic",
        "H_HelmetHBK_headset_EUDF35_arctic",
        "G_Balaclava_combat_EUDF35_white",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnLinkedItems[]=
    {
        "V_CarrierRigKBT_01_EUDF35_arctic",
        "H_HelmetHBK_headset_EUDF35_arctic",
        "G_Balaclava_combat_EUDF35_white",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    RANDOM_HEADGEAR_DA_ARCTIC();
};

class I_EUDF35_D_DA_Base_F: I_EUDF35_DA_Base_F
{
    faction="IND_EUDF35_D_F";

    identityTypes[] = {
        "Head_NATO",
        "Head_Enoch",
        "Head_TK",
        "LanguageGRE_F",
        "G_EUDF35_SF_Arid"
        };

    uniformClass = "U_I_CombatUniform_Recon_EUDF35_Arid";

    linkedItems[]=
    {
        "V_CarrierRigKBT_01_EUDF35_arid_1",
        "H_HelmetHBK_headset_EUDF35_arid_1",
        "G_Combat_EUDF35",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
    respawnLinkedItems[]=
    {
        "V_CarrierRigKBT_01_EUDF35_arctic",
        "H_HelmetHBK_headset_EUDF35_arctic",
        "G_Combat_EUDF35",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };

    RANDOM_HEADGEAR_DA_ARID();
};

// SNIPERS
// -------
class I_EUDF35_Sniper_Base_F : I_EUDF35_Recon_Base_F {
    author = "kenoxite";
    scope = 0;
    displayName = "Sniper";

    vehicleClass="MenSniper";
    role="Marksman";
    primaryAmmoCoef=0.2;
    secondaryAmmoCoef=0.050000001;
    handgunAmmoCoef=0.1;
    identityTypes[] = {
        "Head_NATO_camo_lush",
        "LanguageGRE_F",
        "G_EUDF35_Cap"
        };
    
    class SpeechVariants
    {
        class Default
        {
            speechSingular[]=
            {
                "veh_infantry_SF_s"
            };
            speechPlural[]=
            {
                "veh_infantry_SF_p"
            };
        };
    };
    textSingular="$STR_A3_nameSound_veh_infantry_SF_s";
    textPlural="$STR_A3_nameSound_veh_infantry_SF_p";
    nameSound="veh_infantry_SF_s";

    threat[]={0.80000001,0.30000001,0.30000001};
    camouflage=0.60000002;
    cost=250000;
};
class I_EUDF35_A_Sniper_Base_F : I_EUDF35_Sniper_Base_F {
    author = "kenoxite";
    scope = 0;
    faction="IND_EUDF35_A_F";
    identityTypes[] = {
        "Head_NATO",
        "Head_Enoch",
        "Head_TK",
        "LanguageGRE_F",
        "G_EUDF35_Cap_Arctic"
        };
};
class I_EUDF35_D_Sniper_Base_F : I_EUDF35_Sniper_Base_F {
    author = "kenoxite";
    scope = 0;
    faction="IND_EUDF35_D_F";
    identityTypes[] = {
        "Head_NATO_camo_arid",
        "LanguageGRE_F",
        "G_EUDF35_Cap_Arid"
        };
};

class I_EUDF35_Sniper_woodland_UnifBase : I_EUDF35_Sniper_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F_Beta\INDEP\ia_sniper.p3d";
    
    uniformClass = "U_I_EUDF35_GhillieSuit_Woodland";
    hiddenSelections[]=
    {
        "camo",
        "camo3"
    };

    hiddenSelectionsTextures[] =
    {
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Woodland_02_pants_co.paa",
        // "\A3\characters_f\common\data\ghillie_woodland_co.paa" // woodland
        // "\A3\characters_f\common\data\ghillie_mcamo_co.paa" // multicam
        //"\A3\characters_f\common\data\ghillie_desert_co.paa" // desert
        //"\A3\characters_f_exp\opfor\data\ghillie_tna_co.paa" // tropical CSAT
        "\A3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa" // tropical NATO
    };
};
class I_EUDF35_Sniper_woodland_1_UnifBase : I_EUDF35_Sniper_woodland_UnifBase {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    
    uniformClass = "U_I_CA2035_GhillieSuit_Woodland_1";

    hiddenSelectionsTextures[] =
    {
        "\EUDF35_infantry_data_F\data\uniforms\i_EUDF35_Woodland_1_02_pants_co.paa",
        // "\A3\characters_f\common\data\ghillie_woodland_co.paa" // woodland
        // "\A3\characters_f\common\data\ghillie_mcamo_co.paa" // multicam
        //"\A3\characters_f\common\data\ghillie_desert_co.paa" // desert
        //"\A3\characters_f_exp\opfor\data\ghillie_tna_co.paa" // tropical CSAT
        "\A3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa" // tropical NATO
    };
};

class I_EUDF35_Sniper_full_woodland_UnifBase : I_EUDF35_Sniper_woodland_UnifBase {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model = "\A3\Characters_F_Mark\INDEP\i_fullghillie_f.p3d";
    DLC = "Mark";
    
    uniformClass = "U_I_EUDF35_FullGhillieSuit_Woodland";
    hiddenSelections[] = {"camo","camo3","camo4"};
    hiddenSelectionsTextures[] = {
        "\A3\Characters_F_Mark\INDEP\Data\ghillie_coverall_aaf_co.paa",
        "\A3\Characters_F_Mark\Common\Data\ghillie_threads_lsh_ca.paa",
        "\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_lsh_co.paa"
    };
};

// DIVERS
// ------
class I_Soldier_diver_base_F;
class I_EUDF35_Diver_Base_F: I_Soldier_diver_base_F
{
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    faction="IND_EUDF35_F";

    model = "\A3\characters_F\Common\diver_slotable";
    modelSides[]={0,1,2,3};

    uniformClass = "U_I_EUDF35_Wetsuit";
    hiddenSelections[] = {"Camo1","Camo2","insignia"};
    hiddenSelectionsTextures[] = {
        "\A3\Characters_F\Common\Data\diver_suit_rus_co.paa",
        "\A3\Characters_F\Common\Data\diver_equip_rus_co.paa"
    };
    hiddenUnderwaterSelections[] = {"hide"};
    hiddenUnderwaterSelectionsTextures[] = {
        "\A3\characters_f\common\data\diver_equip_nato_co.paa",
        "\A3\characters_f\common\data\diver_equip_nato_co.paa",
        "\A3\characters_f\data\visors_ca.paa"
    };

    identityTypes[] = {
        "Head_NATO",
        "Head_Enoch",
        "Head_TK",
        "LanguageGRE_F",
        "G_EUDF35_None"
        };

    linkedItems[]=
    {
        "V_RebreatherIA",
        "G_I_Diving",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[]=
    {
        "V_RebreatherIA",
        "G_I_Diving",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    weapons[]=
    {
        "arifle_SDAR_F",
        "hgun_Pistol_heavy_01_green_EUDF35_snds_F",
        "Throw",
        "Put"
    };
    respawnWeapons[]=
    {
        "arifle_SDAR_F",
        "hgun_Pistol_heavy_01_green_EUDF35_snds_F",
        "Throw",
        "Put"
    };

    magazines[] = {
        mag_3(30Rnd_556x45_Stanag),
        mag_3(20Rnd_556x45_UW_mag),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(SmokeShellBlue),
        mag_4(Chemlight_blue)
        };
    respawnMagazines[] = {
        mag_3(30Rnd_556x45_Stanag),
        mag_3(20Rnd_556x45_UW_mag),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(SmokeShellBlue),
        mag_4(Chemlight_blue)
        };
};
class I_EUDF35_A_Diver_Base_F: I_EUDF35_Diver_Base_F
{
    author = "kenoxite";
    scope = 1;
    faction="IND_EUDF35_A_F";
};
class I_EUDF35_D_Diver_Base_F: I_EUDF35_Diver_Base_F
{
    author = "kenoxite";
    scope = 1;
    faction="IND_EUDF35_D_F";
};

// PARADE OFFICER
// --------------
class I_EUDF_ParadeUniform_01_Base_F: I_EUDF35_Rifleman_Base_F
{
    author="kenoxite";
    scope = 1;
    scopeCurator = 1;
    camouflage=1.2;
    faction="IND_EUDF35_F";

    identityTypes[] = {
        "Head_NATO",
        "Head_Enoch",
        "Head_TK",
        "LanguageGRE_F",
        "G_EUDF35_None"
        };

    linkedItems[]=
    {
        "H_ParadeDressCap_01_EUDF_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    RespawnItems[]=
    {
    };
    respawnLinkedItems[]=
    {
        "H_ParadeDressCap_01_EUDF_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    
    modelSides[]={0,1,2,3};
    uniformClass="U_I_ParadeUniform_01_EUDF";

    hiddenSelections[] = {"camo1","camo2","camo3","ribbon","nametag"};

    model = "\a3\Characters_F_AoW\Uniforms\ParadeUniform_01_F";
    hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_US.rvmat"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\uniforms\ParadeUniform_01_EUDF.paa",
        "",
        "\EUDF35_infantry_data_F\data\uniforms\ParadeUniform_Decorated_01_EUDF_CO.paa"
    };

    class Wounds
    {
        tex[]={};
        mat[] = {"a3\Characters_F_AoW\Uniforms\Data\paradeuniform_decorated_01.rvmat","a3\Characters_F_AoW\Uniforms\Data\paradeuniform_decorated_01_injury.rvmat","a3\Characters_F_AoW\Uniforms\Data\paradeuniform_decorated_01_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
    };
};
class I_EUDF_ParadeUniform_01_decorated_Base_F: I_EUDF_ParadeUniform_01_Base_F
{
    author="kenoxite";
    scope = 1;
    scopeCurator = 1;

    uniformClass="U_I_ParadeUniform_01_EUDF_decorated";

    hiddenSelections[] = {"camo1","camo2","camo3","ribbon","nametag"};

    model = "\a3\Characters_F_AoW\Uniforms\ParadeUniform_01_F";
    hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_US.rvmat"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\uniforms\ParadeUniform_01_EUDF.paa",
        "\EUDF35_infantry_data_F\data\uniforms\ParadeUniform_01_EUDF.paa",
        "\EUDF35_infantry_data_F\data\uniforms\ParadeUniform_Decorated_01_EUDF_CO.paa",
        "a3\characters_f_aow\uniforms\data\Ribbon_01_AAF_CO.paa"
    };
};
