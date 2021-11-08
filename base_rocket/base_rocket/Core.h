#ifndef CORE_H
#define CORE_H

#include <string.h>
#include <iostream>
#include "Merlin.h"
#include "MerlinRocket.h"

using namespace std;

class Core{
    public:
        Core(int fuelWeight);
        bool staticFire();
        int getFuelWeight();
        bool hasFuel();
        void on();
        void off();
        int boost(int weight, int alt);
        bool isOn();
    private:
        int fuelWeight;
        Merlin* engines[9];
};

#endif