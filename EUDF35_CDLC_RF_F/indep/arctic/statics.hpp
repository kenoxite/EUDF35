// Commando Mortar
class I_EUDF35_A_CommandoMortar_RF: I_EUDF35_CommandoMortar_RF
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_EUDF35_A_F";
    crew = "I_EUDF35_A_Soldier_F";
    dlc = "rf";
    
    class assembleInfo: assembleInfo
    {
        dissasembleTo[] = {"I_EUDF35_A_CommandoMortar_weapon_RF"};
    };
};
