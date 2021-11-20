#include "Dragon.h"

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