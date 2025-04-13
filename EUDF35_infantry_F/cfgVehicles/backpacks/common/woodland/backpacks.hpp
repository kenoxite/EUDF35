// TACTICAL BACKPACK
// ------------------

// EuroForest
class B_TacticalPack_oli;
class B_TacticalPack_EUDF35_base: B_TacticalPack_oli
{
    scope = 0;
    displayName = "Tactical Backpack";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {
        "\A3\weapons_f\ammoboxes\bags\data\backpack_small_oli_co.paa"
    };
    class TransportMagazines{};
    class TransportItems{};
};
class B_TacticalPack_EUDF35_woodland: B_TacticalPack_EUDF35_base
{
    scope = 2;
    displayName = "Tactical Backpack (EuroForest)";
    picture="\EUDF35_core_F\data\previews\items\icon_B_TacticalPack_EUDF35_woodland.paa";
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\backpacks\backpack_small_EUDF35_woodland.paa"
    };
};

class B_TacticalPack_Medic_EUDF35_woodland: B_TacticalPack_EUDF35_woodland
{
    scope = 1;
    class TransportMagazines
    {
    };
    class TransportItems
    {
        item_xx(Medikit,1);
        item_xx(FirstAidKit,10);
    };
};

class B_TacticalPack_AA_EUDF35_woodland: B_TacticalPack_EUDF35_woodland
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(Titan_AA,2);
    };
    class TransportItems
    {
    };
};

class B_TacticalPack_AR_EUDF35_woodland: B_TacticalPack_EUDF35_woodland
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(200Rnd_65x39_cased_Box,1);
    };
};

class B_TacticalPack_AAR_EUDF35_woodland: B_TacticalPack_EUDF35_woodland
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(200Rnd_65x39_cased_Box,2);
        mag_xx(150Rnd_93x64_Mag,1);
    };
};

class B_TacticalPack_AMG_EUDF35_woodland: B_TacticalPack_EUDF35_woodland
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(150Rnd_93x64_Mag,2);
    };
};

class B_TacticalPack_AAT_EUDF35_woodland: B_TacticalPack_EUDF35_woodland
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(Titan_AT,2);
    };
    class TransportItems
    {
    };
};

class B_TacticalPack_AT_EUDF35_woodland: B_TacticalPack_EUDF35_woodland
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(Titan_AT,2);
    };
    class TransportItems
    {
    };
};

class B_TacticalPack_LAT_EUDF35_woodland: B_TacticalPack_EUDF35_woodland
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(MRAWS_HEAT_F,2);
    };
    class TransportItems
    {
    };
};

class B_TacticalPack_Repair_EUDF35_woodland: B_TacticalPack_EUDF35_woodland
{
    scope = 1;
    class TransportItems
    {
        item_xx(ToolKit,1);
    };
};

class B_TacticalPack_Engineer_EUDF35_woodland: B_TacticalPack_EUDF35_woodland
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(SatchelCharge_Remote_Mag,1);
        mag_xx(DemoCharge_Remote_Mag,2);
    };
    class TransportItems
    {
        item_xx(ToolKit,1);
        item_xx(MineDetector,1);
    };
};

// EuroAlpine
class B_TacticalPack_EUDF35_woodland_1: B_TacticalPack_EUDF35_woodland
{
    scope = 2;
    displayName = "Tactical Backpack (EuroAlpine)";
    picture="\EUDF35_core_F\data\previews\items\icon_B_TacticalPack_EUDF35_woodland_1.paa";
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\backpacks\backpack_small_EUDF35_woodland_1.paa"
    };
};

class B_TacticalPack_LAT_EUDF35_woodland_1: B_TacticalPack_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(MRAWS_HEAT_F,2);
    };
    class TransportItems
    {
    };
};

class B_TacticalPack_ReconGL_EUDF35_woodland_1: B_TacticalPack_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(1Rnd_HE_Grenade_shell,10);
    };
    class TransportItems
    {
    };
};

class B_TacticalPack_Medic_EUDF35_woodland_1: B_TacticalPack_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
    };
    class TransportItems
    {
        item_xx(Medikit,1);
        item_xx(FirstAidKit,10);
    };
};


// CARRYALL
// ---------

// EuroForest
class B_Carryall_blk;
class B_Carryall_EUDF35_base: B_Carryall_blk
{
    scope = 0;
    displayName = "Carryall Backpack";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {
        "\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_blk_co.paa"
    };
    class TransportMagazines{};
    class TransportItems{};
};
class B_Carryall_EUDF35_woodland: B_Carryall_EUDF35_base
{
    scope = 2;
    displayName = "Carryall Backpack (EuroForest)";
    picture="\EUDF35_core_F\data\previews\items\icon_B_Carryall_EUDF35_woodland.paa";
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\backpacks\backpack_tortila_EUDF35_woodland.paa"
    };
};

