// Commando Mortar
class O_EUDF35_A_CommandoMortar_RF: I_EUDF35_A_CommandoMortar_RF
{
    side = 0;
    faction = "OPF_EUDF35_A_F";
    crew = "O_EUDF35_A_Soldier_F";
    
    class assembleInfo: assembleInfo
    {
        dissasembleTo[] = {"O_EUDF35_A_CommandoMortar_weapon_RF"};
    };
};
