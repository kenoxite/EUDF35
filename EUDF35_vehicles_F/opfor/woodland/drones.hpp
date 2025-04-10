// AR-2 Darter
class O_EUDF35_UAV_01_F : I_EUDF35_UAV_01_F {
    side = 0;
    faction = "OPF_EUDF35_F";
    crew="O_UAV_AI";
    typicalCargo[]=
    {
        "O_UAV_AI"
    };

    class assembleInfo
    {
        primary=1;
        base="";
        assembleTo="";
        displayName="";
        dissasembleTo[]=
        {
            "O_EUDF35_UAV_01_backpack_F"
        };
    };
};

// K40 Ababil-3 / MQ-4A Greyhawk
class O_EUDF35_UAV_02_dynamicLoadout_F : I_EUDF35_UAV_02_dynamicLoadout_F {
    side = 0;
    faction = "OPF_EUDF35_F";
    crew="O_UAV_AI";
    typicalCargo[]=
    {
        "O_UAV_AI"
    };
};

// AL-6 Pelican
class O_EUDF35_UAV_06_F : I_EUDF35_UAV_06_F {
    side = 0;
    faction = "OPF_EUDF35_F";

    crew = "O_UAV_AI_F";
    typicalCargo[] = {"O_UAV_AI_F"};

    class assembleInfo
    {
        primary=1;
        base="";
        assembleTo="";
        displayName="";
        dissasembleTo[]=
        {
            "O_EUDF35_UAV_06_backpack_F"
        };
    };
};

// AL-6 Pelican (Medical)
class O_EUDF35_UAV_06_medical_F : I_EUDF35_UAV_06_medical_F {
    side = 0;
    faction = "OPF_EUDF35_F";

    crew = "O_UAV_AI_F";
    typicalCargo[] = {"O_UAV_AI_F"};
    
    class assembleInfo
    {
        primary=1;
        base="";
        assembleTo="";
        displayName="";
        dissasembleTo[]=
        {
            "O_EUDF35_UAV_06_medical_backpack_F"
        };
    };
};

// UGV Stomper
class O_EUDF35_UGV_01_F : I_EUDF35_UGV_01_F {
    side = 0;
    faction = "OPF_EUDF35_F";
    crew="O_UAV_AI";
    typicalCargo[]=
    {
        "O_EUDF35_Soldier_lite_F"
    };
};


// UGV Stomper RCWS
class O_EUDF35_UGV_01_rcws_F : I_EUDF35_UGV_01_rcws_F {
    side = 0;
    faction = "OPF_EUDF35_F";
    crew="O_UAV_AI";
    typicalCargo[]=
    {
        "O_EUDF35_Soldier_lite_F"
    };
};
