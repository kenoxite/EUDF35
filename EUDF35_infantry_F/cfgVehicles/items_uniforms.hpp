
// Combat Fatigues (EuroForest) [EUDF]
class Item_I_CombatUniform_EUDF35_Woodland: Item_Base_F
{
    author="kenoxite";
    displayName="Combat Fatigues (EuroForest) [EUDF]";
    model="\A3\Weapons_f\dummyweapon.p3d";
    modelSides[]={0,1,2,3};
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Uniforms";
    scope=2;
    scopeCurator=2;
    vehicleClass="ItemsUniforms";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_CombatUniform_EUDF35_Woodland";
            count=1;
        };
    };
};

// Combat Fatigues (Recon, EuroAlpine) [EUDF]
class Item_I_CombatUniform_Recon_EUDF35_Woodland: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Combat Fatigues (Recon, EuroAlpine) [EUDF]";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_CombatUniform_Recon_EUDF35_Woodland";
            count=1;
        };
    };
};

// Combat Fatigues (Officer, EuroForest) [EUDF]
class Item_I_EUDF35_OfficerUniform_Woodland: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Combat Fatigues (Officer, EuroForest) [EUDF]";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_EUDF35_OfficerUniform_Woodland";
            count=1;
        };
    };
};

// Combat Fatigues (Officer, EuroArid) [EUDF]
class Item_I_EUDF35_OfficerUniform_Arid: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Combat Fatigues (Officer, EuroArid) [EUDF]";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_EUDF35_OfficerUniform_Arid";
            count=1;
        };
    };
};

// Combat Fatigues (EuroArid) [EUDF]
class Item_I_CombatUniform_EUDF35_Arid: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Combat Fatigues (EuroArid) [EUDF]";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_CombatUniform_EUDF35_Arid";
            count=1;
        };
    };
};

// Combat Fatigues (EuroArid) (Rolled-up) [EUDF]
class Item_I_CombatUniform_EUDF35_Arid_Shortsleeve: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Combat Fatigues (EuroArid) (Rolled-up) [EUDF]";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_CombatUniform_EUDF35_Arid_Shortsleeve";
            count=1;
        };
    };
};

// Combat Fatigues (EuroArid) (Tank Top) [EUDF]
class Item_I_CombatUniform_EUDF35_Arid_Tanktop: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Combat Fatigues (EuroArid) (Tank Top) [EUDF]";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_CombatUniform_EUDF35_Arid_Tanktop";
            count=1;
        };
    };
};

// Combat Fatigues (EuroCam) [EUDF]
class Item_I_CombatUniform_Recon_EUDF35_Arid: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Combat Fatigues (EuroCam) [EUDF]";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_CombatUniform_Recon_EUDF35_Arid";
            count=1;
        };
    };
};

// Combat Fatigues (EuroCam) (Rolled-up) [EUDF]
class Item_I_CombatUniform_Recon_EUDF35_Arid_Shortsleeve: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Combat Fatigues (EuroCam) (Rolled-up) [EUDF]";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_CombatUniform_Recon_EUDF35_Arid_Shortsleeve";
            count=1;
        };
    };
};

// Combat Fatigues (EuroCam) (Tank Top) [EUDF]
class Item_I_CombatUniform_Recon_EUDF35_Arid_Tanktop: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Combat Fatigues (EuroCam) (Tank Top) [EUDF]";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_CombatUniform_Recon_EUDF35_Arid_Tanktop";
            count=1;
        };
    };
};

// Heli Pilot Coveralls (EuroForest) [EUDF]
class Item_I_EUDF35_HeliPilotCoveralls_Woodland: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Heli Pilot Coveralls (EuroForest) [EUDF]";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_EUDF35_HeliPilotCoveralls_Woodland";
            count=1;
        };
    };
};

// Heli Pilot Coveralls (EuroArid) [EUDF]
class Item_I_EUDF35_HeliPilotCoveralls_Arid: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Heli Pilot Coveralls (EuroArid) [EUDF]";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_EUDF35_HeliPilotCoveralls_Arid";
            count=1;
        };
    };
};

// Pilot Coveralls [EUDF]
class Item_I_EUDF35_pilotCoveralls: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Pilot Coveralls [EUDF]";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_EUDF35_pilotCoveralls";
            count=1;
        };
    };
};

// Recon Fatigues (EuroAlpine)
class Item_I_EUDF35_Gorka_Woodland: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Recon Fatigues (EuroAlpine)";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_EUDF35_Gorka_Woodland";
            count=1;
        };
    };
};

// Recon Fatigues (EuroArctic)
class Item_I_EUDF35_Gorka_Arctic: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Recon Fatigues (EuroArctic)";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_EUDF35_Gorka_Arctic";
            count=1;
        };
    };
};

// Ghillie Suit (EuroForest)
class Item_I_EUDF35_GhillieSuit_Woodland: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Ghillie Suit (EuroForest)";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_EUDF35_GhillieSuit_Woodland";
            count=1;
        };
    };
};

// Ghillie Suit (EuroAlpine)
class Item_I_EUDF35_GhillieSuit_Woodland_1: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Ghillie Suit (EuroAlpine)";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_EUDF35_GhillieSuit_Woodland_1";
            count=1;
        };
    };
};

// Full Ghillie (Lush) [EUDF]
class Item_I_EUDF35_FullGhillieSuit_Woodland: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Full Ghillie (Lush) [EUDF]";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_EUDF35_FullGhillieSuit_Woodland";
            count=1;
        };
    };
};

// Parade Uniform [EUDF]
class Item_I_ParadeUniform_01_EUDF: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Parade Uniform [EUDF]";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_ParadeUniform_01_EUDF";
            count=1;
        };
    };
};
class Item_I_ParadeUniform_01_EUDF_decorated: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Parade Uniform (Decorated) [EUDF]";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_ParadeUniform_01_EUDF_decorated";
            count=1;
        };
    };
};

// Wetsuit [EUDF]
class Item_I_EUDF35_Wetsuit: Item_I_CombatUniform_EUDF35_Woodland
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Wetsuit [EUDF]";
    class TransportItems
    {
        class Item_Uniform_X
        {
            name="U_I_EUDF35_Wetsuit";
            count=1;
        };
    };
};
