
#ifndef BOOST_H
#define BOOST_H
#include "Command.h"

class Boost : public Command{
public:
    Boost(Spacecraft*);
    virtual void execute();
};


#endif