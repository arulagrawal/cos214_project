#ifndef FALCON9_H
#define FALCON9_H

#include <string>
#include <iostream>
#include "Falcon.h"
#include "StageOne.h"
#include "StageTwo.h"
#include "SatCluster.h"
#include "CoreCaretaker.h"
#include "Falcon9State.h"
#include "Falcon9Caretaker.h"

using namespace std;

/**
 * @brief Falcon9 rocket containing one core only.
 * 
 */
class Falcon9 : public Falcon
{
public:
    /**
     * @brief Construct a new Falcon 9 object
     * 
     * @param weight Weight of the cargo onboard.
     * @param fuelWeight Weight of fuel to add to core.
     * @param test True means the rocket runs in test mode, false means the rocket runs in simulation mode.
     */
    Falcon9(double weight, double fuelWeight, bool test);
    bool staticFire();
    void on();
    void off();
    /**
     * @brief Responsible for launching the rocket and calling the methods required to simulate acceleration and fuel burn
     * 
     */
    bool launchSequence();
    /**
     * @brief Calls on different boost methods depending on what stage the rocket is in.
     * 
     * @param weight Cargo weight + fuel weight.
     * @param alt Current altitude of the rocket.
     * @return New altitude. 
     */
    double boost(double weight, double alt);
    Core *getCore();
    MerlinVac *getEngine();
    Falcon* clone();
    void setFuel(int);
    /**
     * @brief Attaches a satellite cluster.
     * A falcon 9 may only carry either a spacecraft or a satellite cluster, never both at once. If a cluster is added while a spacecraft is attached, spacecraft 
     * will be automatically detached and vice versa.
     * 
     */
    void attachCluster(SatCluster*);
    void attachSpacecraft(Spacecraft *s);
    void detachCluster();
    int getFuelWeight();
    Falcon9Memento* createMemento();
    void reinstateMemento(Falcon9Memento* mem);


private:
    Core *core; //This is falcon 9 so only one core
    double fuelWeight; //Only for cloning purposes, not used in any other function in this class.
    SatCluster* satCluster;
};

#endif
