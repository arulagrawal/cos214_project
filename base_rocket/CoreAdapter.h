#ifndef COREADAPTER_H
#define COREADAPTER_H

#include "Core.h"

using namespace std;

class CoreAdapter : public Core{
    public:
        CoreAdapter(double fuelWeight);//fuelWeight is the amount of fuel for the stage one engines. Used for calculations.
        bool staticFire();
        double getFuelWeight();
        bool hasFuel();
        void on();//Turn on all engines contained in the cores
        void off();
        double boost(double weight, double alt);//Takes in the current weight of the rocket and altitude. Recommended not to use alone, but to be called by the launchSequence and state. Note: this weight is cargo weight + fuel weight and is done automatically by the caller function
        bool isOn();//Checks if engines are on
    private:
        int fuelWeight;
        Core* cores[3];
};

#endif