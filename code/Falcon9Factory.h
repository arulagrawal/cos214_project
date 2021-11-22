#ifndef FALCON9FACTORY_H
#define FALCON9FACTORY_H

#include "FalconFactory.h"
#include "Falcon9.h"

using namespace std;

///This class uses createFalcon to create as many Falcon Rockets as nessecary for the simulation.
class Falcon9Factory : public FalconFactory
{
    protected:
        Falcon* createFalcon(double weight, double fuelWeight, bool test);
};

#endif