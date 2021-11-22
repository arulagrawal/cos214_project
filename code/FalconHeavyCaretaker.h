#ifndef FALCONHEAVYCARETAKER_H
#define FALCONHEAVYCARETAKER_H

#include "FalconHeavyMemento.h"

using namespace std;
///FalconHeavyCaretake stores and retrieves mementos of a FalconHeavy Rocket for later use.
///@param mem is used to store the memento.
class FalconHeavyCaretaker
{
    private:
        FalconHeavyMemento* mem;
    public:
        void storeMemento(FalconHeavyMemento* mem);
        FalconHeavyMemento* retrieveMemento();
        ~FalconHeavyCaretaker();
};

#endif