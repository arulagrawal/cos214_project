#include "CoreMemento.h"

CoreMemento::CoreMemento(int fuelWeight, bool isOn)
{
    this->coreState = new CoreState(fuelWeight, isOn);
    cout << "FUEL WEIGHT: " << fuelWeight << endl;
}

CoreMemento::~CoreMemento()
{
    delete this->coreState;
    coreState = 0;
}