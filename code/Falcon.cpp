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
    test = test;
    Satellite* links = new Satellite[60];
    setSatellite();
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
        cout << "Satellites Deploying." << endl;
        for(int x = 0; x < 60; x++){
            delete links[x];
        }
        delete [] links;
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

void Falcon::setSatellite(){
    Satellite* first = new Satellite();
       for(int x = 0; x<60; x++){
            links[x] = first->clone();
        }
}