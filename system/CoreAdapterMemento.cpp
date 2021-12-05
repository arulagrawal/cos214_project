#include "CoreAdapterMemento.h"

CoreAdapterMemento::CoreAdapterMemento(int fuelWeight, Core * c[3], bool isOn) : CoreMemento(fuelWeight, isOn)
{
    this->coreAdapterState = new CoreAdapterState(fuelWeight, c, isOn);
}

CoreAdapterMemento::~CoreAdapterMemento()
{
    delete this->coreAdapterState;
    this->coreAdapterState = 0;
}