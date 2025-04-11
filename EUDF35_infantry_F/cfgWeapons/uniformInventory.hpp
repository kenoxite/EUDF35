class Default;
class UniformItem;
class Uniform_Base;

// Combat uniform
class U_I_CombatUniform_EUDF35_Woodland: Uniform_Base
{
    author="kenoxite";
    scope=2;
    displayName="Combat Fatigues (EuroForest) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_CombatUniform_EUDF35_Woodland.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    modelSides[]={0,1,2,3};
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\Suitpacks\suitpack_soldier_EUDF35_woodland.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Rifleman_Woodland_UnifBase";
        containerClass="Supply40";
        mass=40;
    };
};
class U_I_CombatUniform_EUDF35_Arid: U_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    displayName="Combat Fatigues (EuroArid) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_CombatUniform_EUDF35_Arid.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\Suitpacks\suitpack_soldier_EUDF35_arid.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Rifleman_Arid_UnifBase";
        containerClass="Supply40";
        mass=40;
    };
};
class U_I_CombatUniform_EUDF35_Arid_Shortsleeve: U_I_CombatUniform_EUDF35_Arid
{
    author="kenoxite";
    scope=2;
    displayName="Combat Fatigues (EuroArid) (Rolled-up) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_CombatUniform_EUDF35_Arid.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\Suitpacks\suitpack_soldier_EUDF35_arid.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Rifleman_Arid_Shortsleeve_UnifBase";
        containerClass="Supply40";
        mass=40;
    };
};
class U_I_CombatUniform_EUDF35_Arid_Tanktop: U_I_CombatUniform_EUDF35_Arid
{
    author="kenoxite";
    scope=2;
    displayName="Combat Fatigues (EuroArid) (Tank Top) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_CombatUniform_EUDF35_Arid_Tanktop.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\Suitpacks\suitpack_soldier_EUDF35_arid.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Rifleman_Arid_Tanktop_UnifBase";
        containerClass="Supply40";
        mass=40;
    };
};
class U_I_CombatUniform_EUDF35_Woodland_mp: U_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    displayName="Combat Fatigues (EuroForest, MP) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_CombatUniform_EUDF35_Woodland.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\Suitpacks\suitpack_soldier_EUDF35_woodland.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Rifleman_Woodland_mp_UnifBase";
        containerClass="Supply40";
        mass=40;
    };
};
class U_I_CombatUniform_EUDF35_Arid_Shortsleeve_mp: U_I_CombatUniform_EUDF35_Arid_Shortsleeve
{
    author="kenoxite";
    scope=2;
    displayName="Combat Fatigues (EuroArid, MP) (Rolled-up) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_CombatUniform_EUDF35_Arid.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\Suitpacks\suitpack_soldier_EUDF35_arid.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Rifleman_Arid_Shortsleeve_mp_UnifBase";
        containerClass="Supply40";
        mass=40;
    };
};

// Combat uniform (Sweater)

// Combat uniform (Recon)
class U_I_CombatUniform_Recon_EUDF35_Woodland: U_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    displayName="Combat Fatigues (Recon, EuroAlpine) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_CombatUniform_Recon_EUDF35_Woodland.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\Suitpacks\suitpack_soldier_EUDF35_woodland_1.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Recon_Woodland_UnifBase";
        containerClass="Supply40";
        mass=40;
    };
};
class U_I_CombatUniform_Recon_EUDF35_Arid: U_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    displayName="Combat Fatigues (EuroCam) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_CombatUniform_Recon_EUDF35_Arid.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\Suitpacks\suitpack_soldier_EUDF35_arid_1.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Recon_Arid_UnifBase";
        containerClass="Supply40";
        mass=40;
    };
};
class U_I_CombatUniform_Recon_EUDF35_Arid_Shortsleeve: U_I_CombatUniform_Recon_EUDF35_Arid
{
    author="kenoxite";
    scope=2;
    displayName="Combat Fatigues (EuroCam) (Rolled-up) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_CombatUniform_Recon_EUDF35_Arid_Shortsleeve.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\Suitpacks\suitpack_soldier_EUDF35_arid_1.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Recon_Arid_Shortsleeve_UnifBase";
        containerClass="Supply40";
        mass=40;
    };
};
class U_I_CombatUniform_Recon_EUDF35_Arid_Tanktop: U_I_CombatUniform_Recon_EUDF35_Arid
{
    author="kenoxite";
    scope=2;
    displayName="Combat Fatigues (EuroCam) (Tank Top) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_CombatUniform_Recon_EUDF35_Arid_Tanktop.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\Suitpacks\suitpack_soldier_EUDF35_arid_1.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Recon_Arid_Tanktop_UnifBase";
        containerClass="Supply40";
        mass=40;
    };
};

