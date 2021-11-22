#include "FalconHeavy.h"

FalconHeavy::FalconHeavy(double weight, double fuelWeight, bool test) : Falcon(weight, test)
{
    core = new CoreAdapter(fuelWeight);
    this->fuelWeight = fuelWeight;
    stage = new StageOne(this);
    //mode = mode;
}

bool FalconHeavy::staticFire()
{
    return stage->staticFire();
}

void FalconHeavy::on()
{
    stage->on();
}

void FalconHeavy::off()
{
    stage->off();
}

bool FalconHeavy::launchSequence()
{
    if (test == true)
    {
        CoreAdapterCaretaker temp;
        FalconHeavyCaretaker temp2;
        temp.storeMemento(core->createMemento());
        temp2.storeMemento(this->createMemento());
        if (this->core->isOn())
        {
            int boostNum = 0;
            while (altitude < 350 && core->hasFuel())
            {
                altitude = boost(this->cargoWeight + 15000 + core->getFuelWeight(), this->altitude);
                cout << "Current Altitude: " << altitude << " km" << endl;

                int changeWeight;
                if (boostNum % 2 == 0)
                {
                    cout << "Change fuel, cargo weight or altitude?" << endl;
                    cout << "Revert to before last change = 2, Yes = 1, No = 0" << endl;
                    cin >> changeWeight;
                    cout<< changeWeight<<endl;
                    if (changeWeight == 1)
                    {
                        temp.storeMemento(core->createMemento());
                        temp2.storeMemento(this->createMemento());
                        int setFuel;
                        int setAlt;
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
                        CoreMemento* mem = temp.retrieveMemento();
                        FalconHeavyMemento *mem2 = temp2.retrieveMemento();
                        core->reinstateMemento(mem);
                        this->reinstateMemento(mem2);

                        cout << "\nCurrent Altitude after revert is " << this->altitude;
                        cout << "\nCurrent Fuel weight after revert is " << core->getFuelWeight();
                        cout << "\nCurrent Cargo weight after revert  is " << this->cargoWeight << endl;
                    }
                }
                boostNum++;
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
                return true;
            }
        }
        else
        {
            cout << "Core or engine is not powered on." << endl;
        }
    }
    else if (test == false)
    {
        if (this->core->isOn())
        {
            while (altitude < 350 && core->hasFuel())
            {
                altitude = boost(this->cargoWeight + core->getFuelWeight(), this->altitude);
                cout << "Current Altitude: " << altitude << " km" << endl;
            }
            nextStage(); //NB! Rocket enters stage 2 once it reaches 350km or cores run out of fuel
            cargoWeight -= 15000;
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
                //detachSat();
                return true;
            }
        }
        else
        {
            cout << "Core or engine is not powered on." << endl;
        }
    }
    return false;
}

Core *FalconHeavy::getCore()
{
    return this->core;
}

double FalconHeavy::boost(double weight, double alt)
{
    return stage->boost(weight, alt);
}

MerlinVac *FalconHeavy::getEngine()
{
    return this->engine;
}

Falcon *FalconHeavy::clone()
{
    Falcon *f = new FalconHeavy(this->getCargoWeight(), this->getCore()->getFuelWeight(), this->test);
    return f;
}

void FalconHeavy::setFuel(int i)
{
    this->core->setFuel(i);
}

int FalconHeavy::getFuelWeight()
{
    return this->core->getFuelWeight();
}

FalconHeavyMemento *FalconHeavy::createMemento()
{
    return new FalconHeavyMemento(this->cargoWeight, this->altitude, this->fuelWeight);
}

void FalconHeavy::reinstateMemento(FalconHeavyMemento *mem)
{
    FalconHeavyState *s = mem->state;
    this->cargoWeight = s->getCargoWeight();
    this->altitude = s->getAltitude();
    this->fuelWeight = s->getFuelWeight();
}