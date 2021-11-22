#ifndef FALCONSTATE_H
#define FALCONSTATE_H

using namespace std;

class FalconState
{
    private:
        double cargoWeight;
        double altitude;
    public:
        FalconState(double cargo, double height);
        double getCargoWeight();
        void setCargoWeight(double weight);
        double getAltitude();
        void setAltitude(double height);
};

#endif