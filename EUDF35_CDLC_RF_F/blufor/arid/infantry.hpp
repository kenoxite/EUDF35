// Recon JTAC
class B_EUDF35_D_Recon_JTAC_RC40_F: I_EUDF35_D_Recon_JTAC_RC40_F {
    side = 1;
    faction = "BLU_EUDF35_D_F";

    linkedItems[]=
    {
        "V_Chestrig_EUDF35_Arid_1",
        "H_Cap_EUDF35_arid_1_hs",
        "G_Tactical_Clear_EUDF35",
        "B_UavTerminal",
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
        "B_UavTerminal",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
};

// DA JTAC
class B_EUDF35_D_DA_JTAC_RC40_F : I_EUDF35_D_DA_JTAC_RC40_F {
    side = 1;
    faction = "BLU_EUDF35_D_F";

    linkedItems[] = 
    {
        "V_CarrierRigKBT_01_EUDF35_arid_1",
        "H_HelmetHBK_headset_EUDF35_arid_1",
        "G_Combat_EUDF35",
        "ItemMap",
        "B_UavTerminal",
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
        "B_UavTerminal",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
};

// Gunner (Light Mortar)
class B_EUDF35_D_support_CMort_RF: I_EUDF35_D_support_CMort_RF
{
    side = 1;
    faction = "BLU_EUDF35_D_F";

    backpack = "B_EUDF35_D_CommandoMortar_weapon_RF";
};
