#include "Falcon9.h"

/*Falcon9::Falcon9(int weight, string mode) : Falcon(weight, mode){
    core = new Core();
}*/

bool Falcon9::staticFire(){
    return stage->staticFire();
}

void Falcon9::on(){
    stage->on();
}

void Falcon9::off(){
    stage->off();
}

void Falcon9::launchSequence(){
    if(mode == "test"){
        /*To be implemented by who ever is in charge of simulation/memento, 
        should run like simulation mode, but stop at intervals to let user 
        change settings and continue.*/
    }else if(mode == "sim"){
        while(altitude < 350 && core->hasFuel()){
            altitude = stage->boost(this->cargoWeight + core->getFuelWeight(), this->altitude);
        }
        nextStage();
        while(altitude < 400 && engine->hasFuel()){
            altitude = stage->boost(this->cargoWeight, this->altitude);
        }
        if(altitude < 400 && !engine->hasFuel()){
            cout << "Spacecraft could not reach destination." << endl;
        }else{
            cout << "Destination reached." << endl;
        }
    }
}

Core* Falcon9::getCore(){
    return this->core;
}

Merlin* Falcon9::getEngine(){
    return this->engine;
}
