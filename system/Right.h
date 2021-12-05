//
// Created by Damian on 2021/11/19.
//

#ifndef RIGHT_H
#define RIGHT_H
#include "Command.h"

/**
 * @brief Inherits from Command and 
 * 
 */

class Right : public Command{
public:
    Right(Spacecraft*);
    virtual void execute();
};


#endif
