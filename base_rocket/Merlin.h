#ifndef MERLIN_H
#define MERLIN_H

#include <string.h>
#include <iostream>

using namespace std;

class Merlin {
    public:
        Merlin();
        virtual bool test() = 0;
        void on();
        void off();
        bool isOn();
    private:
        bool power;
};

#endif