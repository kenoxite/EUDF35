// Recon JTAC
class O_EUDF35_A_Recon_JTAC_RC40_F: I_EUDF35_A_Recon_JTAC_RC40_F {
    side = 0;
    faction = "OPF_EUDF35_A_F";
};

// DA JTAC
class O_EUDF35_A_DA_JTAC_RC40_F : I_EUDF35_A_DA_JTAC_RC40_F {
    side = 0;
    faction = "OPF_EUDF35_A_F";
};

// Gunner (Light Mortar)
class O_EUDF35_A_support_CMort_RF: I_EUDF35_A_support_CMort_RF
{
    side = 0;
    faction = "OPF_EUDF35_A_F";

    backpack = "O_EUDF35_A_CommandoMortar_weapon_RF";
};
