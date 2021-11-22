#ifndef COREADAPTER_H
#define COREADAPTER_H

#include "Core.h"
#include "CoreAdapterMemento.h"
class CoreAdapterMemento;

using namespace std;
/**
 * An adapter that treats 3 seperate cores as a single core. Used in FalconHeavy which requires 3 cores.
 * 
 */
class CoreAdapter : public Core
{
public:
    /**
 * @brief Construct a new Core Adapter object
 * 
 * @param fuelWeight The amount of fuel for the stage one engines. Used for calculations.
 */
    CoreAdapter(int fuelWeight);
    bool staticFire();
    double getFuelWeight();
    bool hasFuel();
    /**
     * @brief Turn on all engines contained in the cores
     * 
     */
    void on();
    void off();
    /**
         * @brief Calculates how much the rocket is boosted depending on weight and fuelWeight, recommended not to directly use this method, but to be called by the launchSequence() and state class.
         * 
         * @param weight Current weight of the rocket as cargo weight + fuel weight, to be done automatically by whichever function calls on boost().
         * @param alt Current altitude of the rocket.
         * @return The new altitude after the boost as a double. 
         */
    double boost(double weight, double alt);
    /**
         * @brief Checks if all engines are on.
         * 
         * @return true 
         * @return false 
         */
    bool isOn();
    Core *clone();
    void setFuel(int);
    const bool isAdapter = true;
    CoreMemento* createMemento();
    void reinstateMemento(CoreAdapterMemento *mem);

private:
    int fuelWeight;
    Core *cores[3];
};

#endif