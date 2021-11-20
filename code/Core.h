#ifndef CORE_H
#define CORE_H

#include <string.h>
#include <iostream>
#include <cmath>
//#include "Merlin.h"
#include "MerlinRocket.h"

using namespace std;
///Core of all rockets.
///
///Contains fuel and directly controls the engines.
class Core
{
public:
    ///Constructor
    /**
         * @param fuelWeight Weight of the fuel contained in this core. Used for calculations in boost()*/
    Core(double fuelWeight);
    virtual bool staticFire();
    virtual double getFuelWeight();
    virtual bool hasFuel();
    /**turns on all engines in the core*/
    virtual void on();
    virtual void off();
    /**
     * @brief Calculates how much the rocket is boosted depending on weight and fuelWeight, recommended not to directly use this method, but to be called by the launchSequence() and state class.
     * 
     * @param weight Current weight of the rocket as cargo weight + fuel weight, to be done automatically by whichever function calls on boost().
     * @param alt Current altitude of the rocket.
     * @return The new altitude after the boost as a double. 
     */
    virtual double boost(double weight, double alt);
    /**
     * @brief Checks if all engines are on.
     * 
     * @return true 
     * @return false 
     */
    virtual bool isOn();
    Core* clone();
    void setFuel(int);

private:
    int fuelWeight;
    /*Each core contains 9 engines.*/
    MerlinRocket *engines[9];
};

#endif