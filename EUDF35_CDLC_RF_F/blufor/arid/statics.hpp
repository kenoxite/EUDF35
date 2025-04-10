// Commando Mortar
class B_EUDF35_D_CommandoMortar_RF: I_EUDF35_D_CommandoMortar_RF
{
    side = 1;
    faction = "BLU_EUDF35_D_F";
    crew = "B_EUDF35_D_Soldier_F";
    
    class assembleInfo: assembleInfo
    {
        dissasembleTo[] = {"B_EUDF35_D_CommandoMortar_weapon_RF"};
    };
};
