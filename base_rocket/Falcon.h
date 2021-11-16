#ifndef FALCON_H
#define FALCON_H

#include <string.h>
#include <iostream>

#include "Core.h"
//#include "Merlin.h"
#include "MerlinVac.h"
//#include "MerlinRocket.h"
//#include "Stage.h"
//#include "Dragon.h" ------- to be implemented

using namespace std;

class Stage;
class MerlinVac;

class Falcon {
    friend class Falcon9;
    friend class FalconHeavy;
    public:
        Falcon(double weight, bool test);//Weight is the weight of cargo(not fuel) and test is a boolean (must be "test" or "sim") to determine whether rocket flies in test or sim mode.
        virtual bool staticFire() = 0;
        virtual void on() = 0;
        virtual void off() = 0;
        virtual void launchSequence() = 0;//responsible for launching the rocket and calling the methods required to simulate acceleration and fuel burn
        virtual Core* getCore() = 0;
        virtual int boost(){return 0;};//Implemented in core and MerlinVac, state handles which boost to call
        void setCargoWeight(int weight);
        int getAltitude();
        void nextStage();
        void setState(Stage*);
        MerlinVac* getEngine();

    private:
        double cargoWeight;
        double altitude;
        MerlinVac* engine;//Note: this is the vacuum engine used in stage 2 and is attached to the falcon itself. The main engines are found in the cores
        Stage* stage;
        bool test;
        /*Dragon spacecraft to be pluggged in here once inplemented*/
};

#endif