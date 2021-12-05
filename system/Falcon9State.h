#ifndef FALCON9STATE_H
#define FALCON9STATE_H

#include "FalconState.h"


using namespace std;
///Falcon9State creates the state of the current Falcon9Rocket
///@param fuelWeight is the weight of the current rockets fuel
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