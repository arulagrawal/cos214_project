//
// Created by Damian on 2021/11/19.
//

#include "Right.h"

Right::Right(Spacecraft *s)
{
    this->receiver = s;
}

///runs the right method in the spacecraft
void Right::execute() {
    getCraft()->right();
}