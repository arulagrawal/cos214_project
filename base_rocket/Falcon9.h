#ifndef FALCON9_H
#define FALCON9_H

#include <string>
#include <iostream>
#include "Falcon.h"
#include "StageOne.h"
#include "StageTwo.h"

using namespace std;

class Falcon9 : public Falcon {
    public:
        Falcon9(double weight, double fuelWeight, bool test);
        bool staticFire();
        void on();
        void off();
        void launchSequence();
        double boost(double weight, double alt);
        Core* getCore();
        MerlinVac* getEngine();
    private:
        Core* core;//This is falcon 9 so only one core
}; 

#endif


