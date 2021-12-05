#include "MerlinVac.h"

MerlinVac::MerlinVac(){
    fuelWeight = 1000;
    power = false;
}

bool MerlinVac::test(){
    int chance = 0 + (rand() % (100 - 0 + 1));//generates random chance of failure when testing
    if(chance < 5){
        return false;
    }else{
        return true;
    }
}

double MerlinVac::boost(double weight, double alt){//made up equations to simulate acceleration and fuel burn based on weight
    if(isOn()){
        alt += 1 / (weight/2000);
        //double tmp = pow(1.8, -1 * fuelWeight) + 0.2 * fuelWeight;
        //fuelWeight -= 0.15 * (weight/2);
        fuelWeight -= 0.15 * (weight/2);
        //cout<<fuelWeight<<endl;
        return alt;
    }else{
        cout << "Merlin Vacuum not powered on, cannot boost." << endl;
        return alt;
    }
}

bool MerlinVac::hasFuel(){
    if(fuelWeight > 0){
        return true;
    }else{
        return false;
    }
}

void MerlinVac::on(){
    if(power == false){
        power = true;
    }else{
        cout << "Engine already switched on." << endl;
    }
}

void MerlinVac::off(){
    if(power == true){
    power = false;
    }else{
        cout << "Engine already switched off." << endl;
    }
}

bool MerlinVac::isOn(){
    return power;
}