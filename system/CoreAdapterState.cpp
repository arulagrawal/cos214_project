#include "CoreAdapterState.h"

CoreAdapterState::CoreAdapterState(int fuelWeight, Core* cores[3], bool isOn) : CoreState(fuelWeight, isOn)
{
    this->fuelWeight = fuelWeight;
    for(int i = 0; i < 3; i++) {
        this->cores[i] = cores[i];
    }
}

int CoreAdapterState::getFuelWeight(){
    return this->fuelWeight;
}

Core** CoreAdapterState::getCores(){
    return this->cores;
}