
#ifndef CARGO_H
#define CARGO_H


class Cargo {
public:
    void slow();
    void left();
    void right();
    void detach();
    void notify();
    void attachOb();
    void boost();
    Cargo();


private:
    Cargo *observerList;
};


#endif //CARGO_H
