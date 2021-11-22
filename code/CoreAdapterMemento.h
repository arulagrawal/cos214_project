#ifndef COREADAPTERMEMENTO_H
#define COREADAPTERMEMENTO_H

#include "CoreAdapterState.h"
#include "CoreMemento.h"
//#include "Core.h"
/**
 * @brief Stores and retrieves an memento storing the state of a CoreAdapter.
 * 
 */
class CoreAdapterState;
using namespace std;

class CoreAdapterMemento : public CoreMemento
{
public:
    virtual ~CoreAdapterMemento();

private:
    friend class CoreAdapter;
    CoreAdapterMemento(int fuelWeight, Core *[3], bool isOn);
    CoreAdapterState *coreAdapterState;
};

#endif