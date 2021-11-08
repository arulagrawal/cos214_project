#ifndef FALCON_H
#define FALCON_H

#include <string.h>
#include <iostream>

#include "Core.h"
#include "Merlin.h"
#include "MerlinVac.h"
#include "MerlinRocket.h"
//#include "Stage.h"
//#include "Dragon.h" ------- to be implemented

using namespace std;

class Stage;

class Falcon {
    friend class Falcon9;
    public:
        Falcon(int weight, string mode);
        virtual bool staticFire() = 0;
        virtual void on() = 0;
        virtual void off() = 0;
        virtual void launchSequence() = 0;
        virtual Core* getCore() = 0;
        virtual int boost() = 0;
        void setCargoWeight(int weight);
        int getAltitude();
        void nextStage();
        void setState(Stage*);
        Merlin* getVac();

    private:
        int cargoWeight;
        int altitude;
        Merlin* engine;
        Stage* stage;
        string mode;
        //Dragon* spacecraft ------- for the attachment of a spacecraft once implemented
};

#endif