#pragma once
#include "Animal.h"
#include "Bird.h"
#include "Fish.h"
#include <iostream>
#include <list>
using namespace std;

class Database
{
private:
    std::list<std::unique_ptr<Animal>> _animal; // like a arraylist;

public:
    const string filename = "TestFile.txt";
    std::unique_ptr<Animal> Create(Animal::eType type);

    void Add(std::unique_ptr<Animal>& animal); //adds things to database
    void Save(const string filename);
    void Load(const string filename);
    void RemoveAll() { this->_animal.clear(); };

    void DisplayAll(std::ostream& ostr);
    void DisplayByName(std::ostream& ostr);
    void DisplayByType(std::ostream& ostr);
};