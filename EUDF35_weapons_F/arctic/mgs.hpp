
// Navid 9.3 mm
class MMG_01_EUDF35_arctic_F: MMG_01_EUDF35_woodland_F
{
    author="kenoxite";
    baseWeapon="MMG_01_EUDF35_arctic_F";
    scope=2;
    scopeCurator=2;
    displayName = "MG5 9.3 mm (EuroArctic)";
    picture = "\EUDF35_core_F\data\previews\weapons\MMG_01_EUDF35_arctic_F.paa";
    hiddenSelectionsTextures[] = {
        "\EUDF35_weapons_data_F\data\mgs\MMG_01_01_EUDF35_arctic_CO.paa",
        "\EUDF35_weapons_data_F\data\mgs\MMG_01_02_EUDF35_arctic_CO.paa",
        "\EUDF35_weapons_data_F\data\mgs\MMG_01_03_EUDF35_arctic_CO.paa"
    };
};

// ERCO sight
class MMG_01_EUDF35_arctic_erco_pointer_snds_F: MMG_01_EUDF35_arctic_F
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
            item="muzzle_snds_93mmg";
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
