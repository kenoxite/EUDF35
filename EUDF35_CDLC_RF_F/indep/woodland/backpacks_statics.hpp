class Weapon_Bag_Base;
class B_CommandoMortar_weapon_RF: Weapon_Bag_Base
{
    class assembleInfo;
};
class I_EUDF35_CommandoMortar_weapon_RF: B_CommandoMortar_weapon_RF
{
    author = "kenoxite";
    dlc = "rf";
    scope = 2;
    scopeCurator = 2;
    displayName = "Folded Commando Mortar [EUDF]";
    faction = "IND_EUDF35_F";
    class assembleInfo: assembleInfo
    {
        assembleTo = "I_EUDF35_CommandoMortar_RF";
    };
};
