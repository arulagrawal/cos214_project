#ifndef SIMULATION_H
#define SIMULATION_H
#include <string>
#include "Falcon9.h"
#include "FalconHeavy.h"
#include "Spacecraft.h"
#include "Dragon.h"
#include "DragonCrew.h"
#include "SatCluster.h"
#include "Command.h"
#include "Button.h"
#include "Left.h"
#include "Right.h"
#include "Boost.h"
#include "Slow.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Simulation
{
    /**
    * @brief The Simulation class is where the simulations of launches will be run
    * 
    */
    
    public:
        Simulation();
        void start();
        void on();
        void off();
        void setFuel(int);
        void setWeight(int);
        Falcon* getFalcon();
    private:
        Falcon* falcon;
        Spacecraft* spacecraft;
        int randNum();
};

#endif