#include "FalconHeavy.h"

FalconHeavy::FalconHeavy(double weight, double fuelWeight, bool test) : Falcon(weight + 15000, test){
    core = new CoreAdapter(fuelWeight);
    stage = new StageOne(this);
    //mode = mode;
}

bool FalconHeavy::staticFire(){
    return stage->staticFire();
}

void FalconHeavy::on(){
    stage->on();
}

void FalconHeavy::off(){
    stage->off();
}

void FalconHeavy::launchSequence(){
    if(test == true){
        /*To be implemented by who ever is in charge of simulation/memento, 
        should run like simulation mode, but stop at intervals to let user 
        change settings and continue.*/
    }else if(test == false){
        while(altitude < 350 && core->hasFuel()){
            altitude = boost(this->cargoWeight + core->getFuelWeight(), this->altitude);
            cout<<"Current Altitude: "<<altitude<<" km"<<endl;
        }
        nextStage();//NB! Rocket enters stage 2 once it reaches 350km or cores run out of fuel
        cargoWeight -= 15000;
        cout << "Entered stage 2." << endl;
        on();
        while(altitude < 400 && engine->hasFuel()){//400km is the goal
            altitude = boost(this->cargoWeight, this->altitude);
            cout<<"Current Altitude: "<<altitude<<" km"<<endl;
        }
        if(altitude < 400 && !engine->hasFuel()){
            cout << "Spacecraft could not reach destination." << endl;
        }else{
            cout << "Destination reached." << endl;
            notify();
        }
    }
}

Core* FalconHeavy::getCore(){
    return this->core;
}

double FalconHeavy::boost(double weight, double alt){
    return stage->boost(weight, alt);
}

MerlinVac* FalconHeavy::getEngine(){
    return this->engine;
}
