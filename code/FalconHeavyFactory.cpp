#include "FalconHeavyFactory.h"

Falcon* FalconHeavyFactory::createFalcon(double weight, double fuelWeight, bool test)
{
    return new FalconHeavy(weight, fuelWeight, test);
}