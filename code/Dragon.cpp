#include "Dragon.h"
///The dragon spacecraft can move in all its normal directions and can clone itself.
Dragon::Dragon(string cargo[], int cargoSize) : Spacecraft(cargo, cargoSize)
{
}

void Dragon::boost()
{
    stage->boost();
}

void Dragon::slow()
{
    stage->slow();
}

void Dragon::left()
{
    stage->left();
}

void Dragon::right()
{
    stage->right();
}

Spacecraft *Dragon::clone()
{
    int arrCargoSize = sizeof(cargo) / sizeof(cargo[0]);
    return new Dragon(this->cargo, arrCargoSize);
}


vector<string> Dragon::getPeople() {
    vector<string> empty;
    return empty;
}