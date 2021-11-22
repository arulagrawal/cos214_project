#ifndef COREADAPTERCARETAKER_H
#define COREADAPTERCARETAKER_H

#include "CoreAdapterMemento.h"

using namespace std;
/**
 * @brief Stores and retrieves a memento which stores the state of a core.
 * 
 */
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