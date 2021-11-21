#ifndef FALCONFACTORY_H
#define FALCONFACTORY_H

#include "Falcon.h"

using namespace std;


class FalconFactory
{
    public:
        Falcon* create(double weight, double fuelWeight, bool test);
    protected:
        virtual Falcon* createFalcon(double weight, double fuelWeight, bool test) = 0;
};

#endif