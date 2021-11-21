//
// Created by Damian on 2021/11/21.
//

#include "Spacestation.h"

#include <iostream>

using namespace std;

///The Spacestation is a singleton with the purpose of holding all crew that arrive at the station.
///updateSpacestationData just adds new names to the register.
void Spacestation::updateSpacestationData(string name[]) {
    if(curr < num){
        for(int x = 0; x < name->size(); x++){
            names[curr] = name[x];
            curr++;
        }
    }
    else{
        cout<<"The spacestation is at full capacity. Goodluck free falling."
    }
}

Spacestation::Spacestation() {
    names = new string[num];
    curr = 0;
}

void Spacestation::printSpacestation() {
    cout<<"There are "<<curr<<" people on the station.";
}

Spacestation::~Spacestation() {

}
void Spacestation::setVisitor(Spacecraft *V) {
Visitor = V;
}

void Spacestation::removeVisitor() {
    delete Visitor;
    Visitor = NULL;
}

Spacestation* Spacestation::onlyStation = 0;

Spacestation* Spacestation::instance() {
    if(onlyStation == 0){
        onlyStation = new Spacestation();
    }
    return onlyStation;
}

