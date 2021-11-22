#include "CoreAdapterCaretaker.h"

CoreAdapterCaretaker::~CoreAdapterCaretaker()
{
    delete coreAdapterMemento;
}

void CoreAdapterCaretaker::storeMemento(CoreMemento *mem)
{
    this->coreAdapterMemento = mem;
}


CoreMemento* CoreAdapterCaretaker::retrieveMemento()
{
    return this->coreAdapterMemento;
}