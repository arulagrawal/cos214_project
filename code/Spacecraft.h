#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include <string>
#include <iostream>

using namespace std;

class Stage;
class Spacecraft
{
    friend class Dragon;
    friend class DragonCrew;
private:
    string *cargo; //cargo being carried non human items ie supplies
    /**
         * @brief Stage of the spacecraft seperate from the rocket.
         * 
         * Will have 2 stages, attached and dettached. The spacecraft may only be controlled once dettached from rocket to navigate and dock with the ISS.
         * 
         */
    Stage *stage;

public:
    /**
     * @brief Updates the state of the spacecraft.
     * Changes when the rocket sends a signal that the spacecraft is dettached.
     * 
     */
    void setStage(Stage*);
    Spacecraft(string cargo[], int cargoSize);
    ~Spacecraft();
    void loadCargo(string item);
    void unloadCargo(string item);
    void dettach();
    virtual void boost() = 0;
    virtual void slow() = 0;
    virtual void left() = 0;
    virtual void right() = 0;
};

#endif