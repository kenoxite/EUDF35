// GM6 Lynx 12.7 mm
class srifle_GM6_EUDF35_arctic_F: srifle_GM6_EUDF35_woodland_F
{
    author="kenoxite";
    baseWeapon="srifle_GM6_EUDF35_arctic_F";
    scope=2;
    scopeCurator=2;
    displayName="GM6 Lynx 12.7 mm (EuroArctic)";
    picture = "\EUDF35_core_F\data\previews\weapons\srifle_GM6_EUDF35_arctic_F.paa";
    hiddenSelectionsTextures[] = {
        "\EUDF35_weapons_data_F\data\sniperRifles\gm6_EUDF35_arctic.paa"
    };
};


class srifle_GM6_EUDF35_arctic_lrps_f: srifle_GM6_EUDF35_arctic_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            item="optic_LRPS";
            slot="CowsSlot";
        };
    };
};
