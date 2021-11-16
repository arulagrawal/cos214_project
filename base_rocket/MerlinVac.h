#ifndef MERLINVAC_H
#define MERLINVAC_H

#include <string>
#include <iostream>
#include <cmath>

using namespace std;

class MerlinVac {
    public:
        MerlinVac();
        bool test();
        double boost(double weight, double alt);
        bool hasFuel();
        void on();
        void off();
        bool isOn();
    private:
        int fuelWeight;
        bool power;
};

#endif