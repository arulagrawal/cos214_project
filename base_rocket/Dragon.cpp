#include "Dragon.h"

Dragon::Dragon(string cargo[], int cargoSize) : Spacecraft(cargo, cargoSize) 
{
    
}

void Dragon::boost()
{
    cout<<"Spacecraft accelerating"<<endl;
}

void Dragon::slow()
{
    cout<<"Spacecraft slowing down"<<endl;
}

void Dragon::left()
{
    cout<<"Spacecraft making left turn"<<endl;
}

void Dragon::right()
{
    cout<<"Spacecraft making right turn"<<endl;
}