#include "Falcon9Factory.h"
///Falcon9Factory creates Falcon9 Rockets for easy use.
Falcon* Falcon9Factory::createFalcon(double weight, double fuelWeight, bool test)
{
    return new Falcon9(weight, fuelWeight, test);
}