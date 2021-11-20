#include "Simulation.h"

Simulation::Simulation()
{
    int type;
    double fuelWeight;
    double cargoWeight;
    bool test;
    cout << "---------Please choose an option: ---------" << endl;
    cout << "1. Falcon 9" << endl;
    cout << "2. FalconHeavy" << endl;
    cin >> type;
    cout << "\n"
         << endl;
    cout << "---------Please enter the cargo weight: ---------" << endl;
    cin >> cargoWeight;
    while (!isdigit(cargoWeight))
    {
        cout << "Not a number. Please enter a number" << endl;
        cout << "---------Please enter the cargo weight: ---------" << endl;
        cin >> cargoWeight;
    }

    cout << "---------Please enter the fuel weight: ---------" << endl;
    cin >> fuelWeight;
    while (!isdigit(fuelWeight))
    {
        cout << "Not a number. Please enter a number" << endl;
        cout << "---------Please enter the fuel weight: ---------" << endl;
        cin >> fuelWeight;
    }

    cout << "---------Run in test mode?---------" << endl;
    cout << "1. Yes, test mode." << endl;
    cout << "0. No, simulation mode." << endl;
    cin >> test;
    if (type == 1)
    {
        falcon = new Falcon9(cargoWeight, fuelWeight, test);
    }
    else if (type == 2)
    {
        falcon = new FalconHeavy(cargoWeight, fuelWeight, test);
    }
}

void Simulation::start()
{
    if (falcon->staticFire()){
        falcon->launchSequence();
    }
}