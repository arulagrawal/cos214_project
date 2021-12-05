#ifndef FALCONSTATE_H
#define FALCONSTATE_H

using namespace std;
///FalconState creates the state of the current Falcon Rocket
///@param cargoWeight is the weight of the current rockets cargo
///@param altitude is the 
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