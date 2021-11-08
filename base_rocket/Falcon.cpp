#include "Falcon.h"
#include "Stage.h"
#include "StageOne.h"
#include "StageTwo.h"

Falcon::Falcon(double weight, bool test){
    cargoWeight = weight;
    stage = new StageOne(this);
    altitude = 0;
    engine = new MerlinVac();
    test = test;
}

int Falcon::getAltitude(){
    return altitude;
}

void Falcon::nextStage(){
    stage->next();
}

MerlinVac* Falcon::getEngine(){
    return engine;
}

void Falcon::setState(Stage* s){
    stage = s;
}