
#ifndef BOOST_H
#define BOOST_H
#include "Command.h"
/**
 * @brief Issues the boost command to the spacecraft.
 * 
 */
class Boost : public Command{
public:
    Boost(Spacecraft*);
    virtual void execute();
};


#endif