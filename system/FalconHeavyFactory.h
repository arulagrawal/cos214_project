#ifndef FALCONHEAVYFACTORY_H
#define FALCONHEAVYFACTORY_H

#include "FalconFactory.h"
#include "FalconHeavy.h"

using namespace std;

///This class uses createFalcon to create as many Falcon Rockets as nessecary for the simulation.
class FalconHeavyFactory : public FalconFactory
{
    protected:
        Falcon* createFalcon(double weight, double fuelWeight, bool test);
};

#endif