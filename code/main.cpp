#include <iostream>
#include "Falcon9.h"
#include "FalconHeavy.h"
#include "Spacecraft.h"
#include "Dragon.h"
#include "DragonCrew.h"
#include "Satellite.h"
#include "Simulation.h"
#include "Spacestation.h"

using namespace std;

int main()
{
    Simulation *s = new Simulation();
    int start;

    while (start != 1)
    {
        cout << "1. to start simulation.\n2. to edit simulation\n\n" << endl;

        cin >> start;
        if (start == 1)
        {
            int ctrl;
            while (ctrl != 0)
            {
                cout << "0. to end simulation. \n1. to launch. \n2. Power On. \n3. Power Off\n\n" << endl;
                cin >> ctrl;
                if (ctrl == 1)
                {
                    s->start();
                }
                else if (ctrl == 2)
                {
                    s->on();
                }
                else if (ctrl == 3)
                {
                    s->off();
                }
            }
        }
        if (start == 2)
        {
            int newFuel;
            cout << "Current rockets fuel weight is: " << s->getFalcon()->getFuelWeight() << endl;
            cout << "Enter a new fuel weight: " << endl;
            cin >> newFuel;
            s->setFuel(newFuel);
            int newWeight;
            cout << "Current rockets cargo weight is: " << s->getFalcon()->getCargoWeight() << endl;
            cout << "Enter a new cargo weight: " << endl;
            cin >> newWeight;
            s->setWeight(newWeight);
        }
    }
}