// Recon JTAC
class B_EUDF35_Recon_JTAC_RC40_F: I_EUDF35_Recon_JTAC_RC40_F {
    side = 1;
    faction = "BLU_EUDF35_F";
};

// DA JTAC
class B_EUDF35_DA_JTAC_RC40_F : I_EUDF35_DA_JTAC_RC40_F {
    side = 1;
    faction = "BLU_EUDF35_F";
};

// Gunner (Light Mortar)
class B_EUDF35_support_CMort_RF: I_EUDF35_support_CMort_RF
{
    side = 1;
    faction = "BLU_EUDF35_F";

    backpack = "B_EUDF35_CommandoMortar_weapon_RF";
};
