#include "Core.h"

Core::Core(int fuelWeight)
{
    this->fuelWeight = fuelWeight;
    for (int i = 0; i < 9; i++)
    {
        engines[i] = new MerlinRocket();
    }
}

bool Core::staticFire()
{
    for (int i = 0; i < 9; i++)
    {
        if (!engines[i]->test())
        {
            return false;
        }
    }
    return true;
}

void Core::on()
{
    for (int i = 0; i < 9; i++)
    {
        engines[i]->on();
    }
}

void Core::off()
{
    for (int i = 0; i < 9; i++)
    {
        engines[i]->off();
    }
}

double Core::getFuelWeight()
{
    return fuelWeight;
}

bool Core::hasFuel()
{
    if (fuelWeight > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Core::isOn()
{
    for (int i = 0; i < 9; i++)
    {
        if (!engines[i]->isOn())
        {
            return false;
        }
    }
    return true;
}

double Core::boost(double weight, double alt)
{
    if (isOn())
    {
        alt += 30 / (weight / 2000); //Random equations to generate altitude values to simulate acceleration depending on current weight.
        double tmp = pow(1.8, -1 * fuelWeight) + 0.2 * fuelWeight;
        //cout<<tmp<<endl;
        fuelWeight -= 0.25 * (weight / 2); //Calculates how much fuel to burn depending on current weight.
        //cout << "Fuel: " << fuelWeight << endl;
        return alt;
    }
    else
    {
        cout << "Rockets not powered on, cannot boost." << endl;
        return alt;
    }
}

Core *Core::clone()
{
    Core *c = new Core(this->fuelWeight);
    if (this->isOn())
    {
        c->on();
    }
    return c;
}

void Core::setFuel(int f)
{
    this->fuelWeight = f;
}

CoreMemento *Core::createMemento()
{
    return new CoreMemento(this->fuelWeight, this->isOn());
}

void Core::reinstateMemento(CoreMemento *mem)
{
    CoreState *s = mem->coreState;
    //cout<< "Reinstate Mem - Get Fuel Weight Core: " <<s->getFuelWeight()<<endl;
    this->fuelWeight = s->getFuelWeight();
    for (int i = 0; i < 9; i++)
    {
        engines[i] = s->getEngines()[i];
    }
}