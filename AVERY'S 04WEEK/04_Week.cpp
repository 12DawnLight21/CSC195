// 04_Week.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Database.h"
#include "Animal.h"
using namespace std;
#include "MyInput.h"

int main()
{
	MyInput input;
	std::unique_ptr<Animal> animal; //behind scenes management// makes it easier
	Database db;
	std::cout << " 04 Week Hello\n";

	int iMenu = 0;
	int iType = 0;
	while (iMenu != 6)
	{
		cout << "\nEnter a menu option: ";
		cout << "\n1) Add a Animal ";
		cout << "\n2) Display all";
		cout << "\n3) Display by name";
		cout << "\n4) Display by type";
		cout << "\n5) Remove all";
		cout << "\n6) Load From File";
		cout << "\n7) Save to file";
		cout << "\n8) Exit";

		iMenu = input.getUserInt(1, 8);
		switch (iMenu)
		{
		case 1:
			cout << "1) Fish" << endl;
			cout << "2) Bird" << endl;
			iType = input.getUserInt(1, 2);
			switch (iType)
			{
			case 1:
				animal = db.Create(Animal::etype::Fish);
				break;
			case 2: animal = db.Create(Animal::etype::Bird);
				break;
			} //inner case
			animal->Read(cout, cin);
			db.Add(animal);
			break;
		case 2:
			db.DisplayAll(cout);
			break;
		case 3:
			//prompt user for name
			//pass name and cout to get by name ()
			db.DisplaybyName(cout);
			break;
		case 4:
			db.DisplaybyType(cout);
			//prompt user for type
			//pass type and display by type
			break;
		case 7:
			//save to file
			cout << "do it works";
			db.Save(db.filename);
		default: 0;
		} // Outer Switch
	} //while
}

