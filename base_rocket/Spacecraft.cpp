#include "Spacecraft.h"

Spacecraft::Spacecraft(string cargo[], int cargoSize)
{
    this->cargo = new string[cargoSize];
    for(int i = 0; i < cargoSize; i++)
    {
        this->cargo[i] = cargo[i];
        this->loadCargo(cargo[i]);
    }
}

void Spacecraft::loadCargo(string item)
{
    cout <<"Loading item "<< item <<endl;
}

void Spacecraft::unloadCargo(string item)
{
    cout <<"Unloading item "<< item <<endl;
}

Spacecraft::~Spacecraft()
{
    delete cargo;
}