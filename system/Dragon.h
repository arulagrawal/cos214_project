#ifndef DRAGON_H
#define DRAGON_H

#include <string.h>
#include <iostream>
#include "Spacecraft.h"
#include "StageAttached.h"
#include "StageDettached.h"

using namespace std;
/**
 * @brief The dragon class inherits from the spacecraft class and is the Cargo only variant of the spacecraft.
 * 
 */
class Dragon : public Spacecraft
{
public:
    /**
     * @brief Construct a new Dragon object
     * 
     * @param cargo Array of cargo to carry onboard.
     * @param cargoSize Size of the array.
     */
    Dragon(string cargo[], int cargoSize);
    void boost();
    void slow();
    void left();
    void right();
    Spacecraft *clone();
    vector<string> getPeople();
};

#endif