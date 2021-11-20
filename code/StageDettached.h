#ifndef STAGEDETTACHED_H
#define STAGEDETTACHED_H

#include <string>
#include <iostream>
#include "Stage.h"

using namespace std;

class StageDettached : public Stage
{
public:
    StageDettached(Spacecraft *);
    void boost();
    void slow();
    void left();
    void right();
    void next();
    bool staticFire() { cout << "Not compatible with this stage." << endl; return 0;};          //removes NULL error returns 0 as it would mean no move
    void on() { cout << "Not compatible with this stage." << endl; };
    void off() { cout << "Not compatible with this stage." << endl; };
    double boost(double weight, double alt) { cout << "Not compatible with this stage." << endl; return 0;};            //removes NULL error returns 0 as it would mean no move

private:
};

#endif