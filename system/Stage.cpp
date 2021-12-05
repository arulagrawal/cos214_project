#include "Stage.h"
///links the appropriate falcon rocket and spacecraft to be run through the respective stages.
Stage::Stage(Falcon* f){
    falcon = f;
}

Stage::Stage(Spacecraft* s){
    spacecraft = s;
}