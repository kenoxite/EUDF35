// Commando Mortar
class O_EUDF35_D_CommandoMortar_RF: I_EUDF35_D_CommandoMortar_RF
{
    side = 0;
    faction = "OPF_EUDF35_D_F";
    crew = "O_EUDF35_D_Soldier_F";
    
    class assembleInfo: assembleInfo
    {
        dissasembleTo[] = {"O_EUDF35_D_CommandoMortar_weapon_RF"};
    };
};
