#ifndef CORECARETAKER_H
#define CORECARETAKER_H

#include "CoreMemento.h"

using namespace std;

/**
 * @brief Stores and retrieves a memento storing the state of a Core.
 * 
 */
class CoreCaretaker
{
public:
    ~CoreCaretaker();
    void storeMemento(CoreMemento *mem);
    CoreMemento *retrieveMemento();

private:
    CoreMemento *coreMemento;
};

#endif