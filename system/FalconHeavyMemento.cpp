#include "FalconHeavyMemento.h"
///FalconHeavyMemento is the constructor which creates the state of the current FalconHeavy Rocket in use for storage.
FalconHeavyMemento::FalconHeavyMemento(double cargo, double alt, double fuel)
{
    this->state = new FalconHeavyState(cargo, alt, fuel);
}

FalconHeavyMemento::~FalconHeavyMemento()
{
    delete this->state;
    this->state = 0;
}