#include <iostream>
#include "code/Spacecraft.h"
#include "Dragon.h"
#include "DragonCrew.h"

using namespace std;

int main()
{
    //First cargo test
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

    Dragon *cargoCraft = new Dragon(cargo, cargoSize);


    //test movemement of craft
    cout<<"\n\nSlow the craft down"<<endl;
    cargoCraft->slow();

    cout<<"\n\nBoost the craft"<<endl;
    cargoCraft->boost();

    cout<<"\n\nTurn craft left"<<endl;
    cargoCraft->left();

    cout<<"\n\nTurn craft right"<<endl;
    cargoCraft->right();


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



    delete crewCraft;
    delete crewCargo;
    

    return 0;
}