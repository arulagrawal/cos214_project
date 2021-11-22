#include "FalconHeavyCaretaker.h"
///storeMemento stores the memento.
///retrieveMemento fetches the memento object for use.
void FalconHeavyCaretaker::storeMemento(FalconHeavyMemento* mem)
{
    this->mem = mem;
}

FalconHeavyMemento* FalconHeavyCaretaker::retrieveMemento()
{
    return this->mem;
}

FalconHeavyCaretaker::~FalconHeavyCaretaker(){
    delete this->mem;
}