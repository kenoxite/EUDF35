// Commando Mortar
class CommandoMortar_base_RF;
class B_CommandoMortar_RF: CommandoMortar_base_RF
{
    class assembleInfo;
};
class I_EUDF35_CommandoMortar_RF: B_CommandoMortar_RF
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    displayname = "Commando Mortar";
    faction = "IND_EUDF35_F";
    crew = "I_EUDF35_Soldier_F";
    dlc = "rf";

    class assembleInfo: assembleInfo
    {
        dissasembleTo[] = {"I_EUDF35_CommandoMortar_weapon_RF"};
    };
};
