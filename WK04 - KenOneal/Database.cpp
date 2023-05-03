#include "Database.h"
#include <algorithm>
using namespace std;

//////-----
std::unique_ptr<Animal> Database::Create(Animal::eType type)
{
    Animal* animal = nullptr;

    switch (type)
    {
    case Animal::eType::Bird:
        animal = new Bird;
        break;
    case Animal::eType::Fish:
        animal = new Fish;
        break;
    }
    return std::unique_ptr<Animal>{animal};
}
void Database::Add(std::unique_ptr<Animal>& animal) { 
    //add things to database
    this->_animal.push_back(std::move(animal)); //building a list in memory and pushing it back
    cout << " ** list size = " << this->_animal.size() << endl; 
}


void Database::DisplayAll(std::ostream& ostr) {
    for (std::unique_ptr<Animal>& animal : this->_animal) {
        animal->Write(ostr);
    }
}

void Database::DisplayByName(std::ostream& ostr) {
	string name;
	cout << "\nEnter name to search: ";
	cin >> name;
	
	for (std::unique_ptr<Animal>& animal : this->_animal) {
		if (animal->GetName() == name) {
			animal->Write(ostr);
			cout << "\n-----";
		}
	}
}
	
void Database::DisplayByType(std::ostream& ostr) {
	int userType;
	cout << "\nEnter the animal type to display: ";
	cout << "\n1) Fish";
	cout << "\n2) Bird" << "\n";
	cin >> userType;

	Animal::eType type;
	switch (userType) {
	case 1:
		type = Animal::eType::Fish;
		break;
	case 2:
		type = Animal::eType::Bird;
		break;
	default:
		cout << "Please enter 1 or 2 loser.";
		return;
	}

    for (std::unique_ptr<Animal>& animal : this->_animal) {
		if (animal->GetType() == type) {
			animal->Write(ostr);
			cout << "\n-----";
		}
    }
}

void Database::Save(const string filename) {
    //opens file
    std::ofstream output(filename, std::ofstream::out | std::ofstream::app); //opening output
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


void Database::Load(const string filename) {
    int iType = 0;
    std::ifstream output(filename);
    std::unique_ptr<Animal> animal;
    this->RemoveAll();

    if (output.is_open() == true) {
        //loops to load all data
        while (output.eof()) {
            output >> iType;

            if (output.fail()) break;

            if ((iType > 0) && (iType < 3)) {
            animal = this->Create(static_cast<Animal::eType>(iType));
            animal->Read(output);
            this->Add(animal);
            }
        } //end while
    } //end if

    if (output.is_open() == true) {
        output.close();
    }
}