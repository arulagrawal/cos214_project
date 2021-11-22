#ifndef COREADAPTERSTATE_H
#define COREADAPTERSTATE_H

#include "CoreAdapter.h"
#include "CoreState.h"
using namespace std;

/**
 * @brief Stores the state of a CoreAdapter.
 * 
 */
class CoreAdapterState : public CoreState
{
public:
    CoreAdapterState(int fuelWeight, Core* cores[3], bool isOn);
    int getFuelWeight();
    Core** getCores();
private:
    int fuelWeight;
    Core *cores[3];
};

#endif