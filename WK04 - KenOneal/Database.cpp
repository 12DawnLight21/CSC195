#include "Database.h"

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