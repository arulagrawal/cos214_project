//
// Created by Damian on 2021/11/19.
//

#include "Satellite.h"

///This is the Satellite class which is responisble for mass producing the Satellite objects for the Rocket.
Satellite::Satellite(){

}


Satellite::~Satellite(){

}

///
///Clone is the function that creates multiple of the same Satellite object.
Satellite* Satellite::clone(){
return new Satellite(*this);
}
