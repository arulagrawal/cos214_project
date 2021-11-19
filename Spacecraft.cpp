#include "Spacecraft.h"
#include "Stage.h"
#include "StageAttached.h"
#include "StageDettached.h"

Spacecraft::Spacecraft(string cargo[], int cargoSize)
{
    this->cargo = new string[cargoSize];
    for(int i = 0; i < cargoSize; i++)
    {
        this->cargo[i] = cargo[i];
        this->loadCargo(cargo[i]);
    }
    stage = new StageAttached(this);
}

void Spacecraft::loadCargo(string item)
{
    cout <<"Loading item "<< item <<endl;
}

void Spacecraft::unloadCargo(string item)
{
    cout <<"Unloading item "<< item <<endl;
}

void Spacecraft::dettach()
{
    stage->next();
}

Spacecraft::~Spacecraft()
{
    delete cargo;
}

void Spacecraft::setStage(Stage* s){
    this->stage = s;
}