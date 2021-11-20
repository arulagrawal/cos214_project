#include <iostream>
#include "Falcon9.h"
#include "FalconHeavy.h"
#include "Spacecraft.h"
#include "Dragon.h"
#include "DragonCrew.h"

using namespace std;

int main()
{//This main file could be used as a guide or basis to the simulator classification

<<<<<<< HEAD
        //First cargo test
=======
    //First cargo test
>>>>>>> 6507dd9fe18afc3eede8439edbfe351fbe4521f0
    cout<<"\n\n Cargo test - no crew";
    int cargoSize = 0;
    //get amount of cargo to be added to spacecraft
    
    cout<<"\n How much cargo will be added: ";
    
    cin>>cargoSize;

    while(cargoSize < 0)
    {

        cout<<"\nEnter a valid positive number: ";
        cin>>cargoSize;
    }

    string *cargo = new string[cargoSize];

    //get cargo item names/descriptions
    
    for(int i = 0; i < cargoSize; i++)
    {
        
        cout<<"\n\n Enter the name/description of cargo item-"<<i<<": ";
        cin>>cargo[i];
        
    }

    //create spacecraft

<<<<<<< HEAD
    Dragon *cargoCraft = new Dragon(cargo, cargoSize);
=======
    Spacecraft *cargoCraft = new Dragon(cargo, cargoSize);
>>>>>>> 6507dd9fe18afc3eede8439edbfe351fbe4521f0
    cargoCraft->setStage(new StageDettached(cargoCraft));

    Falcon9* test = new Falcon9(1000.00, 5000.00, false);//The simulated physics are still a bit iffy, I'll play around with the equations to make them a bit more realistic.

    test->attachSpacecraft(cargoCraft);

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





















    //---------------------------------------------------------Spacecraft test---------------------------------------------------------------
    //First cargo test
    /*cout<<"\n\n Cargo test - no crew";
    int cargoSize = 0;
    //get amount of cargo to be added to spacecraft
    
    cout<<"\n How much cargo will be added: ";
    
    cin>>cargoSize;

    while(cargoSize < 0)
    {

        cout<<"\nEnter a valid positive number: ";
        cin>>cargoSize;
    }

    string *cargo = new string[cargoSize];

    //get cargo item names/descriptions
    
    for(int i = 0; i < cargoSize; i++)
    {
        
        cout<<"\n\n Enter the name/description of cargo item-"<<i<<": ";
        cin>>cargo[i];
        
    }

    //create spacecraft

<<<<<<< HEAD
    Dragon *cargoCraft = new Dragon(cargo, cargoSize);
    cargoCraft->setStage(new StageDettached(cargoCraft));


    //test movemement of craft
    cout<<"\n\nSlow the craft down"<<endl;
    cargoCraft->slow();

    cout<<"\n\nBoost the craft"<<endl;
    cargoCraft->boost();

    cout<<"\n\nTurn craft left"<<endl;
    cargoCraft->left();

    cout<<"\n\nTurn craft right"<<endl;
    cargoCraft->right();
=======
    SpaceCraft *cargoCraft = new Dragon(cargo, cargoSize);
    cargoCraft->setStage(new StageDettached(cargoCraft));

    //create Command Buttons

    Command* b1 = new Boost();
    b1->setCraft(cargoCraft);
    Button* bMove = new Button(b1);

    Command* s1 = new Slow();
    s1->setCraft(cargoCraft);
    Button* sMove = new Button(s1);

    Command* r1 = new Right();
    r1->setCraft(cargoCraft);
    Button* rMove = new Button(r1);

    Command* l1 = new Left();
    l1->setCraft(cargoCraft);
    Button* lMove = new Button(l1);
    //create Command Buttons

    Command* b1 = new Boost();
    b1->setCraft(cargoCraft);
    Button* bMove = new Button(b1);

    Command* s1 = new Slow();
    s1->setCraft(cargoCraft);
    Button* sMove = new Button(s1);

    Command* r1 = new Right();
    r1->setCraft(cargoCraft);
    Button* rMove = new Button(r1);

    Command* l1 = new Left();
    l1->setCraft(cargoCraft);
    Button* lMove = new Button(l1);

    //test movemement of craft


    cout<<"\n\nSlow the craft down"<<endl;
    sMove->Press();

    cout<<"\n\nBoost the craft"<<endl;
    bMove->Press();

    cout<<"\n\nTurn craft left"<<endl;
    lMove->Press();

    cout<<"\n\nTurn craft right"<<endl;
    rMove->Press();
>>>>>>> 6507dd9fe18afc3eede8439edbfe351fbe4521f0


    //unload craft

    for (int j = 0; j < cargoSize; j++)
    {
       cargoCraft->unloadCargo(cargo[j]);
    }


    //delete cargoCraft;
    //delete cargo;
    

    //second crew test


    cout<<"\n\n Crew test - has crew members AND cargo";
    int crewCargoSize = 0;
    //get amount of cargo to be added to spacecraft
    
    cout<<"\n How much cargo will be added: ";
    cin>>crewCargoSize;

    while(crewCargoSize < 0)
    {

        cout<<"\nEnter a valid positive number: ";
        cin>>crewCargoSize;
    }

    string *crewCargo = new string[crewCargoSize];

    //get cargo item names/descriptions

    for(int i = 0; i < crewCargoSize; i++)
    {
        
        cout<<"\n\n Enter the name/description of cargo item-"<<i<<": ";
       cin>> crewCargo[i];
    }

    //get number of crew members
    int crewSize;

    cout<<"\n How many crew members will be added: ";
    cin>>crewSize;

    while(crewSize < 0)
    {
 
        cout<<"\nEnter a valid positive number: ";
        cin>>crewSize;
    }

    string *crew = new string[crewSize];

    //get crew names/descriptions

    for(int i = 0; i < crewSize; i++)
    {
        
        cout<<"\n\n Enter the name/description of crew member-"<<i<<": ";
        cin>> crew[i];
    }




    //create spacecraft

<<<<<<< HEAD
    DragonCrew *crewCraft = new DragonCrew(cargo, cargoSize, crew, crewSize);


    //test movemement of craft
    cout<<"\n\nSlow the craft down"<<endl;
    crewCraft->slow();

    cout<<"\n\nBoost the craft"<<endl;
    crewCraft->boost();

    cout<<"\n\nTurn craft left"<<endl;
    crewCraft->left();

    cout<<"\n\nTurn craft right"<<endl;
    crewCraft->right();
=======
    SpaceCraft *crewCraft = new DragonCrew(cargo, cargoSize, crew, crewSize);

    //create Command Buttons

    Command* b2 = new Boost();
    b2->setCraft(crewCraft);
    Button* bMove2 = new Button(b2);

    Command* s2 = new Slow();
    s2->setCraft(crewCraft);
    Button* sMove2 = new Button(s2);

    Command* r2 = new Right();
    r2->setCraft(crewCraft);
    Button* rMove2 = new Button(r2);

    Command* l2 = new Left();
    l2->setCraft(crewCraft);
    Button* lMove2 = new Button(l2);

    //test movemement of craft
    cout<<"\n\nSlow the craft down"<<endl;
    sMove2->Press();

    cout<<"\n\nBoost the craft"<<endl;
    bMove2->Press();

    cout<<"\n\nTurn craft left"<<endl;
    lMove2->Press();

    cout<<"\n\nTurn craft right"<<endl;
    rMove2->Press();
>>>>>>> 6507dd9fe18afc3eede8439edbfe351fbe4521f0


    //unload craft

    for (int j = 0; j < cargoSize; j++)
    {
       crewCraft->unloadCargo(crewCargo[j]);
    }

    //disembark crew


    for (int c = 0; c < crewSize; c++)
    {
       crewCraft->disembark(crew[c]);
    }



    //delete crewCraft;
    //delete crewCargo;*/
}