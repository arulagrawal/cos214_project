#include "DragonCrew.h"

DragonCrew::DragonCrew(string cargo[], int cargoSize, string crew[], int crewSize) : Spacecraft(cargo, cargoSize)
{
    this->crewSize = crewSize;
    for (int i = 0; i < crewSize; i++)
    {
        this->crew.push_back(crew[i]);
        this->embark(crew[i]);
    }
}

DragonCrew::DragonCrew(string cargo[], int cargoSize, vector<string> crew, int crewSize) : Spacecraft(cargo, cargoSize)
{
    this->crew = crew;
    this->crewSize = crewSize;
    for (int i = 0; i < crewSize; i++)
    {
        this->crew.push_back(crew[i]);
        this->embark(crew[i]);
    }
}

DragonCrew::~DragonCrew()
{
    //delete crew;
}

void DragonCrew::boost()
{
    stage->boost();
}

void DragonCrew::slow()
{
    stage->slow();
}

void DragonCrew::left()
{
    stage->left();
}

void DragonCrew::right()
{
    stage->right();
}

void DragonCrew::embark(string member)
{
    cout << "Crew member " << member << " entering Spacecraft" << endl;
}

void DragonCrew::disembark(string member)
{
    cout << "Crew member " << member << " exciting Spacecraft" << endl;
}

vector<string> DragonCrew::getPeople() {
    vector<string> empty;
    return empty;
}


Spacecraft* DragonCrew::clone() {
    int arrCargoSize = sizeof(cargo)/sizeof(cargo[0]);
    int arrCrewSize = sizeof(crew)/sizeof(crew[0]);
    return new DragonCrew(this->cargo, arrCargoSize, this->crew, arrCrewSize);
}

