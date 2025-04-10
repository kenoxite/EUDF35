// Commando Mortar
class O_EUDF35_CommandoMortar_RF: I_EUDF35_CommandoMortar_RF
{
    side = 0;
    faction = "OPF_EUDF35_F";
    crew = "O_EUDF35_Soldier_F";
    
    class assembleInfo: assembleInfo
    {
        dissasembleTo[] = {"O_EUDF35_CommandoMortar_weapon_RF"};
    };
};
