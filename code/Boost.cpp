//
// Created by Damian on 2021/11/19.
//

#include "Boost.h"

Boost::Boost(Spacecraft *s)
{
    this->receiver = s;
}

///runs the boost method in the spacecraft
void Boost::execute()
{
    getCraft()->boost();
}