#ifndef COMMAND_H
#define COMMAND_H

#include "Spacecraft.h"
#include <iostream>
#include <string>

using namespace std;

class Command
{
    friend class Boost;
    friend class Slow;
    friend class Left;
    friend class Right;

public:
    Command();
    Command(Spacecraft *);
    virtual void execute() = 0;
    virtual void undo() = 0;

private:
    Spacecraft *receiver;
};

#endif