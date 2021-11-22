//
// Created by Damian on 2021/11/19.
//

#ifndef BUTTON_H
#define BUTTON_H
#include "Command.h"

class Button {
public:
    Button(Command* );
    void Press();

private:
    Command* command;
};


#endif