// Combat uniform (Officer)
class U_I_EUDF35_OfficerUniform_Woodland: U_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    displayName="Combat Fatigues (Officer, EuroForest) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_EUDF35_OfficerUniform_Woodland.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\Suitpacks\suitpack_soldier_EUDF35_woodland.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Officer_woodland_UnifBase";
        containerClass="Supply40";
        mass=40;
    };
};
class U_I_EUDF35_OfficerUniform_Arid: U_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    displayName="Combat Fatigues (Officer, EuroArid) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_EUDF35_OfficerUniform_Arid.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\Suitpacks\suitpack_soldier_EUDF35_arid.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Officer_arid_UnifBase";
        containerClass="Supply40";
        mass=40;
    };
};


// Heli Pilot Coveralls
class U_I_EUDF35_HeliPilotCoveralls_Woodland: U_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    displayName="Heli Pilot Coveralls (EuroForest) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_EUDF35_HeliPilotCoveralls_Woodland.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\Suitpacks\suitpack_soldier_EUDF35_woodland.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Rifleman_HeliPilotCoveralls_UnifBase";
        containerClass="Supply40";
        mass=40;
    };
};
class U_I_EUDF35_HeliPilotCoveralls_Arid: U_I_EUDF35_HeliPilotCoveralls_Woodland
{
    author="kenoxite";
    scope=2;
    displayName="Heli Pilot Coveralls (EuroArid) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_EUDF35_HeliPilotCoveralls_Arid.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\Suitpacks\suitpack_soldier_EUDF35_arid.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Rifleman_HeliPilotCoveralls_Arid_UnifBase";
        containerClass="Supply40";
        mass=40;
    };
};

// Recon Fatigues (Gorka)
class U_I_EUDF35_Gorka_Woodland: U_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    displayName="Recon Fatigues (EuroAlpine)";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_EUDF35_Gorka_Woodland.paa";
    DLC="Enoch";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\Suitpacks\suitpack_soldier_EUDF35_woodland_1.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Gorka_woodland_UnifBase";
        containerClass="Supply40";
        mass=40;
    };
};
class U_I_EUDF35_Gorka_Arctic: U_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    displayName="Recon Fatigues (EuroArctic)";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_EUDF35_Gorka_Arctic.paa";
    DLC="Enoch";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_infantry_data_F\data\Suitpacks\suitpack_soldier_EUDF35_arctic.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Gorka_arctic_UnifBase";
        containerClass="Supply40";
        mass=40;
    };
};

// Ghillie Suit (EuroForest)
class U_I_EUDF35_GhillieSuit_Woodland: U_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    displayName="Ghillie Suit (EuroForest)";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_EUDF35_GhillieSuit_Woodland.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelectionsTextures[]=
    {
        "\A3\characters_f\common\data\ghillie_woodland_co.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Sniper_woodland_UnifBase";
        containerClass="Supply60";
        mass=60;
    };
};

// Ghillie Suit (EuroAlpine)
class U_I_EUDF35_GhillieSuit_Woodland_1: U_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    displayName="Ghillie Suit (EuroAlpine)";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_EUDF35_GhillieSuit_Woodland_1.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelectionsTextures[]=
    {
        "\A3\characters_f\common\data\ghillie_woodland_co.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Sniper_woodland_1_UnifBase";
        containerClass="Supply60";
        mass=60;
    };
};

// Parade Dress Uniform
class U_I_ParadeUniform_01_AAF_F;
class U_I_ParadeUniform_01_EUDF: U_I_ParadeUniform_01_AAF_F
{
    author="kenoxite";
    scope=1;
    displayName="Parade Uniform [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_ParadeUniform_01_EUDF.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    modelSides[]={0,1,2,3};
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF_ParadeUniform_01_Base_F";
        containerClass="Supply40";
        mass=40;
    };
};
class U_I_ParadeUniform_01_EUDF_decorated: U_I_ParadeUniform_01_EUDF
{
    author="kenoxite";
    scope=1;
    displayName="Parade Uniform (Decorated) [EUDF]";
    picture="\EUDF35_core_F\data\previews\items\icon_U_I_ParadeUniform_01_EUDF_decorated.paa";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF_ParadeUniform_01_decorated_Base_F";
        containerClass="Supply40";
        mass=40;
    };
};

// Wetsuit
class U_I_Wetsuit;
class U_I_Wetsuit_EUDF35: U_I_Wetsuit
{
    author="kenoxite";
    scope=1;
    displayName="Wetsuit [EUDF]";
    picture = "\A3\characters_f_beta\data\ui\icon_U_IR_Wetsuit_CA.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    modelSides[]={0,1,2,3};
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="I_EUDF35_Diver_Base_F";
        containerClass="Supply40";
        mass=60;
        uniformType = "Neopren";
    };
};
