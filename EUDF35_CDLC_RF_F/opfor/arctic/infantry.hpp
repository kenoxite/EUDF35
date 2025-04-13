// Recon JTAC
class O_EUDF35_A_Recon_JTAC_RC40_F: I_EUDF35_A_Recon_JTAC_RC40_F {
    side = 0;
    faction = "OPF_EUDF35_A_F";

    linkedItems[]=
    {
        "V_Chestrig_EUDF35_arctic",
        "H_Watchcap_EUDF35_arctic",
        "G_Balaclava_combat_EUDF35_white",
        "O_UavTerminal",
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
        "O_UavTerminal",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
};

// DA JTAC
class O_EUDF35_A_DA_JTAC_RC40_F : I_EUDF35_A_DA_JTAC_RC40_F {
    side = 0;
    faction = "OPF_EUDF35_A_F";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_arctic",
        "H_HelmetHBK_headset_EUDF35_arctic",
        "G_Balaclava_combat_EUDF35_white",
        "ItemMap",
        "O_UavTerminal",
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
        "O_UavTerminal",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
};

// Gunner (Light Mortar)
class O_EUDF35_A_support_CMort_RF: I_EUDF35_A_support_CMort_RF
{
    side = 0;
    faction = "OPF_EUDF35_A_F";

    backpack = "O_EUDF35_A_CommandoMortar_weapon_RF";
};
