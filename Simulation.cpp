#include "Simulation.h"
#include "FalconFactory.h"
#include "Falcon9Factory.h"
#include "FalconHeavyFactory.h"

Simulation::Simulation()
{
    int type;
    double fuelWeight;
    double cargoWeight;
    bool test;

    FalconFactory *factory[2];
    factory[0] = new Falcon9Factory();
    factory[1] = new FalconHeavyFactory();

    cout << "---------Please choose an option: ---------" << endl;
    cout << "1. Falcon 9" << endl;
    cout << "2. FalconHeavy" << endl;
    cin >> type;
    cout << "\n"
         << endl;
    cout << "---------Please enter the cargo weight: ---------" << endl;
    cin >> cargoWeight;

    cout << "---------Please enter the fuel weight: ---------" << endl;
    cin >> fuelWeight;

    cout << "---------Run in test mode?---------" << endl;
    cout << "1. Yes, test mode." << endl;
    cout << "0. No, simulation mode." << endl;
    cin >> test;
    if (type == 1)
    {
        //falcon = new Falcon9(cargoWeight, fuelWeight, test);
        falcon = factory[0]->create(cargoWeight, fuelWeight, test);
        cout << "---------Choose a spacecraft or satellite cluster.---------" << endl;
        cout << "1. Dragon" << endl;
        cout << "2. Dragon Crew" << endl;
        cout << "3. Satellite Cluster" << endl;
        int craft;
        cin >> craft;
        //cout<<"Craft: "<<craft<<endl;
        if (craft == 1)
        {
            int cargoSize;
            cout << "\nHow many items of cargo will be added: ";

            cin >> cargoSize;

            /*while (cargoSize < 0)
            {

                cout << "\nEnter a valid positive number: ";
                cin >> cargoSize;
            }*/

            string *cargo = new string[cargoSize];

            //get cargo item names/descriptions

            for (int i = 0; i < cargoSize; i++)
            {

                cout << "\n\nEnter the name/description of cargo item-" << i << ": ";
                cin >> cargo[i];
            }
            Spacecraft *d = new Dragon(cargo, cargoSize);
            falcon->attachSpacecraft(d);
        }
        else if (craft == 2)
        {
            int crewCargoSize = 0;

            string *crewCargo = new string[crewCargoSize];

            //get cargo item names/descriptions

            for (int i = 0; i < crewCargoSize; i++)
            {

                cout << "\n\nEnter the name/description of cargo item-" << i << ": ";
                cin >> crewCargo[i];
            }

            //get number of crew members
            int crewSize;

            cout << "\nHow many crew members will be added: ";
            cin >> crewSize;

            string *crew = new string[crewSize];

            //get crew names/descriptions

            for (int i = 0; i < crewSize; i++)
            {

                cout << "\n\nEnter the name/description of crew member-" << i << ": ";
                cin >> crew[i];
            }

            int cargoSize;
            cout << "\nHow many items of cargo will be added: ";

            cin >> cargoSize;

            string *cargo = new string[cargoSize];

            //get cargo item names/descriptions

            for (int i = 0; i < cargoSize; i++)
            {

                cout << "\n\nEnter the name/description of cargo item-" << i << ": ";
                cin >> cargo[i];
            }

            //create spacecraft

            DragonCrew *crewCraft = new DragonCrew(cargo, cargoSize, crew, crewSize);
            falcon->attachSpacecraft(crewCraft);
        }
        else if (craft == 3)
        {
            SatCluster *s = new SatCluster("Starlink");
            cout << "Satellite Cluster created and attached to rocket. Weight set to 1000kg" << endl;
            falcon->setWeight(1000);
            falcon->attachSat(s);
        }
    }
    else if (type == 2)
    {
        //falcon = new FalconHeavy(cargoWeight, fuelWeight, test);
        falcon = factory[1]->create(cargoWeight, fuelWeight, test);
        cout << "---------Choose a spacecraft or satellite cluster.---------" << endl;
        cout << "1. Dragon" << endl;
        cout << "2. Dragon Crew" << endl;
        //cout << "3. Satellite Cluster" << endl;
        int craft;
        cin >> craft;
        if (craft == 1)
        {
            int cargoSize;
            cout << "\nHow many items of cargo will be added: ";

            cin >> cargoSize;

            string *cargo = new string[cargoSize];

            //get cargo item names/descriptions

            for (int i = 0; i < cargoSize; i++)
            {

                cout << "\n\nEnter the name/description of cargo item-" << i << ": ";
                cin >> cargo[i];
            }
            Spacecraft *d = new Dragon(cargo, cargoSize);
            falcon->attachSpacecraft(d);
        }
        else if (craft == 2)
        {
            //get number of crew members
            int crewSize;

            cout << "\nHow many crew members will be added: ";
            cin >> crewSize;

            string *crew = new string[crewSize];

            //get crew names/descriptions

            for (int i = 0; i < crewSize; i++)
            {

                cout << "\n\nEnter the name/description of crew member-" << i << ": ";
                cin >> crew[i];
            }

            int cargoSize;
            cout << "\nHow many items of cargo will be added: ";

            cin >> cargoSize;

            string *cargo = new string[cargoSize];

            //get cargo item names/descriptions

            for (int i = 0; i < cargoSize; i++)
            {

                cout << "\n\nEnter the name/description of cargo item-" << i << ": ";
                cin >> cargo[i];
            }

            //create spacecraft

            DragonCrew *crewCraft = new DragonCrew(cargo, cargoSize, crew, crewSize);
            falcon->attachSpacecraft(crewCraft);
        }
        /*else if (craft == 3)
        {
            SatCluster *s = new SatCluster("Starlink");
            cout << "Satellite Cluster created and attached to rocket. Weight set to 1000kg" << endl;
            falcon->setWeight(1000);
            falcon->attachSat(s);
        }*/
    }
}

void Simulation::start()
{
    bool destReached;
    spacecraft = falcon->getSpacecraft();
    if (falcon->staticFire())
    {
        destReached = falcon->launchSequence();
    }
    if (destReached == true && spacecraft != NULL)
    {
        int x = randNum();
        int y = randNum();
        int yCount = 0;
        int xCount = 0;
        Command* up = new Boost(spacecraft);

    }
}

void Simulation::on()
{
    falcon->on();
}

void Simulation::off()
{
    falcon->off();
}

Falcon *Simulation::getFalcon()
{
    return falcon;
}

void Simulation::setWeight(int w)
{
    falcon->setWeight(w);
}

void Simulation::setFuel(int f)
{
    falcon->setFuel(f);
}

int Simulation::randNum()
{
    srand(time(0));

    int randomNum = rand() % 11 + (-5);

    return randomNum;
}