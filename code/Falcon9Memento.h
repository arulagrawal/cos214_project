#ifndef FALC9MEM_H
#define FALC9MEM_H

#include "Falcon9State.h"
using namespace std;
///The Falcon9Memento class is used to copy the current state of the Falcon9 rocket so that it may be stored for later use.
///@param state is the Falcon9Memento that stores a state of the current Falcon9 Rocket.
class Falcon9Memento{
    public:
        virtual ~Falcon9Memento();
    private:
        friend class Falcon9;
        Falcon9Memento(double cargo, double alt, double fuel);
        Falcon9State* state;
};

#endif