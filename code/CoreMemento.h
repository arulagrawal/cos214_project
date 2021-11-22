#ifndef COREMEMENTO_H
#define COREMEMENTO_H

#include "CoreState.h"

using namespace std;

class CoreState;

class CoreMemento
{
public:
    virtual ~CoreMemento();

protected:
    CoreMemento(int fuelWeight, bool isOn);

private:
    friend class Core;
    CoreState *coreState;
};

#endif