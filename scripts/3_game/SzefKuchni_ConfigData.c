class SzefKuchni_ConfigData
{
    float RequiredSalt;
    float RequiredSugar;
    float RequiredOcet;

    ref map<string, float> RequiredMeat;
    ref map<string, float> RequiredFruit;
    ref map<string, float> RequiredPickle;
    ref map<string, float> RequiredJam;

    void SzefKuchni_ConfigData()
    {
        RequiredSalt = 100;  //10%
        RequiredSugar = 100;
        RequiredOcet = 70;

        // Mięso
        RequiredMeat = new map<string, float>();//meat100%
        RequiredMeat.Insert("RabbitLegMeat", 750);
        RequiredMeat.Insert("CarpFilletMeat", 1500);
        RequiredMeat.Insert("MackerelFilletMeat", 1500);
        RequiredMeat.Insert("BearSteakMeat", 1500);
        RequiredMeat.Insert("BoarSteakMeat", 750);
        RequiredMeat.Insert("ChickenBreastMeat", 375);
        RequiredMeat.Insert("CowSteakMeat", 1500);
        RequiredMeat.Insert("FoxSteakMeat", 390);
        RequiredMeat.Insert("DeerSteakMeat", 750);
        RequiredMeat.Insert("GoatSteakMeat", 450);
        RequiredMeat.Insert("PigSteakMeat", 750);
        RequiredMeat.Insert("ReindeerSteakMeat", 750);
        RequiredMeat.Insert("SheepSteakMeat", 450);
        RequiredMeat.Insert("SteelheadTroutFilletMeat", 1500);
        RequiredMeat.Insert("WalleyePollockFilletMeat", 750);
        RequiredMeat.Insert("WolfSteakMeat", 450);
        RequiredMeat.Insert("Sardines", 1200);
		RequiredMeat.Insert("Lard", 600);

        // Owoce
        RequiredFruit = new map<string, float>();// 100%
        RequiredFruit.Insert("Pear", 450);
        RequiredFruit.Insert("Apple", 375);
        RequiredFruit.Insert("Plum", 750);
		RequiredFruit.Insert("SlicedPumpkin", 750);
		RequiredFruit.Insert("Potato", 600);
		RequiredFruit.Insert("Tomato", 300);

        // Kiszonki
        RequiredPickle = new map<string, float>(); //100%
        RequiredPickle.Insert("Pear", 450);
        RequiredPickle.Insert("AgaricusMushroom", 450);
        RequiredPickle.Insert("PleurotusMushroom", 450);
        RequiredPickle.Insert("LactariusMushroom", 450);
        RequiredPickle.Insert("BoletusMushroom", 450);
        RequiredPickle.Insert("MacrolepiotaMushroom", 450);
		RequiredPickle.Insert("Zucchini", 100);
		RequiredPickle.Insert("GreenBellPepper", 450);
		RequiredPickle.Insert("SlicedPumpkin", 750);

        // Dżemy
        RequiredJam = new map<string, float>(); //100%
        RequiredJam.Insert("Pear", 450);
        RequiredJam.Insert("Apple", 375);
        RequiredJam.Insert("Plum", 750);
		RequiredJam.Insert("SlicedPumpkin", 750);
		RequiredJam.Insert("CaninaBerry", 150);
		RequiredJam.Insert("SambucusBerry", 150);
    }
}
//ocet -700
//cukier -1000
//salt - 100
//plum: 75 × 3 = 225
//apple: 125 × 3 = 375
//pear: 150 × 3 = 450
//CaninaBerry 50 x 3 = 150
//SambucusBerry 50 x 3 = 150
//slicedpumpkin: 250 × 3 = 750
//tomato: 100 × 3 = 300
//potato: 200 × 3 = 600
//greenbellpepper: 150 × 3 = 450
//zucchini: 200 × 3 = 600
//mushroom: 150 × 3 = 450

//mięso 

//goat: 150 × 3 = 450
//boar: 250 × 3 = 750
//pig: 250 × 3 = 750
//deer: 250 × 3 = 750
//reindeer: 250 × 3 = 750
//wolf: 150 × 3 = 450
//bear: 500 × 3 = 1500
//cow: 500 × 3 = 1500
//sheep: 150 × 3 = 450
//fox: 130 × 3 = 390
//chicken: 125 × 3 = 375
//rabbit: 250 × 3 = 750
//carp: 500 × 3 = 1500
//mackerel: 500 × 3 = 1500
//walleyepollock: 250 × 3 = 750
//trout: 500 × 3 = 1500
//sardines: 400 × 3 = 1200
//słonina: 200 × 3 = 600