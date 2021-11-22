#include "StageAttached.h"
#include "StageDettached.h"

StageAttached::StageAttached(Spacecraft* s) : Stage(s){

}

void StageAttached::boost(){
    cout << "Cannot use spacecraft controls while attached to rocket." << endl;
}

void StageAttached::slow(){
    cout << "Cannot use spacecraft controls while attached to rocket." << endl;
}

void StageAttached::left(){
    cout << "Cannot use spacecraft controls while attached to rocket." << endl;
}

void StageAttached::right(){
    cout << "Cannot use spacecraft controls while attached to rocket." << endl;
}

void StageAttached::next(){
    Stage* stage = new StageDettached(spacecraft);
    spacecraft->setStage(stage);
}