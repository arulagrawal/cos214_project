#ifndef FALCON_H
#define FALCON_H

#include <string.h>
#include <iostream>

#include "Core.h"
//#include "Merlin.h"
#include "MerlinVac.h"
#include "Spacecraft.h"
#include "Satellite.h"
//#include "MerlinRocket.h"
//#include "Stage.h"
//#include "Dragon.h" ------- to be implemented

using namespace std;

class Stage;
class MerlinVac;
///Base class for all Falcon rockets.
///
///Falcon9 and FalconHeavy derive from this class.

class Falcon
        {
    friend class Falcon9;
    friend class FalconHeavy;

        public:
            ///Constructor.
            /**
             * @param weight Weight of the cargo onboard, not including fuel.
             * @param test True means the rocket runs in test mode, false means the rocket runs in simulation mode.*/
            Falcon(double weight, bool test);
            virtual bool staticFire() = 0;
            virtual void on() = 0;
            virtual void off() = 0;
            /**Responsible for launching the rocket and calling the methods required to
             * simulate acceleration and fuel burn*/
            virtual void launchSequence() = 0;
            virtual Core *getCore() = 0;
            /**
             * Implemented in core and MerlinVac, state handles which boost to call.
             */
            virtual int boost() { return 0; };
            void setCargoWeight(int weight);
            int getAltitude();
            void nextStage();
            void setState(Stage *);
            Stage* getStage();
            /**
             * @brief Gets the Vacuum Engine, ie. the engine used in stage 2.
             *
             * @return MerlinVac*
             */
            MerlinVac *getEngine();
            /**
             * @brief Notifies the observer(spacecraft) on stage changes.
             *
             */
            void notify();
            /**
             * @brief Attaches a spacecraft to the rocket.
             *
             */
            void attachSpacecraft(Spacecraft *);
            virtual Falcon* clone() = 0;
            virtual void setFuel(int) = 0;
            void setSatellite();

        protected:
            double getCargoWeight();
            void setAltitude(double);

        private:
            double cargoWeight;
            double altitude;
            /*The vacuum engine that is used in stage 2 of the launch.*/
            MerlinVac *engine;
            Stage *stage;
            bool test;
            /*Dragon spacecraft to be plugged in here once inplemented*/
            Spacecraft* spacecraft;
            Satellite** links;
        };

#endif