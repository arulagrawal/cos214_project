#ifndef FALC9MEM_H
#define FALC9MEM_H

#include "Falcon9State.h"
using namespace std;

class Falcon9Memento{
    public:
        virtual ~Falcon9Memento();
    private:
        friend class Falcon9;
        Falcon9Memento(double cargo, double alt, double fuel);
        Falcon9State* state;
};

#endif