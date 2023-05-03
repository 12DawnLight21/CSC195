#include "Database.h"

#include <algorithm>

//////-----
std::unique_ptr<Animal> Database::Create(Animal::etype type)
{
	Animal* animal = nullptr;

	switch (type)
	{
	case Animal::etype::Bird:
		animal = new Bird;
		break;
	case Animal::etype::Fish:
		animal = new Fish;
		break;
	}
	return std::unique_ptr<Animal>{animal};
}

void Database::Add(std::unique_ptr<Animal>& animal)
{
	this->_animal.push_back(std::move(animal)); //building a list in memory and pushing it back
	cout << " ** list size = " << this->_animal.size() << endl;
} //add things to database

void Database::DisplayAll(std::ostream& ostr)
{
	for (std::unique_ptr<Animal>& animal : this->_animal) //for each in java/c#
	{
		animal->Write(ostr); //derived class write then parents write and loops
		cout << "------------------" << endl;

	}
}
void Database::DisplaybyName(std::ostream& ostr)
{
	string name;
	cout << "enter name for display: " << endl;
	cin >> name;
	for (std::unique_ptr<Animal>& animal : this->_animal)
	{
		if (animal->GetName() == name)
		{
			animal->Write(ostr);
			cout << "------------------" << endl;

		}
	}
}

void Database::DisplaybyType(std::ostream& ostr)
{
	int userType;
	cout << "Enter the animal type to display:\n";
	cout << "1) Fish\n";
	cout << "2) Bird\n";
	cin >> userType;

	Animal::etype type;
	switch (userType)
	{
	case 1:
		type = Animal::etype::Fish;
		break;
	case 2:
		type = Animal::etype::Bird;
		break;
	default:
		cout << "Invalid input dummy. Please enter 1 or a 2.\n";
		return;
	}

	for (std::unique_ptr<Animal>& animal : this->_animal)//like a for each
	{
		if (animal->GetType() == type)
		{
			animal->Write(ostr);
			cout << "------------------" << endl;

		}
	}
}



////////////////////
void Database::Save(const string filename) {
	//open file
	std:ofstream output(filename, std::ofstream::out | std::ofstream::app); //bitwise OR
	if (output.is_open() == true) {
		//loop and output all data

		for (std::unique_ptr<Animal>& animal : this->_animal) {
			animal->Write(output);
		}

	}

	if (output.is_open() == true) {
		output.close();
	}
}


void Database::Load(const string& filename) {
	
	std::ofstream output(filename);

	this->RemoveAll();

	if (output.is_open() == true) {
		//loop and output all data

		for (std::unique_ptr<Animal>& animal : this->_animal) {
			//animal->Write(output);
		}

	}

	if (output.is_open() == true) {
		output.close();
	}
}

void Database::RemoveAll() {

}