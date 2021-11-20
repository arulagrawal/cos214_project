#ifndef STAGEONE_H
#define STAGEONE_H

#include <string>
#include <iostream>
#include "Stage.h"

using namespace std;

class StageOne : public Stage {
    public:
        StageOne(Falcon*);
        bool staticFire();
        void on();
        void off();
        double boost(double weight, double alt);
        int getStage();
        void next();
    private:
};

#endif