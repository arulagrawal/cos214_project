#ifndef MERLIN_H
#define MERLIN_H

#include <string>
#include <iostream>

using namespace std;

class Merlin {
    public:
        Merlin();
        virtual bool test() = 0;
        virtual int boost(int, int);
        virtual bool hasFuel();
        void on();
        void off();
        bool isOn();
    private:
        bool power;
};

#endif