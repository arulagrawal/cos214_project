#include "Spacecraft.h"

#include "Stage.h"
#include "StageAttached.h"
#include "StageDettached.h"
///Spacecraft is the parent of Dragon and DragonCrew.
Spacecraft::Spacecraft(string cargo[], int cargoSize)
{
    this->cargo = new string[cargoSize];
    for (int i = 0; i < cargoSize; i++)
    {
        this->cargo[i] = cargo[i];
        this->loadCargo(cargo[i]);
    }
    stage = new StageAttached(this);
}

void Spacecraft::loadCargo(string item)
{
    cout << "Loading item " << item << endl;
}

void Spacecraft::unloadCargo(string item)
{
    cout << "Unloading item " << item << endl;
}

void Spacecraft::dettach()
{
    stage->next();
}

Spacecraft::~Spacecraft()
{
    delete cargo;
}

void Spacecraft::setStage(Stage *s)
{
    this->stage = s;
}

/*void Spacecraft::dock()
{
    //cout << "REACHED DOCK" << endl;
    Spacestation *station = Spacestation::instance();
    station->setVisitor(this);
    station->updateSpacestationData(this->getPeople());
}*/

void Spacecraft::disembark()
{
    Spacestation *station = Spacestation::instance();
    station->removeVisitor();
}