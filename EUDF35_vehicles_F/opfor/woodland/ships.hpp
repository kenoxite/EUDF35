// Assault Boat
class O_EUDF35_Assault_Boat_F : I_EUDF35_Assault_Boat_F {
    side = 0;
    faction = "OPF_EUDF35_F";
    crew = "O_EUDF35_Recon_F";

    typicalCargo[]=
    {
        "O_EUDF35_Soldier_F"
    };
};

// Speedboat
class O_EUDF35_Speedboat_Minigun_F : I_EUDF35_Speedboat_Minigun_F {
    side = 0;
    faction = "OPF_EUDF35_F";
    crew = "O_EUDF35_Soldier_F";

    typicalCargo[]=
    {
        "O_EUDF35_Soldier_F"
    };
};

// SDV (Submersible)
class O_EUDF35_SDV_01_F : I_EUDF35_SDV_01_F {
    side = 0;
    faction = "OPF_EUDF35_F";
    crew = "O_EUDF35_Diver_F";

    typicalCargo[]=
    {
        "O_EUDF35_Soldier_F",
        "O_EUDF35_Soldier_F"
    };
};
