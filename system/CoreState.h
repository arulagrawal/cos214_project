#ifndef CORESTATE_H
#define CORESTATE_H

#include "Core.h"

using namespace std;

/**
 * @brief Stores the state of a core.
 * 
 */
class CoreState
{
public:
    /**
         * @brief Construct a new Core State object
         * 
         * @param fuelWeight Amount of fuel in the core in kg.
         * @param isOn Boolean telling us whether the engines are on or off.
         */
    CoreState(int fuelWeight, bool isOn);
    int getFuelWeight();
    /**
         * @brief Get the Engines object
         * 
         * @return MerlinRocket** 
         */
    MerlinRocket **getEngines();

private:
    int fuelWeight;
    MerlinRocket *engines[9];
};

#endif