#include "FalconState.h"
///using Falconstate the Falcon Rockets current rockets state is stored for later use.
///getCargoWeight is used to retrieve the weight of the rockets Cargo.
///getAltitude is used to retrieve the altitude at which the Rocket currently is.
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

