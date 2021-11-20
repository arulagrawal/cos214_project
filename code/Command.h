//
// Created by Damian on 2021/11/19.
//

#ifndef COMMAND_H
#define COMMAND_H
#include "Spacecraft.h"

class Command {
public :
    Command();
    Command(Spacecraft* );
    virtual void execute() = 0;
    virtual void undo() = 0;
    Spacecraft* getCraft();
    void setCraft(Spacecraft* );

private:
    Spacecraft* reciever;
};


#endif
