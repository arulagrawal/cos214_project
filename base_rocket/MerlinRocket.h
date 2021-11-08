#ifndef MERLINROCKET_H
#define MERLINROCKET_H
#include "Merlin.h"
#include <string>
#include <iostream>

using namespace std;

class MerlinRocket : public Merlin{
    public:
        MerlinRocket();
        bool test();
};

#endif