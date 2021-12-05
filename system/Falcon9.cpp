#include "Falcon9.h"
///Falcon9 is one of the rocket types a spacecraft can have.
Falcon9::Falcon9(double weight, double fuelWeight, bool test) : Falcon(weight, test)
{
    core = new Core(fuelWeight);
    this->fuelWeight = fuelWeight;
    stage = new StageOne(this);
    //mode = mode;
}

bool Falcon9::staticFire()
{
    return stage->staticFire();
}

void Falcon9::on()
{
    stage->on();
}

void Falcon9::off()
{
    stage->off();
}
/// @brief LaunchSequence runs the launch of the rocket if all conditions are correct for the rocket to take off
bool Falcon9::launchSequence()
{
    if (this->test == true)
    {
        CoreCaretaker temp;
        Falcon9Caretaker temp2;
        temp.storeMemento(core->createMemento());
        temp2.storeMemento(this->createMemento());
        if (this->core->isOn())
        {
            int boostNum1 = 0;
            while (altitude < 350 && core->hasFuel())
            {
                altitude = boost(this->cargoWeight + core->getFuelWeight(), this->altitude);
                cout << "Current Altitude: " << altitude << " km" << endl;

                int changeWeight;
                if (boostNum1 % 2 == 0)
                {
                    cout << "Change fuel, cargo weight or altitude?" << endl;
                    cout << "Revert to before last change = 2, Yes = 1, No = 0" << endl;
                    cin >> changeWeight;      
                    if (changeWeight == 1)
                    {
                        temp.storeMemento(core->createMemento());
                        temp2.storeMemento(this->createMemento());
                        int setAlt;
                        int setFuel;
                        cout << "\nCurrent Altitude is " << this->altitude;
                        cout << "\nCurrent Fuel weight is " << core->getFuelWeight();
                        cout << "\nCurrent Cargo weight is " << this->cargoWeight;
                        cout << "\nInput new altitude: ";
                        cin >> setAlt;
                        this->setAltitude(setAlt);
                        cout << "\nInput weight for fuel: ";
                        cin >> setFuel;
                        this->setFuel(setFuel);
                        cout << "\nInput weight for cargo: ";
                        cin >> this->cargoWeight;
                    }
                    else if (changeWeight == 2)
                    {
                        cout << "Reverting to last change." << endl;
                        CoreMemento *mem = temp.retrieveMemento();
                        Falcon9Memento *mem2 = temp2.retrieveMemento();
                        core->reinstateMemento(mem);
                        this->reinstateMemento(mem2);

                        cout << "\nCurrent Altitude after revert is " << this->altitude;
                        cout << "\nCurrent Fuel weight after revert is " << core->getFuelWeight();
                        cout << "\nCurrent Cargo weight after revert  is " << this->cargoWeight << endl;
                    }
                }
                boostNum1++;
            }
            nextStage(); //NB! Rocket enters stage 2 once it reaches 350km or cores run out of fuel
            cout << "Entered stage 2." << endl;
            on();
            int boostNum2 = 0;
            while (altitude < 400 && engine->hasFuel())
            { //400km is the goal
                altitude = boost(this->cargoWeight, this->altitude);
                cout << "Current Altitude: " << altitude << " km" << endl;

                bool changeWeight = false;
                if (boostNum2 % 3 == 0)
                {
                    cout << "Change cargo weight?" << endl;
                    cout << "Yes = 1, No = 0" << endl;
                    cin >> changeWeight;
                    if (changeWeight)
                    {
                        cout << "\nCurrent Cargo weight is " << this->cargoWeight;
                        cout << "\nInput weight for cargo: ";
                        cin >> this->cargoWeight;
                    }
                }
                boostNum2++;
            }
            if (altitude < 400 && !engine->hasFuel())
            {
                cout << "Spacecraft could not reach destination." << endl;
                return false;
            }
            else
            {
                cout << "Destination reached." << endl;
                notify();
                detachSat();
                return true;
            }
        }
        else
        {
            cout << "Core or engine is not powered on." << endl;
            return false;
        }
    }
    else if (this->test == false)
    {
        if (this->core->isOn())
        {

            while (altitude < 350 && core->hasFuel())
            {
                altitude = boost(this->cargoWeight + core->getFuelWeight(), this->altitude);
                cout << "Current Altitude: " << altitude << " km" << endl;
            }
            nextStage(); //NB! Rocket enters stage 2 once it reaches 350km or cores run out of fuel
            cout << "Entered stage 2." << endl;
            on();

            while (altitude < 400 && engine->hasFuel())
            { //400km is the goal
                altitude = boost(this->cargoWeight, this->altitude);
                cout << "Current Altitude: " << altitude << " km" << endl;
            }
            if (altitude < 400 && !engine->hasFuel())
            {
                cout << "Spacecraft could not reach destination." << endl;
                return false;
            }
            else
            {
                cout << "Destination reached." << endl;
                notify();
                detachSat();
                return true;
            }
        }
        else
        {
            cout << "Core or engine is not powered on." << endl;
            return false;
        }
    }
    return false;
}

Core *Falcon9::getCore()
{
    return this->core;
}

double Falcon9::boost(double weight, double alt)
{
    return stage->boost(weight, alt);
}

MerlinVac *Falcon9::getEngine()
{
    return this->engine;
}

Falcon *Falcon9::clone()
{
    Falcon *f = new Falcon9(this->getCargoWeight(), this->fuelWeight, this->test);
    f->setAltitude(this->altitude);
    return f;
}

void Falcon9::setFuel(int f)
{
    this->core->setFuel(f);
}
///@brief AttachCluster attachs a collection of Satellites as a cluster to the Rocket.
void Falcon9::attachCluster(SatCluster *s)
{
    this->satCluster = s;
    spacecraft = NULL;
}
///@brief AttachSpacecraft attachs a spacecraft to the rocket so the spacecraft may take off.
void Falcon9::attachSpacecraft(Spacecraft *s)
{
    this->spacecraft = s;
    satCluster = NULL;
}
///@brief AttachCluster dettachs a collection of Satellites as a cluster from the Rocket.
void Falcon9::detachCluster()
{
    satCluster = NULL;
    cout << "Satellites have been detached." << endl;
}

int Falcon9::getFuelWeight()
{
    return this->core->getFuelWeight();
}
///@brief createMemento creates a memento of the current Rocket as to save its current state for possible later use.
Falcon9Memento *Falcon9::createMemento()
{
    return new Falcon9Memento(this->cargoWeight, this->altitude, this->fuelWeight);
}

void Falcon9::reinstateMemento(Falcon9Memento *mem)
{
    Falcon9State *s = mem->state;
    this->cargoWeight = s->getCargoWeight();
    this->altitude = s->getAltitude();
    this->fuelWeight = s->getFuelWeight();
}
