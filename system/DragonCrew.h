#ifndef DRAGONCREW_H
#define DRAGONCREW_H

#include <string>
#include <iostream>
#include "Spacecraft.h"
#include "StageAttached.h"
#include "StageDettached.h"

using namespace std;
///The DragonCrew class inherits from the spacecraft class and is the crew and cargo variant of spacecraft.

/**
     * @param crewSize The size of the crew on board the Dragoncrew spacecraft.
     * @param crew is the list of names of each crew member on the ship.*/
class DragonCrew : public Spacecraft
{
private:
    vector<string> crew;
    int crewSize;

public:
    DragonCrew(string cargo[], int cargoSize, string crew[], int crewSize); //crew array initialised before intializing DragonCrew
    DragonCrew(string cargo[], int cargoSize, vector<string> crew, int crewSize);
    ~DragonCrew();
    void boost();
    void slow();
    void left();
    void right();
    void embark(string member);
    void disembark(string member);
    Spacecraft *clone();
    void dock();

    vector<string> getPeople();
};

#endif
