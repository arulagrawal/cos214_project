#ifndef F9CARE_H
#define F9CARE_H

#include "Falcon9Memento.h"

using namespace std;
///The Falcon9Caretaker class is responsible for storing the memento of Falcon9 rockets and retrieving them for use when nessary
///@param mem stores the Memento
class Falcon9Caretaker{
    public:
        void storeMemento(Falcon9Memento* mem);
        Falcon9Memento* retrieveMemento();
        ~Falcon9Caretaker();
    private:
        Falcon9Memento* mem;
};

#endif