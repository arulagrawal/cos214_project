#ifndef DRAGONCREW_H
#define DRAGONCREW_H

#include <string>
#include <iostream>
#include "Spacecraft.h"
#include "StageAttached.h"
#include "StageDettached.h"

using namespace std;

class DragonCrew : public Spacecraft 
{
    private: 
        string *crew;
    public:
        DragonCrew(string cargo[], int cargoSize, string crew[], int crewSize);         //crew array initialised before intializing DragonCrew
        ~DragonCrew();
        void boost();
        void slow();
        void left();
        void right();
        void embark(string member);
        void disembark(string member);
        //return spacecraft to earth method?
};

#endif