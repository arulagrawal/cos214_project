#include "StageTwo.h"
///runs all the functions of stage according to stageTwo parameters and requirements.
StageTwo::StageTwo(Falcon* f) : Stage(f){

}

bool StageTwo::staticFire(){
    return falcon->getEngine()->test();
}

void StageTwo::on(){
    falcon->getEngine()->on();
}

void StageTwo::off(){
    falcon->getEngine()->off();
}

double StageTwo::boost(double weight, double alt){
    //cout<<"HERE"<<endl;
    return falcon->getEngine()->boost(weight, alt);
}

int StageTwo::getStage(){
    return 2;
}

void StageTwo::next(){
    cout << "Final stage reached already." << endl;
}