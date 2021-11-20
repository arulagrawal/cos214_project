#ifndef DRAGON_H
#define DRAGON_H

#include <string.h>
#include <iostream>
#include "Spacecraft.h"
#include "StageAttached.h"
#include "StageDettached.h"
#include "Cargo.h"

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
        void attachOb(Cargo* ob);
};

#endif