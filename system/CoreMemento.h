#ifndef COREMEMENTO_H
#define COREMEMENTO_H

#include "CoreState.h"

using namespace std;

class CoreState;

/**
 * @brief Stores the state of a core.
 * 
 */
class CoreMemento
{
public:
    virtual ~CoreMemento();

protected:
    /**
     * @brief Construct a new Core Memento object
     * 
     * @param fuelWeight Amount of fuel in the core in kg.
     * @param isOn A boolean which tells if the engines in the core are on or off.
     */
    CoreMemento(int fuelWeight, bool isOn);

private:
    friend class Core;
    CoreState *coreState;
};

#endif