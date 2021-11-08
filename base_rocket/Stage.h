#ifndef STAGE_H
#define STAGE_H

#include <string.h>
#include <iostream>
#include "Falcon.h"

using namespace std;

class Stage {
    friend class StageOne;
    friend class StageTwo;
    public:
        Stage(Falcon*);
        virtual bool staticFire() = 0;
        virtual void on() = 0;
        virtual void off() = 0;
        virtual int boost(int weight, int alt) = 0;
        virtual void next() = 0;
    private:
        Falcon* falcon;
};

#endif