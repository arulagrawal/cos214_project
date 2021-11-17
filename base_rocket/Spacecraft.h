#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include <string>
#include <iostream>

using namespace std;

class Spacecraft
{
    private: 
        string *cargo;           //cargo being carried non human items ie supplies 
    public:
        Spacecraft(string cargo[], int cargoSize);
        ~Spacecraft();
        void loadCargo(string item);
        void unloadCargo(string item);
        virtual void boost() = 0;
        virtual void slow() = 0;
        virtual void left() = 0;
        virtual void right() = 0;
};


#endif
