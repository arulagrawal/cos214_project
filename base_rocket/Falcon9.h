#ifndef FALCON9_H
#define FALCON9_H

#include <string>
#include <iostream>
#include "Falcon.h"

using namespace std;

class Falcon9 : public Falcon {
    public:
        //Falcon9(int weight);
        bool staticFire();
        void on();
        void off();
        void launchSequence();
        //int boost(int weight, int alt);
        Core* getCore();
        Merlin* getEngine();
    private:
        Core* core;
}; 

#endif


