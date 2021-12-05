#ifndef ROCKETSTATE_H
#define ROCKETSTATE_H

#include <string>
#include "Spacecraft.h"
#include "Falcon.h"
#include "Core.h"

class RocketState{
    public:
        RocketState(Spacecraft*, Falcon*, Core*);
        Spacecraft* getSpacecraft();
        Falcon* getFalcon();
        Core* getCore();
    private:
        Spacecraft* s;
        Falcon* f;
        Core* c;
};

#endif