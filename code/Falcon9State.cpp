#include "Falcon9State.h"
///using Falcon9state the Falcon9 Rockets current rockets state is stored for later use.
///and getFuelWeight is used to retrieve the weight of the rockets fuel.
Falcon9State::Falcon9State(double cargo, double height, double fuel) : FalconState(cargo, height)
{
    this->fuelWeight = fuel;
}

double Falcon9State::getFuelWeight()
{
    return this->fuelWeight;
}



