#include "FalconFactory.h"
///The FalconFactory is the base Factory for the 2 Falconfactory variants - Falcon9Factory, FalconHeavyFactory
///create creates a Falcon Rocket
Falcon* FalconFactory::create(double weight, double fuelWeight, bool test)
{
    return createFalcon(weight, fuelWeight, test);
}