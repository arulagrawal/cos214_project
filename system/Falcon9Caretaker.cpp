#include "Falcon9Caretaker.h"
///Falcon9Caretaker stores and retrieves Mementos of Falcon9 Rockets
void Falcon9Caretaker::storeMemento(Falcon9Memento *mem)
{
    this->mem = mem;
}

Falcon9Memento *Falcon9Caretaker::retrieveMemento()
{
    return this->mem;
}

Falcon9Caretaker::~Falcon9Caretaker(){
    delete this->mem;
}