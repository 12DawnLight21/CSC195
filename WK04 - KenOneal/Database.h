#pragma once
#include "Animal.h"
#include "Bird.h"
#include "Fish.h"
#include <iostream>
#include <list>

class Database
{
private:
    std::list<std::unique_ptr<Animal>> _animal; // like a arraylist;
public:
    std::unique_ptr<Animal> Create(Animal::eType type);
    void Add(std::unique_ptr<Animal>& animal); //adds things to database
};