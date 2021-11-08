#include "MerlinRocket.h"

MerlinRocket::MerlinRocket(){

}

bool MerlinRocket::test(){
    int chance = 0 + (rand() % (100 - 0 + 1));
    if(chance < 1){
        return false;
    }else{
        return true;
    }
}