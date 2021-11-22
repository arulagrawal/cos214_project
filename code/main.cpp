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
    int arrSize = 0;
    //Simulations* s[arrSize];
    cout << "How many simulations would you like to create?: " << endl;
    cin >> arrSize;
    Simulation *s = new Simulation[arrSize];
    int start;
    int simNum;
    cout << "Which simulation would you like to enter? Max = " << arrSize << ": " << endl;
    cin >> simNum;
    simNum--;
    while (start != 0)
    {
        cout << "1. to start simulation.\n2. to edit simulation\n3. to jump to another simulation\n0. Exit simulation" << endl;
        cin >> start;
        if (start == 1)
        {
            int ctrl;
            while (ctrl != 0)
            {
                cout << "0. to end simulation. \n1. to launch. \n2. Power On. \n3. Power Off\n\n"
                     << endl;
                cin >> ctrl;
                if (ctrl == 1)
                {
                    s[simNum].start();
                }
                else if (ctrl == 2)
                {
                    s[simNum].on();
                }
                else if (ctrl == 3)
                {
                    s[simNum].off();
                }
            }
            start = 3;
        }
        else if (start == 2)
        {
            int newFuel;
            cout << "Current rockets fuel weight is: " << s[simNum].getFalcon()->getFuelWeight() << endl;
            cout << "Enter a new fuel weight: " << endl;
            cin >> newFuel;
            s[simNum].setFuel(newFuel);
            int newWeight;
            cout << "Current rockets cargo weight is: " << s[simNum].getFalcon()->getCargoWeight() << endl;
            cout << "Enter a new cargo weight: " << endl;
            cin >> newWeight;
            s[simNum].setWeight(newWeight);
        }
        else if (start == 3)
        {
            cout << "Which simulation would you like to jump to? Max = " << arrSize << ": " << endl;
            cin >> simNum;
            simNum--;
        }else if(start == 0){
            return 0;
        }
    }
}