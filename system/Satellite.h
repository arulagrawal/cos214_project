//
// Created by Damian on 2021/11/19.
//

#ifndef SATELLITE_H
#define SATELLITE_H

#include <string>

using namespace std;
class Satellite {
public:
    Satellite(string name);
    //Satellite(Satellite*);
    ~Satellite();
    string getName();
    Satellite* clone();

private:
    string name;
};


#endif //PROJECT_SATELLITE_H
