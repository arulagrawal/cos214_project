#ifndef SATCLUSTER_H
#define SATCLUSTER_H

#include "Satellite.h"
using namespace std;
///uses large amounts of Satellites to create SatCluster.
class SatCluster{
    public:
        SatCluster(string satName);
    private:
        Satellite* proto;
        Satellite* satellites[60]; 
};

#endif