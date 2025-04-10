// MK-200
// class LMG_Mk200_EUDF35_arid_F: LMG_Mk200_F
// {
//     author="kenoxite";
//     baseWeapon="LMG_Mk200_EUDF35_arid_F";
//     scope=2;
//     scopeCurator=2;
//     displayName = "Mk200 6.5 mm (EuroArid)";
//     picture = "\EUDF35_core_F\data\previews\weapons\LMG_Mk200_EUDF35_arid_F.paa";
//     hiddenSelectionsTextures[] = {
//         "\EUDF35_weapons_data_F\data\lmgs\1st_person_EUDF35_arid.paa",
//         "\EUDF35_weapons_data_F\data\lmgs\body_EUDF35_arid.paa",
//         "\EUDF35_weapons_data_F\data\lmgs\grip_EUDF35_arid.paa"
//     };
// };

// ERCO sight
class LMG_Mk200_EUDF35_arid_erco_pointer_snds_F: LMG_Mk200_F
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
            item="muzzle_snds_H_snd_F";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_ERCO_snd_F";
            slot="CowsSlot";
        };
        class LinkedItemsUnder
        {
            item="bipod_01_F_blk";
            slot="UnderBarrelSlot";
        };
    };
};
class LMG_Mk200_EUDF35_arid_erco_pointer_F: LMG_Mk200_F
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
            item="optic_ERCO_snd_F";
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
class arifle_SPAR_02_snd_F;
// class arifle_SPAR_02_EUDF35_arid_F: arifle_SPAR_02_khk_F
// {
//     author="kenoxite";
//     baseWeapon="arifle_SPAR_02_EUDF35_arid_F";
//     scope=2;
//     scopeCurator=2;
//     displayName = "SPAR-16S 5.56 mm (EuroArid)";
//     picture = "\EUDF35_core_F\data\previews\weapons\arifle_SPAR_02_EUDF35_arid_F.paa";
//     hiddenSelectionsTextures[]=
//     {
//         "\EUDF35_weapons_data_F\data\rifles\arifle_spar_01_EUDF35_arid_01_co.paa",
//         "\EUDF35_weapons_data_F\data\rifles\arifle_spar_01_EUDF35_arid_02_co.paa"
//     };
// };

// - ERCO sight
class arifle_SPAR_02_EUDF35_arid_erco_pointer_snds_F: arifle_SPAR_02_snd_F
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
            item="muzzle_snds_m_snd_F";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_ERCO_snd_F";
            slot="CowsSlot";
        };
        class LinkedItemsUnder
        {
            item="bipod_01_F_blk";
            slot="UnderBarrelSlot";
        };
    };
};
