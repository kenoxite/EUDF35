// Recon JTAC
class I_EUDF35_A_Recon_JTAC_F;
// class I_EUDF35_A_Recon_JTAC_F: I_EUDF35_A_Recon_JTAC_F {
class I_EUDF35_A_Recon_JTAC_RC40_F: I_EUDF35_A_Recon_JTAC_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayname = "Recon JTAC (RC-40)";
    dlc = "rf";

    linkedItems[]=
    {
        "V_Chestrig_EUDF35_arctic",
        "H_Watchcap_EUDF35_arctic",
        "G_Balaclava_combat_EUDF35_white",
        "I_UavTerminal",
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
        "I_UavTerminal",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    backpack = "B_Carryall_ReconGLdrones_EUDF35_arctic";
};

// DA JTAC
class I_EUDF35_A_DA_JTAC_F;
class I_EUDF35_A_DA_JTAC_RC40_F : I_EUDF35_A_DA_JTAC_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "DA JTAC (RC-40)";
    dlc = "rf";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_arctic",
        "H_HelmetHBK_headset_EUDF35_arctic",
        "G_Balaclava_combat_EUDF35_white",
        "ItemMap",
        "I_UavTerminal",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_arctic",
        "H_HelmetHBK_headset_EUDF35_arctic",
        "G_Balaclava_combat_EUDF35_white",
        "ItemMap",
        "I_UavTerminal",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    backpack = "B_AssaultPack_ReconGLdrones_EUDF35_arctic";
};

// Gunner (Light Mortar)
class I_EUDF35_A_Support_AMort_F;
class I_EUDF35_A_support_CMort_RF: I_EUDF35_A_Support_AMort_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_A_support_CMort_RF.jpg";
    displayName = "Gunner (Light Mortar)";
    side = 2;
    faction = "IND_EUDF35_A_F";
    dlc = "rf";

    backpack = "I_EUDF35_A_CommandoMortar_weapon_RF";
};
