#include "Core.h"

Core::Core(double fuelWeight){
    this->fuelWeight = fuelWeight;
    for(int i = 0; i < 9; i++){
        engines[i] = new MerlinRocket();
    }
}

bool Core::staticFire(){
    for(int i = 0; i < 9; i++){
        if(!engines[i]->test()){ 
            return false;
        }
    }
    return true;
}

void Core::on(){
    for(int i = 0; i < 9; i++){
        engines[i]->on();
    }
}

void Core::off(){
    for(int i = 0; i < 9; i++){
        engines[i]->off();
    }
}

double Core::getFuelWeight(){
    return fuelWeight;
}

bool Core::hasFuel(){
    if(fuelWeight > 0){
        return true;
    }else{
        return false;
    }
}

bool Core::isOn(){
    for(int i = 0; i < 9; i++){
        if(!engines[i]->isOn()){
            return false;
        }
    }
    return true;
}

double Core::boost(double weight, double alt){
    if(isOn()){
        alt += 30 / (weight/2000);//Random equations to generate altitude values to simulate acceleration depending on current weight.
        fuelWeight -= 0.25 * (weight/2);//Calculates how much fuel to burn depending on current weight.
        return alt;
    }else{
        cout << "Rockets not powered on, cannot boost." << endl;
        return alt;
    }
}