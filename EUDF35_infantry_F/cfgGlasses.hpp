class cfgGlasses
{
    class None;
    class G_Bandanna_oli;
    class G_Bandanna_khk;
    class G_Bandanna_tan;
    class G_Combat;
    class G_Combat_Goggles_tna_F;
    class G_Lowprofile;
    class G_Shades_Black;
    class G_Shades_Blue;
    class G_Shades_Green;
    class G_Shades_Red;
    class G_Tactical_Clear;
    class G_Balaclava_oli;

    class G_Balaclava_combat;
    class G_Balaclava_combat_EUDF35_base: G_Balaclava_combat
    {
        author = "kenoxite";
        scope = 0;
        scopeArsenal = 0;
        scopeCurator = 0;
        displayName = "Balaclava (Combat Goggles)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_combat_ca.paa";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            "\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_blk_co.paa",
            "\a3\characters_f\heads\glasses\data\g_combat_ca.paa"
        };
        identityTypes[] = {};
        model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_combat.p3d";
    };

    class G_Balaclava_combat_EUDF35_green: G_Balaclava_combat_EUDF35_base
    {
        author = "kenoxite";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Balaclava (Combat Goggles) (Green)";
        picture="\EUDF35_core_F\data\previews\items\icon_G_Balaclava_combat_EUDF35_green.paa";
        hiddenSelectionsTextures[] = {
            "\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_grn_co.paa",
            "\A3\Characters_F_Exp\BLUFOR\Data\G_Combat_Goggles_tna_F_ca.paa"
        };
        identityTypes[]=
        {
            "G_EUDF35_Army", 0.8,
            "G_EUDF35_SF", 0.8
        };
    };
    class G_Balaclava_combat_EUDF35_white: G_Balaclava_combat_EUDF35_green
    {
        author = "kenoxite";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Balaclava (Combat Goggles) (White)";
        picture="\EUDF35_core_F\data\previews\items\icon_G_Balaclava_combat_EUDF35_white.paa";
        hiddenSelectionsTextures[] = {
            "\EUDF35_infantry_data_F\data\facewear\headgear_balaclava_EUDF35_arctic.paa",
            "\A3\Characters_F_Exp\BLUFOR\Data\G_Combat_Goggles_tna_F_ca.paa"
        };
        identityTypes[]=
        {
            "G_EUDF35_Army_Arctic", 0.8,
            "G_EUDF35_SF_Arctic", 0.8,
            "G_EUDF35_Cap_Arctic", 0.8
        };
    };

    class G_Balaclava_blk;
    class G_Balaclava_EUDF35_white: G_Balaclava_blk
    {
        author = "kenoxite";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Balaclava (White)";
        picture="\EUDF35_core_F\data\previews\items\icon_G_Balaclava_EUDF35_white.paa";
        hiddenSelectionsTextures[] = {
            "\EUDF35_infantry_data_F\data\facewear\headgear_balaclava_EUDF35_arctic.paa"
        };
        identityTypes[]=
        {
            "G_EUDF35_Army_Arctic", 0.3
        };
    };

    class G_Bandanna_EUDF35_white: G_Bandanna_oli
    {
        author = "kenoxite";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Bandana (White)";
        picture="\EUDF35_core_F\data\previews\items\icon_G_Bandanna_EUDF35_white.paa";
        hiddenSelectionsTextures[] = {
            "\EUDF35_infantry_data_F\data\facewear\headgear_bandmask_EUDF35_arctic.paa"
        };
        identityTypes[]=
        {
            "G_EUDF35_Army_Arctic", 0.8
        };
    };

    class None_EUDF35: None
    {
        author="kenoxite";
        scope=1;
        scopeArsenal=1;
        scopeCurator=1;
        identityTypes[]=
        {
            "G_EUDF35_None", 6,
            "G_EUDF35_Crew", 6,
            "G_EUDF35_OffDuty", 6
        };
    };
    class G_Bandanna_oli_EUDF35: G_Bandanna_oli
    {
        author="kenoxite";
        scope=1;
        scopeArsenal=1;
        scopeCurator=1;
        identityTypes[]=
        {
            "G_EUDF35_Army", 0.5
        };
    };
    class G_Bandanna_khk_EUDF35: G_Bandanna_khk
    {
        author="kenoxite";
        scope=1;
        scopeArsenal=1;
        scopeCurator=1;
        identityTypes[]=
        {
            "G_EUDF35_Army_Arid", 0.5
        };
    };
    class G_Bandanna_tan_EUDF35: G_Bandanna_tan
    {
        author="kenoxite";
        scope=1;
        scopeArsenal=1;
        scopeCurator=1;
        identityTypes[]=
        {
            "G_EUDF35_Army_Arid", 0.5
        };
    };
    class G_Combat_EUDF35: G_Combat
    {
        author="kenoxite";
        scope=1;
        scopeArsenal=1;
        scopeCurator=1;
        identityTypes[]=
        {
            "G_EUDF35_Cap_Arid", 0.8,
            "G_EUDF35_SF_Arid", 0.8,
            "G_EUDF35_Army_Arid", 0.8
        };
    };
    class G_Combat_Goggles_tna_F_EUDF35: G_Combat_Goggles_tna_F
    {
        author="kenoxite";
        scope=1;
        scopeArsenal=1;
        scopeCurator=1;
        identityTypes[]=
        {
            "G_EUDF35_Army", 0.8,
            "G_EUDF35_Cap", 0.8,
            "G_EUDF35_SF", 0.8,
            "G_EUDF35_Army_Arctic", 0.8
        };
    };
    class G_Tactical_Clear_EUDF35: G_Tactical_Clear
    {
        author="kenoxite";
        scope=1;
        scopeArsenal=1;
        scopeCurator=1;
        identityTypes[]=
        {
            "G_EUDF35_Army", 0.8,
            "G_EUDF35_Cap", 0.8,
            "G_EUDF35_SF", 0.8,
            "G_EUDF35_Army_Arctic", 0.8,
            "G_EUDF35_Army_Arid", 0.8
        };
    };
    class G_Balaclava_combat_EUDF35: G_Balaclava_combat
    {
        author="kenoxite";
        scope=1;
        scopeArsenal=1;
        scopeCurator=1;
        identityTypes[]=
        {
            "G_EUDF35_Army_Arid", 0.1
        };
    };
    class G_Balaclava_oli_EUDF35: G_Balaclava_oli
    {
        author="kenoxite";
        scope=1;
        scopeArsenal=1;
        scopeCurator=1;
        identityTypes[]=
        {
            "G_EUDF35_Army", 0.3
        };
    };
    class G_Shades_Black_EUDF35: G_Shades_Black
    {
        author="kenoxite";
        scope=1;
        scopeArsenal=1;
        scopeCurator=1;
        identityTypes[]=
        {
            "G_EUDF35_OffDuty", 0.1
        };
    };
    class G_Shades_Blue_EUDF35: G_Shades_Blue
    {
        author="kenoxite";
        scope=1;
        scopeArsenal=1;
        scopeCurator=1;
        identityTypes[]=
        {
            "G_EUDF35_OffDuty", 0
        };
    };
    class G_Shades_Green_EUDF35: G_Shades_Green
    {
        author="kenoxite";
        scope=1;
        scopeArsenal=1;
        scopeCurator=1;
        identityTypes[]=
        {
            "G_EUDF35_OffDuty", 0
        };
    };
    class G_Shades_Red_EUDF35: G_Shades_Red
    {
        author="kenoxite";
        scope=1;
        scopeArsenal=1;
        scopeCurator=1;
        identityTypes[]=
        {
            "G_EUDF35_OffDuty", 0
        };
    };
};
