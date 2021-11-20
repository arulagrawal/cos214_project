//
// Created by Damian on 2021/11/19.
//

#include "Command.h"

///The abstract class that is used to create the commands of the spacecraft.
Command::Command(Spacecraft* r){
    reciever = r;
}

//Getter to use the spacecraft wherever needed
///getCraft will return the spacecraft that is currently being worked with
Spacecraft* Command::getCraft(){
    return reciever;
}

//when making a previous implementation i needed to include this constructor and destructor as an error popped
// up without it - function not initialised
void Command::execute() {

}

void Command::undo(){

}

//setter so that a command can set a spacecraft at anytime
///setCraft will set the command with a new spacecraft.
void Command::setCraft(Spacecraft* r){
    reciever = r;
}

Command::Command() {}