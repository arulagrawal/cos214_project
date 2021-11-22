#include "FalconHeavyMemento.h"

FalconHeavyMemento::FalconHeavyMemento(double cargo, double alt, double fuel)
{
    this->state = new FalconHeavyState(cargo, alt, fuel);
}

FalconHeavyMemento::~FalconHeavyMemento()
{
    delete this->state;
    this->state = 0;
}