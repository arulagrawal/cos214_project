#ifndef FALCONHEAVYFACTORY_H
#define FALCONHEAVYFACTORY_H

#include "FalconFactory.h"
#include "FalconHeavy.h"

using namespace std;


class FalconHeavyFactory : public FalconFactory
{
    protected:
        Falcon* createFalcon(double weight, double fuelWeight, bool test);
};

#endif