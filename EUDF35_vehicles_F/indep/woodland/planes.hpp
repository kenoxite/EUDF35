// A-149 Gryphon (Gripen)
class I_Plane_Fighter_04_F;
class I_EUDF35_Plane_Fighter_04_F : I_Plane_Fighter_04_F
{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "A-149 Gripen";
    side = 2;
    faction = "IND_EUDF35_F";
    editorPreview = "\EUDF35_core_F\data\previews\I_EUDF35_Plane_Fighter_04_F.jpg";
    crew = "I_EUDF35_Fighter_Pilot_F";
    
    forceInGarage=0;
    hiddenSelections[] = {"Camo_01","Camo_02","Camo_03","number_01","number_02","number_03"};
    hiddenSelectionsTextures[] = {
        "\EUDF35_vehicles_data_F\data\planes\Fighter_04_fuselage_01_EUDF35_woodland_co.paa",
        "\EUDF35_vehicles_data_F\data\planes\Fighter_04_fuselage_02_EUDF35_woodland_co.paa",
        "a3\air_f_jets\plane_fighter_04\data\Fighter_04_misc_01_co.paa",
        "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa",
        "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_01_ca.paa",
        "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_02_ca.paa"
    };

    textureList[]=
    {
        "EUDF35_WDL",
        1,
        "EUDF35_ART",
        0,
        "EUDF35_DES",
        0
    };
    class TextureSources
    {
        class EUDF35_WDL
        {
            author="kenoxite";
            displayName="EUDF (Woodland)";
            factions[]=
            {
                "IND_EUDF35_F",
                "BLU_EUDF35_F",
                "OPF_EUDF35_F",
                
                "IND_EUDF35_A_F",
                "BLU_EUDF35_A_F",
                "OPF_EUDF35_A_F",

                "IND_EUDF35_D_F",
                "BLU_EUDF35_D_F",
                "OPF_EUDF35_D_F"
            };
            textures[]=
            {
                "\EUDF35_vehicles_data_F\data\planes\Fighter_04_fuselage_01_EUDF35_woodland_co.paa",
                "\EUDF35_vehicles_data_F\data\planes\Fighter_04_fuselage_02_EUDF35_woodland_co.paa",
                "a3\air_f_jets\plane_fighter_04\data\Fighter_04_misc_01_co.paa",
                "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa",
                "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_01_ca.paa",
                "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_02_ca.paa"
            };
        };
        class EUDF35_ART
        {
            author="kenoxite";
            displayName="EUDF (Arctic)";
            factions[]=
            {
                "IND_EUDF35_F",
                "BLU_EUDF35_F",
                "OPF_EUDF35_F",
                
                "IND_EUDF35_A_F",
                "BLU_EUDF35_A_F",
                "OPF_EUDF35_A_F",
                
                "IND_EUDF35_D_F",
                "BLU_EUDF35_D_F",
                "OPF_EUDF35_D_F"
            };
            textures[]=
            {
                "\EUDF35_vehicles_data_F\data\planes\Fighter_04_fuselage_01_EUDF35_arctic_co.paa",
                "\EUDF35_vehicles_data_F\data\planes\Fighter_04_fuselage_02_EUDF35_arctic_co.paa",
                "a3\air_f_jets\plane_fighter_04\data\Fighter_04_misc_01_co.paa",
                "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa",
                "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_01_ca.paa",
                "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_02_ca.paa"
            };
        };
        class EUDF35_DES
        {
            author="kenoxite";
            displayName="EUDF (Arid)";
            factions[]=
            {
                "IND_EUDF35_F",
                "BLU_EUDF35_F",
                "OPF_EUDF35_F",
                
                "IND_EUDF35_A_F",
                "BLU_EUDF35_A_F",
                "OPF_EUDF35_A_F",
                
                "IND_EUDF35_D_F",
                "BLU_EUDF35_D_F",
                "OPF_EUDF35_D_F"
            };
            textures[]=
            {
                "\EUDF35_vehicles_data_F\data\planes\Fighter_04_fuselage_01_EUDF35_arid_co.paa",
                "\EUDF35_vehicles_data_F\data\planes\Fighter_04_fuselage_02_EUDF35_arid_co.paa",
                "a3\air_f_jets\plane_fighter_04\data\Fighter_04_misc_01_co.paa",
                "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa",
                "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_01_ca.paa",
                "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_02_ca.paa"
            };
        };
    };
};
