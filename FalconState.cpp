#include "FalconState.h"

FalconState::FalconState(double cargo, double height)
{
    this->cargoWeight = cargo;
    this->altitude = height;
}

double FalconState::getCargoWeight()
{
    return this->cargoWeight;
}

void FalconState::setCargoWeight(double weight)
{
    this->cargoWeight = weight;
}

double FalconState::getAltitude()
{
    return this->altitude;
}

void FalconState::setAltitude(double height)
{
    this->altitude = height;
}

