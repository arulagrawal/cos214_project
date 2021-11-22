#ifndef COREADAPTERCARETAKER_H
#define COREADAPTERCARETAKER_H

#include "CoreAdapterMemento.h"

using namespace std;

class CoreAdapterCaretaker
{
    public:
        ~CoreAdapterCaretaker();
        void storeMemento(CoreMemento *mem);
        CoreMemento *retrieveMemento();

    private:
        CoreMemento *coreAdapterMemento;
};

#endif