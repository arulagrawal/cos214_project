#include "FalconHeavyCaretaker.h"

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