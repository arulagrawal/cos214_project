#include "Merlin.h"

Merlin::Merlin(){
    power = false;
}

void Merlin::on(){
    power = true;
}

void Merlin::off(){
    power = false;
}

bool Merlin::isOn(){
    return power;
}