#ifndef CORESTATE_H
#define CORESTATE_H

#include "Core.h"

using namespace std;

class CoreState{
    public:
        CoreState(int fuelWeight, bool isOn);
        int getFuelWeight();
        MerlinRocket** getEngines();
    private:
        int fuelWeight;
        MerlinRocket* engines[9];
};

#endif