class B_Carryall_Exp_EUDF35_woodland: B_Carryall_EUDF35_woodland
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(APERSBoundingMine_Range_Mag,3);
        mag_xx(APERSMine_Range_Mag,3);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
        mag_xx(SLAMDirectionalMine_Wire_Mag,2);
        mag_xx(DemoCharge_Remote_Mag,1);
    };
    class TransportItems
    {
        item_xx(ToolKit,1);
        item_xx(MineDetector,1);
    };
};

class B_Carryall_ExpAT_EUDF35_woodland: B_Carryall_EUDF35_woodland
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(ATMine_Range_Mag,2);
        mag_xx(SLAMDirectionalMine_Wire_Mag,2);
    };
    class TransportItems
    {
        item_xx(ToolKit,1);
        item_xx(MineDetector,1);
    };
};

class B_Carryall_Ammo_EUDF35_woodland: B_Carryall_EUDF35_woodland
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(HandGrenade,2);
        mag_xx(MiniGrenade,2);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(30Rnd_65x39_caseless_msbs_mag,10);
        mag_xx(MRAWS_HEAT_F,1);
        mag_xx(200Rnd_65x39_cased_Box,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,4);
    };
};

class B_Carryall_AAA_EUDF35_woodland: B_Carryall_EUDF35_woodland
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(Titan_AA,2);
    };
    class TransportItems
    {
    };
};

class B_Carryall_Mines_EUDF35_woodland: B_Carryall_EUDF35_woodland
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(APERSMine_Range_Mag,5);
        mag_xx(APERSBoundingMine_Range_Mag,2);
        mag_xx(APERSMineDispenser_Mag,2);
        mag_xx(APERSTripMine_Wire_Mag,2);
    };
    class TransportItems
    {
        item_xx(ToolKit,1);
        item_xx(MineDetector,1);
    };
};

// EuroAlpine
class B_Carryall_EUDF35_woodland_1: B_Carryall_EUDF35_woodland
{
    scope = 2;
    displayName = "Carryall Backpack (EuroAlpine)";
    picture="\EUDF35_core_F\data\previews\items\icon_B_Carryall_EUDF35_woodland_1.paa";
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\backpacks\backpack_tortila_EUDF35_woodland_1.paa"
    };
};

class B_Carryall_ReconAmmo_EUDF35_woodland_1: B_Carryall_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(NLAW_F,1);
        // mag_xx(150Rnd_556x45_Drum_Mag_F,1);
        mag_xx(DemoCharge_Remote_Mag,1);
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellBlue,2);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,1);
    };
};

class B_Carryall_ReconAmmoLight_EUDF35_woodland_1: B_Carryall_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(30Rnd_556x45_Stanag_green,4);
        mag_xx(20Rnd_762x51_Mag,4);
        mag_xx(SmokeShell,2);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,2);
    };
};

class B_Carryall_ReconExp_EUDF35_woodland_1: B_Carryall_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(APERSBoundingMine_Range_Mag,3);
        mag_xx(APERSMine_Range_Mag,3);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
        mag_xx(SLAMDirectionalMine_Wire_Mag,2);
        mag_xx(DemoCharge_Remote_Mag,1);
    };
    class TransportItems
    {
        item_xx(ToolKit,1);
        item_xx(MineDetector,1);
    };
};

class B_Carryall_LAT_EUDF35_woodland_1: B_Carryall_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(MRAWS_HEAT_F,2);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,1);
    };
};

class B_Carryall_ReconLAT_EUDF35_woodland_1: B_Carryall_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(NLAW_F,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,1);
    };
};

class B_Carryall_ReconGL_EUDF35_woodland_1: B_Carryall_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(1Rnd_HE_Grenade_shell,10);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,1);
    };
};

class B_Carryall_Medic_EUDF35_woodland_1: B_Carryall_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
    };
    class TransportItems
    {
        item_xx(Medikit,1);
        item_xx(FirstAidKit,10);
    };
};

class B_Carryall_ReconAR_EUDF35_woodland_1: B_Carryall_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(150Rnd_556x45_Drum_Mag_F,3);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,1);
    };
};

// ASSAULT PACK
// ------------

// EuroForest
class B_AssaultPack_cbr;
class B_AssaultPack_EUDF35_base: B_AssaultPack_cbr
{
    scope = 0;
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {
        "\A3\weapons_f\ammoboxes\bags\data\backpack_compact_cbr_co.paa"
    };
    class TransportMagazines{};
    class TransportItems{};
};
class B_AssaultPack_EUDF35_woodland: B_AssaultPack_EUDF35_base
{
    scope = 2;
    displayName = "Assault Pack (EuroForest)";
    picture="\EUDF35_core_F\data\previews\items\icon_B_AssaultPack_EUDF35_woodland.paa";
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\backpacks\backpack_compact_EUDF35_woodland_co.paa"
    };
};

