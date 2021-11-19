#include "Falcon9.h"

Falcon9::Falcon9(double weight, double fuelWeight, bool test) : Falcon(weight, test){
    core = new Core(fuelWeight);
    stage = new StageOne(this);
    //mode = mode;
}

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
        }
    }
}

Core* Falcon9::getCore(){
    return this->core;
}

double Falcon9::boost(double weight, double alt){
    return stage->boost(weight, alt);
}

MerlinVac* Falcon9::getEngine(){
    return this->engine;
}
