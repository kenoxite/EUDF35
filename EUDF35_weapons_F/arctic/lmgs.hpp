// MK-200
class LMG_Mk200_EUDF35_arctic_F: LMG_Mk200_EUDF35_woodland_F
{
    author="kenoxite";
    baseWeapon="LMG_Mk200_EUDF35_arctic_F";
    scope=2;
    scopeCurator=2;
    displayName = "Mk200 6.5 mm (EuroArctic)";
    picture = "\EUDF35_core_F\data\previews\weapons\LMG_Mk200_EUDF35_arctic_F.paa";
    hiddenSelectionsTextures[] = {
        "\EUDF35_weapons_data_F\data\lmgs\1st_person_EUDF35_arctic.paa",
        "\EUDF35_weapons_data_F\data\lmgs\body_EUDF35_arctic.paa",
        "\EUDF35_weapons_data_F\data\lmgs\grip_EUDF35_arctic.paa"
    };
};

// ERCO sight
class LMG_Mk200_EUDF35_arctic_erco_pointer_snds_F: LMG_Mk200_EUDF35_arctic_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsAcc
        {
            item="acc_pointer_IR";
            slot="PointerSlot";
        };
        class LinkedItemsMuzzle
        {
            item="muzzle_snds_H";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_ERCO_blk_F";
            slot="CowsSlot";
        };
        class LinkedItemsUnder
        {
            item="bipod_01_F_blk";
            slot="UnderBarrelSlot";
        };
    };
};
class LMG_Mk200_EUDF35_arctic_erco_pointer_F: LMG_Mk200_EUDF35_arctic_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsAcc
        {
            item="acc_pointer_IR";
            slot="PointerSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_ERCO_blk_F";
            slot="CowsSlot";
        };
        class LinkedItemsUnder
        {
            item="bipod_01_F_blk";
            slot="UnderBarrelSlot";
        };
    };
};


// SPAR-16S (LMG)
class arifle_SPAR_02_EUDF35_arctic_F: arifle_SPAR_02_EUDF35_woodland_F
{
    author="kenoxite";
    baseWeapon="arifle_SPAR_02_EUDF35_arctic_F";
    scope=2;
    scopeCurator=2;
    displayName = "SPAR-16S 5.56 mm (EuroArctic)";
    picture = "\EUDF35_core_F\data\previews\weapons\arifle_SPAR_02_EUDF35_arctic_F.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUDF35_weapons_data_F\data\rifles\arifle_spar_01_EUDF35_arctic_01_co.paa",
        "\EUDF35_weapons_data_F\data\rifles\arifle_spar_01_EUDF35_arctic_02_co.paa"
    };
};

// - ERCO sight
class arifle_SPAR_02_EUDF35_arctic_erco_pointer_snds_F: arifle_SPAR_02_EUDF35_arctic_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsAcc
        {
            item="acc_pointer_IR";
            slot="PointerSlot";
        };
        class LinkedItemsMuzzle
        {
            item="muzzle_snds_M";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_ERCO_blk_F";
            slot="CowsSlot";
        };
        class LinkedItemsUnder
        {
            item="bipod_01_F_blk";
            slot="UnderBarrelSlot";
        };
    };
};
