#include "MerlinVac.h"

MerlinVac::MerlinVac(){
    fuelWeight = 7000;
}

bool MerlinVac::test(){
    int chance = 0 + (rand() % (100 - 0 + 1));
    if(chance < 5){
        return false;
    }else{
        return true;
    }
}

int MerlinVac::boost(int weight, int alt){
    if(isOn()){
        alt += 10 / (weight/2000);
        fuelWeight -= 0.15 * (weight/2);
        return alt;
    }else{
        cout << "Rockets not powered on, cannot boost." << endl;
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