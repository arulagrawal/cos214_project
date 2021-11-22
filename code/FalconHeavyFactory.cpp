#include "FalconHeavyFactory.h"
///FalconHeavyFactory creates FalconHeavy Rockets for easy use.
Falcon* FalconHeavyFactory::createFalcon(double weight, double fuelWeight, bool test)
{
    return new FalconHeavy(weight, fuelWeight, test);
}