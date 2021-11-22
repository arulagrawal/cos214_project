
#ifndef CREW_H
#define CREW_H


class Crew {
public:
    void slow();
    void left();
    void right();
    void detach();
    void notify();
    void attachOb();
    void boost();
    Crew();


private:
    Crew *observerList;
};


#endif //CREW_H
