#ifndef F9CARE_H
#define F9CARE_H

#include "Falcon9Memento.h"

using namespace std;

class Falcon9Caretaker{
    public:
        void storeMemento(Falcon9Memento* mem);
        Falcon9Memento* retrieveMemento();
        ~Falcon9Caretaker();
    private:
        Falcon9Memento* mem;
};

#endif