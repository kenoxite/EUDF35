// Recon JTAC
class O_EUDF35_D_Recon_JTAC_RC40_F: I_EUDF35_D_Recon_JTAC_RC40_F {
    side = 0;
    faction = "OPF_EUDF35_D_F";
};

// DA JTAC
class O_EUDF35_D_DA_JTAC_RC40_F : I_EUDF35_D_DA_JTAC_RC40_F {
    side = 0;
    faction = "OPF_EUDF35_D_F";
};

// Gunner (Light Mortar)
class O_EUDF35_D_support_CMort_RF: I_EUDF35_D_support_CMort_RF
{
    side = 0;
    faction = "OPF_EUDF35_D_F";

    backpack = "O_EUDF35_D_CommandoMortar_weapon_RF";
};
