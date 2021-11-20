#include "RocketState.h"

RocketState::RocketState(Spacecraft* s, Falcon* f, Core* c){
    this->s = s->clone();
    this->f = f->clone();
    this->c = c->clone();
}

Spacecraft* RocketState::getSpacecraft(){
    return this->s;
}

Falcon* RocketState::getFalcon(){
    return this->f;
}

Core* RocketState::getCore(){
    return this->c;
}