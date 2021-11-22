#ifndef FALCONHEAVYMEMENTO_H
#define FALCONHEAVYMEMENTO_H

#include "FalconHeavyState.h"

using namespace std;

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