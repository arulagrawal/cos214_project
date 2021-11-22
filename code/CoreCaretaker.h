#ifndef CORECARETAKER_H
#define CORECARETAKER_H

#include "CoreMemento.h"

using namespace std;

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