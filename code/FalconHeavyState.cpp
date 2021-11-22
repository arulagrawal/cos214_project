#include "FalconHeavyState.h"
///using FalconHeavystate the FalconHeavy Rockets current rockets state is stored for later use.
///and getFuelWeight is used to retrieve the weight of the rockets fuel.
FalconHeavyState::FalconHeavyState(double cargo, double height, double fuel) : FalconState(cargo, height)
{
    this->fuelWeight = fuel;
}

double FalconHeavyState::getFuelWeight()
{
    return this->fuelWeight;
}

void FalconHeavyState::setFuelWeight(double fuel)
{
    this->fuelWeight = fuel;
}