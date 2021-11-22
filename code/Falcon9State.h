#ifndef FALCON9STATE_H
#define FALCON9STATE_H

#include "FalconState.h"


using namespace std;

class Falcon9State : public FalconState
{
    private:
        double fuelWeight;
    public:
        Falcon9State(double cargo, double height, double fuel);
        double getFuelWeight();
        double getcargoWeight();
};

#endif