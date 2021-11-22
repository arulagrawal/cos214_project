#include "Falcon9Memento.h"

Falcon9Memento::Falcon9Memento(double cargo, double alt, double fuel){
    this->state = new Falcon9State(cargo, alt, fuel);
}

Falcon9Memento::~Falcon9Memento(){
    delete this->state;
    this->state = 0;
}