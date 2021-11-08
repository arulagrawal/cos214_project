#include "StageTwo.h"

StageTwo::StageTwo(Falcon* f) : Stage(f){

}

bool StageTwo::staticFire(){
    return falcon->getVac()->test();
}

void StageTwo::on(){
    falcon->getVac()->on();
}

void StageTwo::off(){
    falcon->getVac()->off();
}

int StageTwo::boost(int weight, int alt){
    return falcon->getVac()->boost(weight, alt);
}

int StageTwo::getStage(){
    return 2;
}

void StageTwo::next(){
    cout << "Final stage reached already." << endl;
}