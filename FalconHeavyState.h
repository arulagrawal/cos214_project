#ifndef FALCONHEAVYSTATE_H
#define FALCONHEAVYSTATE_H

#include "FalconState.h"

using namespace std;

class FalconHeavyState : public FalconState
{
    private:
        double fuelWeight;
    public:
        FalconHeavyState(double cargo, double height, double fuel);
        double getFuelWeight();
        void setFuelWeight(double fuel);

};

#endif