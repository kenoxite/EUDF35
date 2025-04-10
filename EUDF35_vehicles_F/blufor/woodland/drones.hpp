// AR-2 Darter
class B_EUDF35_UAV_01_F : I_EUDF35_UAV_01_F {
    faction = "BLU_EUDF35_F";
    side = 1;
    crew="B_UAV_AI";
    typicalCargo[]=
    {
        "B_UAV_AI"
    };

    class assembleInfo
    {
        primary=1;
        base="";
        assembleTo="";
        displayName="";
        dissasembleTo[]=
        {
            "B_EUDF35_UAV_01_backpack_F"
        };
    };
};

// K40 Ababil-3 / MQ-4A Greyhawk
class B_EUDF35_UAV_02_dynamicLoadout_F : I_EUDF35_UAV_02_dynamicLoadout_F {
    faction = "BLU_EUDF35_F";
    side = 1;
    crew="B_UAV_AI";
    typicalCargo[]=
    {
        "B_UAV_AI"
    };
};

// AL-6 Pelican
class B_EUDF35_UAV_06_F : I_EUDF35_UAV_06_F {
    faction = "BLU_EUDF35_F";
    side = 1;

    crew = "B_UAV_AI_F";
    typicalCargo[] = {"B_UAV_AI_F"};

    class assembleInfo
    {
        primary=1;
        base="";
        assembleTo="";
        displayName="";
        dissasembleTo[]=
        {
            "B_EUDF35_UAV_06_backpack_F"
        };
    };
};

// AL-6 Pelican (Medical)
class B_EUDF35_UAV_06_medical_F : I_EUDF35_UAV_06_medical_F {
    faction = "BLU_EUDF35_F";
    side = 1;

    crew = "B_UAV_AI_F";
    typicalCargo[] = {"B_UAV_AI_F"};
    
    class assembleInfo
    {
        primary=1;
        base="";
        assembleTo="";
        displayName="";
        dissasembleTo[]=
        {
            "B_EUDF35_UAV_06_medical_backpack_F"
        };
    };
};

// UGV Stomper
class B_EUDF35_UGV_01_F : I_EUDF35_UGV_01_F {
    faction = "BLU_EUDF35_F";
    side = 1;
    crew="B_UAV_AI";
    typicalCargo[]=
    {
        "B_EUDF35_Soldier_lite_F"
    };
};


// UGV Stomper RCWS
class B_EUDF35_UGV_01_rcws_F : I_EUDF35_UGV_01_rcws_F {
    faction = "BLU_EUDF35_F";
    side = 1;
    crew="B_UAV_AI";
    typicalCargo[]=
    {
        "B_EUDF35_Soldier_lite_F"
    };
};
