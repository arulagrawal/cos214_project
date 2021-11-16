#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H

#include <string>
#include <iostream>
#include "Falcon.h"
#include "StageOne.h"
#include "StageTwo.h"
#include "CoreAdapter.h"

using namespace std;

class FalconHeavy : public Falcon {
    public:
        FalconHeavy(double weight, double fuelWeight, bool test);
        bool staticFire();
        void on();
        void off();
        void launchSequence();
        double boost(double weight, double alt);
        Core* getCore();
        MerlinVac* getEngine();
    private:
        Core* core;
}; 

#endif