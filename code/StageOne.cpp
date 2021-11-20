//#include "Falcon9.h"
#include "StageOne.h"
#include "StageTwo.h"

StageOne::StageOne(Falcon* f) : Stage(f){

}

bool StageOne::staticFire(){
    return falcon->getCore()->staticFire();
}

void StageOne::on(){
    falcon->getCore()->on();
}

void StageOne::off(){
    falcon->getCore()->off();
}

double StageOne::boost(double weight, double alt){
    return falcon->getCore()->boost(weight, alt);
}

int StageOne::getStage(){
    return 1;
}

void StageOne::next(){
    Stage* stage = new StageTwo(falcon);
    falcon->setState(stage);
}