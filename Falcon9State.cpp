#include "Falcon9State.h"

Falcon9State::Falcon9State(double cargo, double height, double fuel) : FalconState(cargo, height)
{
    this->fuelWeight = fuel;
}

double Falcon9State::getFuelWeight()
{
    return this->fuelWeight;
}



