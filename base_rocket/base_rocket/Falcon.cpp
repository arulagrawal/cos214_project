#include "Falcon.h"
#include "Stage.h"
#include "StageOne.h"
#include "StageTwo.h"

Falcon::Falcon(int weight, string mode){
    cargoWeight = weight;
    stage = new StageOne(this);
    altitude = 0;
    engine = new MerlinVac();
    mode = mode;
}

int Falcon::getAltitude(){
    return altitude;
}

void Falcon::nextStage(){
    stage->next();
}

Merlin* Falcon::getVac(){
    return engine;
}

void Falcon::setState(Stage* s){
    stage = s;
}