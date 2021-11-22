#include "StageAttached.h"
#include "StageDettached.h"
///The spacecraft has dettached from the Rocket and now uses boost,slow,left, and right to get to the spacestation.
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
    cout << "Spacecraft moves 1 unit right." << endl;
}

void StageDettached::next(){
}