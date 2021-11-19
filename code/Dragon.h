#ifndef DRAGON_H
#define DRAGON_H

#include <string.h>
#include <iostream>
#include "code/Spacecraft.h"
#include "code/StageAttached.h"
#include "code/StageDettached.h"

using namespace std;

class Dragon : public Spacecraft 
{
    public:
        Dragon(string cargo[], int cargoSize);
        void boost();
        void slow();
        void left();
        void right();
        void detach();
        void notify();
        void attachOb(Observer ob);
};

#endif