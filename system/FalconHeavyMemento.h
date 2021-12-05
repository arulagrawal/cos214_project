#ifndef FALCONHEAVYMEMENTO_H
#define FALCONHEAVYMEMENTO_H

#include "FalconHeavyState.h"

using namespace std;
///The FalconHeavyMemento class is used to copy the current state of the FalconHeavy rocket so that it may be stored for later use.
///@param state is the FalconHeavyMemento that stores a state of the current FalconHeavy Rocket.
class FalconHeavyMemento
{
    private:
        friend class FalconHeavy;
        FalconHeavyMemento(double cargo, double alt, double fuel);
        FalconHeavyState* state;
        
    public:
        virtual ~FalconHeavyMemento();
};


#endif