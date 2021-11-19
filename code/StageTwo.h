#ifndef STAGETWO_H
#define STAGETWO_H

#include <string>
#include <iostream>
#include "Stage.h"

using namespace std;

class StageTwo : public Stage{
    public:
        StageTwo(Falcon*);
        bool staticFire();
        void on();
        void off();
        double boost(double weight, double alt);
        int getStage();
        void next();
};

#endif