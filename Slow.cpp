//
// Created by Damian on 2021/11/19.
//

#include "Slow.h"

Slow::Slow(Spacecraft *s)
{
    this->receiver = s;
}

///runs the slow method in the spacecraft
void Slow::execute() {
    getCraft()->slow();
}