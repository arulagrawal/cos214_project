//
// Created by Damian on 2021/11/19.
//

#ifndef SLOW_H
#define SLOW_H
#include "Command.h"
///The slow class is used to decellerate the spacecraft.
class Slow : public Command{
public:
    Slow(Spacecraft*);
    virtual void execute();
};

#endif
