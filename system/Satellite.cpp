//
// Created by Damian on 2021/11/19.
//

#include "Satellite.h"

///This is the Satellite class which is responsible for mass producing the Satellite objects for the Rocket.
Satellite::Satellite(string name){
    this->name = name;
}




Satellite::~Satellite(){

}

string Satellite::getName(){
    return name;
}

///
///Clone is the function that creates multiple of the same Satellite object.
Satellite* Satellite::clone(){
return new Satellite(*this);
}
