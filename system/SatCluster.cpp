#include "SatCluster.h"
///Creates a SatCluster
SatCluster::SatCluster(string satName){
    proto = new Satellite(satName);
    for(int i = 0; i < 60; i++){
        satellites[i] = proto->clone();
    }
}