#ifndef SIMULATION_H
#define SIMULATION_H
#include <string>
#include "Falcon9.h"
#include "FalconHeavy.h"
#include "Spacecraft.h"
#include "Dragon.h"
#include "DragonCrew.h"

using namespace std;

class Simulation
{
    public:
        Simulation();
        void start();
    private:
        Falcon* falcon;
};

#endif