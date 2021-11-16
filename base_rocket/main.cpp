#include <iostream>
#include "Falcon9.h"
#include "FalconHeavy.h"

using namespace std;

int main()
{//This main file could be used as a guide or basis to the simulator classification
    Falcon9* test = new Falcon9(1000.00, 5000.00, false);//The simulated physics are still a bit iffy, I'll play around with the equations to make them a bit more realistic.

    /*cout << "\n\nTesting staticFire function and its chance of generating a failure. Each engine has a 1% chance of failing, 9 engines here means 9% chance of failure...\n" << endl;

    for(int i = 0; i < 100; i++){
        if(test->staticFire()){
            cout << "Engine test successful." <<endl;
        }else{
           cout << "Engine test failed." <<endl;
        }
    }*/

    //cout << "\n\nTesting off function when engines are already off...\n" << endl;
    //test->off();
    cout << "\n\nTesting on function...\n" << endl;
    test->on();
    //cout << "\n\nTesting on function when engines are already on...\n" << endl;
    //test->on();

    cout <<test->getCore()->getFuelWeight() << endl;


    test->launchSequence();

    cout << "--------------------TESTING FALCON HEAVY-------------------" << endl;

    FalconHeavy* test2 = new FalconHeavy(9000.00, 20000.00, false);//The simulated physics are still a bit iffy, I'll play around with the equations to make them a bit more realistic.

    /*cout << "\n\nTesting staticFire function and its chance of generating a failure. Each engine has a 1% chance of failing, 9 engines here means 9% chance of failure...\n" << endl;

    for(int i = 0; i < 100; i++){
        if(test2->staticFire()){
            cout << "Engine test successful." <<endl;
        }else{
           cout << "Engine test failed." <<endl;
        }
    }*/

    //cout << "\n\nTesting off function when engines are already off...\n" << endl;
    //test2->off();
    cout << "\n\nTesting on function...\n" << endl;
    test2->on();
    cout << "\n\nTesting on function when engines are already on...\n" << endl;
    test2->on();

    cout <<test2->getCore()->getFuelWeight() << endl;


    test2->launchSequence();
}