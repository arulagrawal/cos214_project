#include "Falcon9Factory.h"

Falcon* Falcon9Factory::createFalcon(double weight, double fuelWeight, bool test)
{
    return new Falcon9(weight, fuelWeight, test);
}