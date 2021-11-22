#ifndef SATCLUSTER_H
#define SATCLUSTER_H

#include "Satellite.h"
using namespace std;

class SatCluster{
    public:
        SatCluster(string satName);
    private:
        Satellite* proto;
        Satellite* satellites[60]; 
};

#endif