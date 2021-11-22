#ifndef STAGE_H
#define STAGE_H

#include <string>
#include <iostream>
#include "Falcon.h"
#include "Spacecraft.h"

using namespace std;
/**
 * @brief The base class for all the various Stage classes
 * 
 */
class Stage {
    friend class StageOne;
    friend class StageTwo;
    friend class StageAttached;
    friend class StageDettached;
    public:
        Stage(Falcon*);
        Stage(Spacecraft*);
        virtual bool staticFire() = 0;
        virtual void on() = 0;
        virtual void off() = 0;
        virtual double boost(double weight, double alt) = 0;
        virtual void next() = 0;
        virtual void boost(){};
        virtual void slow(){};
        virtual void left(){};
        virtual void right(){};
    private:
        Falcon* falcon;
        Spacecraft* spacecraft;
};

#endif