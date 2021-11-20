#ifndef DETACH_H
#define DETACH_H

using namespace std;

class Detach {
public:
    virtual void detach() = 0;
private:
    Detach *successor;
};


#endif //DETACH_H
