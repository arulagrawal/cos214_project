#ifndef MERLINROCKET_H
#define MERLINROCKET_H
#include <string>
#include <iostream>

using namespace std;

class MerlinRocket {
    public:
        MerlinRocket();
        bool test();
        void on();
        void off();
        bool isOn();
    private:
        bool power;
};

#endif