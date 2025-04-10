#define VERSION "1.2"

class CfgPatches
{
    class EUDF35_groups_F
    {
        name = "European Defense Force 2035 - Groups";
        author = "kenoxite";
        authors[] = {
            "kenoxite"
        };
        requiredAddons[]=
        {
            "EUDF35_infantry_F",
            "EUDF35_vehicles_F"
        };
        requiredVersion = 1.62;
        units[]={};
        weapons[]={};

        version = VERSION;
    };
};

class CfgGroups
{
    class West
    {
        // name="$STR_A3_CfgGroups_West0";
        // side=1;
        #include "blufor\woodland.hpp"
        #include "blufor\arctic.hpp"
        #include "blufor\arid.hpp"
    };
    class Indep {
        // name="$STR_A3_CfgGroups_Indep0";
        // side=2;
        #include "indep\woodland.hpp"
        #include "indep\arctic.hpp"
        #include "indep\arid.hpp"
    };

    class East {
        // name="$STR_A3_CfgGroups_East0";
        // side=0;
        #include "opfor\woodland.hpp"
        #include "opfor\arctic.hpp"
        #include "opfor\arid.hpp"
    };
};

