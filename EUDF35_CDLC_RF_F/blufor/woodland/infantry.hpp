// Recon JTAC
class B_EUDF35_Recon_JTAC_RC40_F: I_EUDF35_Recon_JTAC_RC40_F {
    side = 1;
    faction = "BLU_EUDF35_F";

    linkedItems[]=
    {
        "V_Chestrig_EUDF35_Woodland_1",
        "H_Cap_EUDF35_woodland_1_hs",
        "ItemMap",
        "B_UavTerminal",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnLinkedItems[]=
    {
        "V_Chestrig_EUDF35_Woodland_1",
        "H_Cap_EUDF35_woodland_1_hs",
        "ItemMap",
        "B_UavTerminal",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
};

// DA JTAC
class B_EUDF35_DA_JTAC_RC40_F : I_EUDF35_DA_JTAC_RC40_F {
    side = 1;
    faction = "BLU_EUDF35_F";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland_1",
        "H_HelmetHBK_headset_EUDF35_woodland_1",
        "G_Balaclava_combat_EUDF35_green",
        "ItemMap",
        "B_UavTerminal",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_Woodland_1",
        "H_HelmetHBK_headset_EUDF35_woodland_1",
        "G_Balaclava_combat_EUDF35_green",
        "ItemMap",
        "B_UavTerminal",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
};

// Gunner (Light Mortar)
class B_EUDF35_support_CMort_RF: I_EUDF35_support_CMort_RF
{
    side = 1;
    faction = "BLU_EUDF35_F";

    backpack = "B_EUDF35_CommandoMortar_weapon_RF";
};
