#ifndef STAGETWO_H
#define STAGETWO_H

#include <string.h>
#include <iostream>
#include "Stage.h"

using namespace std;

class StageTwo : public Stage{
    public:
        StageTwo(Falcon*);
        bool staticFire();
        void on();
        void off();
        int boost(int weight, int alt);
        int getStage();
        void next();
};

#endif