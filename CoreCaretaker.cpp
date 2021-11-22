#include "CoreCaretaker.h"

void CoreCaretaker::storeMemento(CoreMemento *mem)
{
    this->coreMemento = mem;
}

CoreMemento *CoreCaretaker::retrieveMemento()
{
    return this->coreMemento;
}

CoreCaretaker::~CoreCaretaker(){
    delete this->coreMemento;
}