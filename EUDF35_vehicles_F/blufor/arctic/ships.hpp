// Assault Boat
class B_EUDF35_A_Assault_Boat_F : I_EUDF35_A_Assault_Boat_F {
    side = 1;
    faction = "BLU_EUDF35_A_F";
    crew = "B_EUDF35_A_Recon_F";

    typicalCargo[]=
    {
        "B_EUDF35_A_Soldier_F"
    };
};

// Speedboat
class B_EUDF35_A_Speedboat_Minigun_F : I_EUDF35_A_Speedboat_Minigun_F {
    side = 1;
    faction = "BLU_EUDF35_A_F";
    crew = "B_EUDF35_A_Soldier_F";

    typicalCargo[]=
    {
        "B_EUDF35_A_Soldier_F"
    };
};

// SDV (Submersible)
class B_EUDF35_A_SDV_01_F : I_EUDF35_A_SDV_01_F {
    side = 1;
    faction = "BLU_EUDF35_A_F";
    crew = "B_EUDF35_A_Diver_F";

    typicalCargo[]=
    {
        "B_EUDF35_A_Soldier_F",
        "B_EUDF35_A_Soldier_F"
    };
};
