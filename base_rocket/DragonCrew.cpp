#include "DragonCrew.h"

DragonCrew::DragonCrew(string cargo[], int cargoSize, string crew[], int crewSize) : Spacecraft(cargo, cargoSize) 
{
    this->crew = crew;
    this->crew = new string[crewSize];
    for(int i = 0; i < crewSize; i++)
    {
        this->crew[i] = crew[i];
        this->embark(crew[i]);
    }
}

DragonCrew::~DragonCrew()
{
    delete crew;
}

void DragonCrew::boost()
{
    cout<<"Spacecraft accelerating"<<endl;
}

void DragonCrew::slow()
{
    cout<<"Spacecraft slowing down"<<endl;
}

void DragonCrew::left()
{
    cout<<"Spacecraft making left turn"<<endl;
}

void DragonCrew::right()
{
    cout<<"Spacecraft making right turn"<<endl;
}

void DragonCrew::embark(string member)
{
    cout<<"Crew member "<<member<< " entering Spacecraft"<<endl;
}

void DragonCrew::disembark(string member)
{
    cout<<"Crew member "<<member<< " exciting Spacecraft"<<endl;
}