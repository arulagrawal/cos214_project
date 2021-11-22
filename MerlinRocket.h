#ifndef MERLINROCKET_H
#define MERLINROCKET_H
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
/**
 * @brief Main rocket engines that are used in stage one and are attached to the core.
 * 
 */
class MerlinRocket {
    public:
        MerlinRocket();
        /**
         * @brief Generates a random chance of failure.
         * 
         * @return true if test succeeds.
         * @return false if test fails.
         */
        bool test();
        void on();
        void off();
        bool isOn();
    private:
        bool power;
};

#endif