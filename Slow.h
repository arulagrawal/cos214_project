//
// Created by Damian on 2021/11/19.
//

#ifndef SLOW_H
#define SLOW_H
#include "Command.h"

class Slow : public Command{
public:
    Slow(Spacecraft*);
    virtual void execute();
};

#endif
