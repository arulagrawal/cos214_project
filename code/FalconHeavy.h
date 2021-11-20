#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H

#include <string>
#include <iostream>
#include "Falcon.h"
#include "StageOne.h"
#include "StageTwo.h"
#include "CoreAdapter.h"

using namespace std;
/**
 * @brief FalconHeavy rocket containing 3 cores.
 * 
 */
class FalconHeavy : public Falcon
{
public:
    /**
     * @brief Construct a new Falcon Heavy object
     * 
     * @param weight Weight of the cargo onboard.
     * @param fuelWeight Weight of the fuel to add to the core.
     * @param test True means the rocket runs in test mode, false means the rocket runs in simulation mode.
    */
    FalconHeavy(double weight, double fuelWeight, bool test);
    bool staticFire();
    void on();
    void off();
    /**
     * @brief Responsible for launching the rocket and calling the methods required to simulate acceleration and fuel burn
     * 
     */
    void launchSequence();
    /**
     * @brief Calls on different boost methods depending on what stage the rocket is in.
     * 
     * @param weight Cargo weight + fuel weight.
     * @param alt Current altitude of the rocket.
     * @return New altitude. 
     */
    double boost(double weight, double alt);
    Core *getCore();
    /**
     * @brief Gets the Vacuum Engine, ie. the engine used in stage 2.
     * 
     * @return MerlinVac* 
     */
    MerlinVac *getEngine();
    Falcon* clone();
    void setFuel(int);

private:
    Core *core;
};

#endif