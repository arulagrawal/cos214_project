#include "FalconFactory.h"

Falcon* FalconFactory::create(double weight, double fuelWeight, bool test)
{
    return createFalcon(weight, fuelWeight, test);
}