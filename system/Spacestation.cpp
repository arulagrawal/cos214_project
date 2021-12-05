//
// Created by Damian on 2021/11/21.
//

#include "Spacestation.h"

#include <iostream>

using namespace std;

///The Spacestation is a singleton with the purpose of holding all crew that arrive at the station.
///updateSpacestationData just adds new names to the register.
void Spacestation::updateSpacestationData(vector<string> people)
{
    if (this->curr < this->num)
    {
        for (int x = 0; x < people.size(); x++)
        {
            names[this->curr] = people[x];
            cout << people[x] << " has entered the space station." << endl;
            this->curr++;
        }
    }
    else
    {
        cout << "The spacestation is at full capacity. Goodluck free falling." << endl;
    }
}

Spacestation::Spacestation()
{
    names = new string[num];
    curr = 0;
}

void Spacestation::printSpacestation()
{
    cout << "There are " << curr << " people on the station.";
}

Spacestation::~Spacestation()
{
}
void Spacestation::setVisitor(Spacecraft *V)
{
    visitor = V;
}

void Spacestation::removeVisitor()
{
    delete visitor;
    visitor = NULL;
}

Spacestation *Spacestation::onlyStation = 0;

Spacestation *Spacestation::instance()
{
    if (onlyStation == 0)
    {
        onlyStation = new Spacestation();
    }
    return onlyStation;
}