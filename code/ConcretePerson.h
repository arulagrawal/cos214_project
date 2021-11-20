
#ifndef CONCRETEPERSON_H
#define CONCRETEPERSON_H

#include "Person.h"
#include "Stage.h"
#include "Dragon.h"

class ConcretePerson : public Person {
public:
    void update();
private:
    Stage *observerState;
    Dragon* subject;
};


#endif //CONCRETEPERSON_H
