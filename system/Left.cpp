//
// Created by Damian on 2021/11/19.
//

#include "Left.h"

Left::Left(Spacecraft *s)
{
    this->receiver = s;
}

///runs the left method in the spacecraft
void Left::execute() {
    getCraft()->left();
}