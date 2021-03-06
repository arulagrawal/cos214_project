//
// Created by Damian on 2021/11/21.
//

#ifndef PROJECT_SPACESTATION_H
#define PROJECT_SPACESTATION_H
#include "Spacecraft.h"
#include <stdio.h>
#include <string>

class Spacecraft;
using namespace std;
///The spacestation is the final destination of the spacecraft
class Spacestation {
public:
    static Spacestation* instance();
    void updateSpacestationData(vector<string> people);
    void printSpacestation();
    void setVisitor(Spacecraft* V);
    void removeVisitor();

protected:
    Spacestation();
    ~Spacestation();

private:
    static Spacestation* onlyStation;
    string* names;
    int num = 400;
    int curr = 0;
    Spacecraft* visitor;
};


#endif //PROJECT_SPACESTATION_H