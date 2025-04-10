// Recon JTAC
class O_EUDF35_Recon_JTAC_RC40_F: I_EUDF35_Recon_JTAC_RC40_F {
    side = 0;
    faction = "OPF_EUDF35_F";
};

// DA JTAC
class O_EUDF35_DA_JTAC_RC40_F : I_EUDF35_DA_JTAC_RC40_F {
    side = 0;
    faction = "OPF_EUDF35_F";
};

// Gunner (Light Mortar)
class O_EUDF35_support_CMort_RF: I_EUDF35_support_CMort_RF
{
    side = 0;
    faction = "OPF_EUDF35_F";

    backpack = "O_EUDF35_CommandoMortar_weapon_RF";
};
