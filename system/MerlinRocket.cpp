#include "MerlinRocket.h"

MerlinRocket::MerlinRocket(){
    power = false;
}

bool MerlinRocket::test(){
    int chance = 0 + (rand() % (100 - 0 + 1));//generates a random chance of failure during static test
    if(chance < 1){
        return false;
    }else{
        return true;
    }
}

void MerlinRocket::on(){
    if(power == false){
    power = true;
    }else{
        cout << "Engine already switched on." << endl;
    }
}

void MerlinRocket::off(){
    if(power == true){
    power = false;
    }else{
        cout << "Engine already switched off." << endl;
    }
}

bool MerlinRocket::isOn(){
    return power;
}