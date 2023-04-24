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
    while (iMenu != 6) {
        cout << "\nEnter a menu option:"; //menu items 1-3
        cout << "\n1) Enter an animal";
        cout << "\n6) Quit";

        iMenu = input.GetUserInt("\nasdfff", 1, 6);
        switch (iMenu)
        {
        case 1:
            int iType = 0;
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
        } //outer switch
    }
}