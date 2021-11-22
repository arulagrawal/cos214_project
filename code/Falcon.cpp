#include "Falcon.h"
#include "Stage.h"
#include "StageOne.h"
#include "StageTwo.h"

Falcon::Falcon(double weight, bool test)
{
    cargoWeight = weight;
    stage = new StageOne(this);
    altitude = 0;
    engine = new MerlinVac();
    this->test = test;
}

int Falcon::getAltitude()
{
    return altitude;
}

void Falcon::nextStage()
{
    stage->next();
}

MerlinVac *Falcon::getEngine()
{
    return engine;
}

void Falcon::setState(Stage *s)
{
    stage = s;
}

Stage *Falcon::getStage()
{
    return this->stage;
}

void Falcon::notify()
{
    if (this->spacecraft != NULL)
    {
        spacecraft->dettach();
        cout << "Spacecraft dettached." << endl;
    }
    else
    {
        cout << "No spacecraft to dettach." << endl;
    }
}

void Falcon::attachSpacecraft(Spacecraft *s)
{
    this->spacecraft = s;
}

double Falcon::getCargoWeight()
{
    return this->cargoWeight;
}

void Falcon::setAltitude(double a)
{
    this->altitude = a;
}

void Falcon::setWeight(int w)
{
    this->cargoWeight = w;
}

bool Falcon::getTest()
{
    return this->test;
}

void Falcon::attachSat(SatCluster *s)
{
    this->satCluster = s;
    //cout << "Attaching" << endl;
}

void Falcon::detachSat()
{
    if (this->satCluster == NULL)
    {
        cout << "No clusters to detach." << endl;
    }
    else
    {
        this->satCluster = NULL;
        cout << "Satellites launched and activated." << endl;
    }
}

Spacecraft *Falcon::getSpacecraft()
{
    if (this->spacecraft != NULL)
    {
        return this->spacecraft;
    }
    else
    {
        return NULL;
    }
}
