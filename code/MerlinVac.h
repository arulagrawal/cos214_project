#ifndef MERLINVAC_H
#define MERLINVAC_H

#include <string>
#include <iostream>
#include <cmath>

using namespace std;
/**
 * @brief Engine used in stage 2 for the final push towards destination.
 * 
 */
class MerlinVac {
    public:
        MerlinVac();
        /**
         * @brief Generates a random chance of failure.
         * 
         * @return true if test succeeds.
         * @return false if test fails.
         */
        bool test();
        /**
         * @brief Calculates how much the rocket is boosted depending on weight and fuelWeight, recommended not to directly use this method, but to be called by the launchSequence() and state class.
         * 
         * @param weight Current weight of the rocket as cargo weight + fuel weight, to be done automatically by whichever function calls on boost().
         * @param alt Current altitude of the rocket.
         * @return The new altitude after the boost as a double. 
         */
        double boost(double weight, double alt);
        bool hasFuel();
        void on();
        void off();
        bool isOn();
    private:
        int fuelWeight;
        bool power;
};

#endif