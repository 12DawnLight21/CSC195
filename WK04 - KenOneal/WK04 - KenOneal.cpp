// WK04 - KenOneal.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "myInput.h"
#include "Database.h"
#include "Animal.h"
using namespace std;

int main()
{
    myInput input; //in the stack memory
    std::unique_ptr<Animal> animal; //behind scenes management
    Database db; // makes it easier
    std::cout << "WK04 - Ken ONeal :: Hello World!\n";

    //a way of doin it
    int iMenu = 0;
    int iType = 0;
    while (iMenu != 8) {
        cout << "\nEnter a menu option:"; //menu items 1-3
        cout << "\n1) Enter an animal";
        cout << "\n2) Display all animals";
        cout << "\n3) Display by name";
        cout << "\n4) Display by type";
        cout << "\n5) Remove All";
        cout << "\n6) Load from File";
        cout << "\n7) Save to File";
        cout << "\n8) Quit";

        iMenu = input.GetUserInt("\n", 1, 8);
        switch (iMenu)
        {
        case 1:
            iType = 0;
            cout << "1) Fish" << endl;
            cout << "2) Bird" << endl;
            iType = input.GetUserInt(1, 2);
            switch (iType)
            {
            case 1:
                animal = db.Create(Animal::eType::Fish);
                break;
            case 2:
                animal = db.Create(Animal::eType::Bird);
                break;
            } // inner case
            animal->Read(cout, cin);
            db.Add(animal);
            break;

        case 2:
            //displays everything in database
            db.DisplayAll(cout);
            break;

        case 3:
            //displays animal by exact name
            db.DisplayByName(cout);
            break;

        case 4:
            //displays animal by type
            db.DisplayByType(cout);
            break;
        case 5:
            //removes all things
            db.RemoveAll();
            break;
        case 6:
            //loads from file
            db.Load(db.filename);
            break;
        case 7:
            //save to file
            cout << "it works maybe";
            db.Save(db.filename);
        default: 0; 
        } //outer switch
        
        
    }
}   