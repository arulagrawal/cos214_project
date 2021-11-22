//
// Created by Damian on 2021/11/19.
//

#ifndef LEFT_H
#define LEFT_H
#include "Command.h"

class Left : public Command{
public:
    Left(Spacecraft*);
    virtual void execute();
};


#endif
