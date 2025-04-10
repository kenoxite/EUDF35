class I_EUDF35_A_Diver_F: I_EUDF35_A_Diver_Base_F
{
    author = "kenoxite";
    scope =2;
    displayName="$STR_B_diver_F0";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_Diver_F.jpg";
    backpack = "B_Assault_Diver";
    model="\A3\characters_F\Common\diver_slotable";
    modelSides[]={2,3};
    role="SpecialOperative";
    camouflage=2;
};

class I_EUDF35_A_Diver_Exp_F: I_EUDF35_A_Diver_Base_F
{
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_Diver_Exp_F.jpg";
    scope=2;
    displayName="$STR_B_diver_exp_F0";
    cost=93000;
    camouflage=2;
    canDeactivateMines=1;
    backpack = "B_AssaultPack_blk_DiverExp";
    icon="iconManExplosive";
    role="SpecialOperative";
};
class I_EUDF35_A_Diver_TL_F: I_EUDF35_A_Diver_Base_F
{
    author = "kenoxite";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_Diver_TL_F.jpg";
    scope=2;
    displayName="$STR_B_diver_TL_F0";
    linkedItems[]=
    {
        "V_RebreatherIA",
        "G_I_Diving",
        "ItemGPS",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[]=
    {
        "V_RebreatherIA",
        "G_I_Diving",
        "ItemGPS",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    icon="iconManLeader";
    role="SpecialOperative";
    cost=250000;
    camouflage=2;
};
