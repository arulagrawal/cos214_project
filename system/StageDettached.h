#ifndef STAGEDETTACHED_H
#define STAGEDETTACHED_H

#include <string>
#include <iostream>
#include "Stage.h"

using namespace std;
///The rocket dettaches from the spacecraft for this stage
class StageDettached : public Stage
{
public:
    StageDettached(Spacecraft *);
    void boost();
    void slow();
    void left();
    void right();
    void next();
    bool staticFire()
    {
        cout << "Not compatible with this stage." << endl;
        return false;
    };
    void on() { cout << "Not compatible with this stage." << endl; };
    void off() { cout << "Not compatible with this stage." << endl; };
    double boost(double weight, double alt)
    {
        cout << "Not compatible with this stage." << endl;
        return 0;
    };

private:
};

#endif