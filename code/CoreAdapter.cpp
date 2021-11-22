#include "CoreAdapter.h"

CoreAdapter::CoreAdapter(int fuelWeight) : Core(fuelWeight)
{
    this->fuelWeight = fuelWeight;
    for (int i = 0; i < 3; i++)
    {
        cores[i] = new Core(fuelWeight / 3);
    }
}

bool CoreAdapter::staticFire()
{
    for (int i = 0; i < 3; i++)
    {
        if (!cores[i]->staticFire())
        {
            return false;
        }
    }
    return true;
}

void CoreAdapter::on()
{
    for (int i = 0; i < 3; i++)
    {
        cores[i]->on();
    }
}

void CoreAdapter::off()
{
    for (int i = 0; i < 3; i++)
    {
        cores[i]->off();
    }
}

double CoreAdapter::getFuelWeight()
{
    return (cores[0]->getFuelWeight() + cores[1]->getFuelWeight() + cores[2]->getFuelWeight());
}

bool CoreAdapter::hasFuel()
{
    if (getFuelWeight() > 0)
    {
        //cout << "getFuelWeight returns: "<<getFuelWeight()<<endl;
        return true;
    }
    else
    {
        return false;
    }
}

bool CoreAdapter::isOn()
{
    for (int i = 0; i < 3; i++)
    {
        if (!cores[i]->isOn())
        {
            return false;
        }
    }
    return true;
}

double CoreAdapter::boost(double weight, double alt)
{
    if (isOn())
    {
        double tmp = alt;
        alt = (cores[0]->boost(weight / 3, alt) + cores[1]->boost(weight / 3, alt) + cores[2]->boost(weight / 3, alt)) - tmp;
        //alt += 30 / (weight / 2000); //Random equations to generate altitude values to simulate acceleration depending on current weight.
        //double tmp = pow(1.8, -1 * fuelWeight) + 0.2 * fuelWeight;
        //fuelWeight -= 3 * (0.25 * (weight / 2)); //Calculates how much fuel to burn depending on current weight.
        fuelWeight = getFuelWeight();
        //cout << "New fuel: " << fuelWeight << endl;
        //cout << "Has fuel?: " << hasFuel() << endl;
        return alt;
    }
    else
    {
        cout << "Rockets not powered on, cannot boost.1" << endl;
        return alt;
    }
}

Core *CoreAdapter::clone()
{
    Core *c = new CoreAdapter(this->fuelWeight);
    if (isOn())
    {
        c->on();
    }
    return c;
}

void CoreAdapter::setFuel(int fuelWeight)
{
    for (int i = 0; i < 3; i++)
    {
        cores[i]->setFuel(fuelWeight / 3);
    }
}

CoreMemento *CoreAdapter::createMemento()
{
    Core *copy[3];
    for (int i = 0; i < 3; i++)
    {
        copy[i] = cores[i]->clone();
    }
    //cout << "FUEL WEIGHT IN COREADAPTER: " << this->fuelWeight << endl;
    return new CoreAdapterMemento(this->fuelWeight, copy, isOn());
}

void CoreAdapter::reinstateMemento(CoreAdapterMemento *mem)
{
    CoreAdapterState *s = mem->coreAdapterState;
    //cout<< "Reinstate Mem - Get Fuel Weight: " <<s->getFuelWeight()<<endl;
    this->fuelWeight = s->getFuelWeight();
    for (int i = 0; i < 3; i++)
    {
        cores[i] = s->getCores()[i];
    }
}