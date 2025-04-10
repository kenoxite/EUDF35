// Recon JTAC
class I_EUDF35_D_Recon_JTAC_F;
// class I_EUDF35_D_Recon_JTAC_F: I_EUDF35_D_Recon_JTAC_F {
class I_EUDF35_D_Recon_JTAC_RC40_F: I_EUDF35_D_Recon_JTAC_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayname = "Recon JTAC (RC-40)";
    dlc = "rf";

    linkedItems[]=
    {
        "V_Chestrig_EUDF35_Arid_1",
        "H_Cap_EUDF35_arid_1_hs",
        "G_Tactical_Clear_EUDF35",
        "I_UavTerminal",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnLinkedItems[]=
    {
        "V_Chestrig_EUDF35_Arid_1",
        "H_Cap_EUDF35_arid_1_hs",
        "G_Tactical_Clear_EUDF35",
        "I_UavTerminal",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    backpack = "B_Carryall_ReconGLdrones_EUDF35_arid_1";
};

// DA JTAC
class I_EUDF35_D_DA_JTAC_F;
class I_EUDF35_D_DA_JTAC_RC40_F : I_EUDF35_D_DA_JTAC_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "DA JTAC (RC-40)";
    dlc = "rf";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_arid_1",
        "H_HelmetHBK_headset_EUDF35_arid_1",
        "G_Combat_EUDF35",
        "ItemMap",
        "I_UavTerminal",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_arid_1",
        "H_HelmetHBK_headset_EUDF35_arid_1",
        "G_Combat_EUDF35",
        "ItemMap",
        "I_UavTerminal",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    backpack = "B_AssaultPack_ReconGLdrones_EUDF35_arid_1";
};

// Gunner (Light Mortar)
class I_EUDF35_D_Support_AMort_F;
class I_EUDF35_D_support_CMort_RF: I_EUDF35_D_Support_AMort_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_D_support_CMort_RF.jpg";
    displayName = "Gunner (Light Mortar)";
    side = 2;
    faction = "IND_EUDF35_D_F";
    dlc = "rf";

    backpack = "I_EUDF35_D_CommandoMortar_weapon_RF";
};
