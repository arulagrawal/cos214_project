#ifndef MERLINVAC_H
#define MERLINVAC_H

#include "Merlin.h"
#include <string.h>
#include <iostream>

using namespace std;

class MerlinVac : public Merlin{
    public:
        MerlinVac();
        bool test();
        int boost(int weight, int alt);
        bool hasFuel();
    private:
        int fuelWeight;
};

#endif