#include "CoreState.h"

CoreState::CoreState(int fuelWeight, bool isOn)
{
    this->fuelWeight = fuelWeight;
    for (int i = 0; i < 9; i++)
    {
        engines[i] = new MerlinRocket();
        if (isOn)
        {
            engines[i]->on();
        }
    }
}

int CoreState::getFuelWeight()
{
    return this->fuelWeight;
}

MerlinRocket **CoreState::getEngines()
{
    return this->engines;
}