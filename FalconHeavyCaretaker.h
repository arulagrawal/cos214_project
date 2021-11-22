#ifndef FALCONHEAVYCARETAKER_H
#define FALCONHEAVYCARETAKER_H

#include "FalconHeavyMemento.h"

using namespace std;

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