#include "StageAttached.h"
#include "StageDettached.h"

StageDettached::StageDettached(Spacecraft* s) : Stage(s){

}

void StageDettached::boost(){
    cout << "Spacecraft moves 1 unit up." << endl;
}

void StageDettached::slow(){
    cout << "Spacecraft moves 1 unit down." << endl;
}

void StageDettached::left(){
    cout << "Spacecraft moves 1 unit left." << endl;
}

void StageDettached::right(){
    cout << "Spacecraft moves 1 unit left." << endl;
}

void StageDettached::next(){
}