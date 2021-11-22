//
// Created by Damian on 2021/11/19.
//

#include "Button.h"

///This class will be used as an interface for some of the functions of the spacecraft derived classes
Button::Button(Command* c){
    command = c;
}
///Press will use the function that is associated with its derived command class.
void Button::Press(){
    command->execute();
}