// EuroAlpine
class B_AssaultPack_EUDF35_woodland_1: B_AssaultPack_EUDF35_base
{
    scope = 2;
    displayName = "Assault Pack (EuroAlpine)";
    picture="\EUDF35_core_F\data\previews\items\icon_B_AssaultPack_EUDF35_woodland_1.paa";
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\backpacks\backpack_compact_EUDF35_woodland_1_co.paa"
    };
};

class B_AssaultPack_ReconGL_EUDF35_woodland_1: B_AssaultPack_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(1Rnd_HE_Grenade_shell,10);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,1);
    };
};

class B_AssaultPack_Medic_EUDF35_woodland_1: B_AssaultPack_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
    };
    class TransportItems
    {
        item_xx(Medikit,1);
        item_xx(FirstAidKit,10);
    };
};

class B_AssaultPack_LAT_EUDF35_woodland_1: B_AssaultPack_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(NLAW_F,1);
    };
    class TransportItems
    {
    };
};

class B_AssaultPack_ReconAmmo_EUDF35_woodland_1: B_AssaultPack_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(30Rnd_556x45_Stanag_green,4);
        mag_xx(DemoCharge_Remote_Mag,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,2);
    };
};

class B_AssaultPack_ReconAmmoLight_EUDF35_woodland_1: B_AssaultPack_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(20Rnd_762x51_Mag,4);
        mag_xx(SmokeShell,2);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,2);
    };
};

class B_AssaultPack_ReconAR_EUDF35_woodland_1: B_AssaultPack_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(150Rnd_556x45_Drum_Mag_F,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,1);
    };
};

class B_AssaultPack_ReconAmmoBreach_EUDF35_woodland_1: B_AssaultPack_EUDF35_woodland_1
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_msbs_mag,3);
        mag_xx(6Rnd_12Gauge_Pellets,2);
        mag_xx(DemoCharge_Remote_Mag,1);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,2);
    };
};


// BERGEN BACKPACK
// ---------------

// EuroForest
class B_Bergen_mcamo_F;
class B_Bergen_EUDF35_base: B_Bergen_mcamo_F
{
    scope = 0;
    // hiddenSelections[] = {"camo_1"};
    hiddenSelectionsTextures[] = {
        "\A3\weapons_f\ammoboxes\bags\data\backpack_compact_cbr_co.paa"
    };
    class TransportMagazines{};
    class TransportItems{};
};
class B_Bergen_EUDF35_woodland: B_Bergen_EUDF35_base
{
    scope = 2;
    displayName = "Bergen Backpack (EuroForest)";
    picture="\EUDF35_core_F\data\previews\items\icon_B_Bergen_EUDF35_woodland.paa";
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\backpacks\bergen_EUDF35_woodland_co.paa"
    };
};

// EuroAlpine
class B_Bergen_EUDF35_woodland_1: B_Bergen_EUDF35_base
{
    scope = 2;
    displayName = "Bergen Backpack (EuroAlpine)";
    picture="\EUDF35_core_F\data\previews\items\icon_B_Bergen_EUDF35_woodland_1.paa";
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\backpacks\bergen_EUDF35_woodland_1_co.paa"
    };
};

// RADIO PACK
// ------------------
// EuroForest
class B_RadioBag_01_wdl_F;
class B_RadioBag_01_EUDF35_base: B_RadioBag_01_wdl_F
{
    scope = 0;
    class TransportMagazines{};
    class TransportItems{};
};
class B_RadioBag_01_EUDF35_woodland: B_RadioBag_01_EUDF35_base
{
    scope = 2;
    displayName = "Radio Pack (EuroForest)";
    picture="\EUDF35_core_F\data\previews\items\icon_B_RadioBag_01_EUDF35_woodland.paa";
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\backpacks\B_RadioBag_01_EUDF35_woodland.paa"
    };
};

// EuroAlpine
class B_RadioBag_01_EUDF35_woodland_1: B_RadioBag_01_EUDF35_base
{
    scope = 2;
    displayName = "Radio Pack (EuroAlpine)";
    picture="\EUDF35_core_F\data\previews\items\icon_B_RadioBag_01_EUDF35_woodland_1.paa";
    hiddenSelectionsTextures[] = {
        "\EUDF35_infantry_data_F\data\backpacks\B_RadioBag_01_EUDF35_woodland_1.paa"
    };
};
