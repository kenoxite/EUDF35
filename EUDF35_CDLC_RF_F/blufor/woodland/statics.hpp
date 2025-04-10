// Commando Mortar
class B_EUDF35_CommandoMortar_RF: I_EUDF35_CommandoMortar_RF
{
    side = 1;
    faction = "BLU_EUDF35_F";
    crew = "B_EUDF35_Soldier_F";
    
    class assembleInfo: assembleInfo
    {
        dissasembleTo[] = {"B_EUDF35_CommandoMortar_weapon_RF"};
    };
};
