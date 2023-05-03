#pragma once
#include "Animal.h"
#include "Bird.h"
#include "Fish.h"
#include <iostream>
#include <list>

class Database {
private:
	std::list<std::unique_ptr<Animal>> _animal; // like a arraylist;

public:
	const string filename = "testFile.txt"; // doesn't change
	std::unique_ptr<Animal> Create(Animal::etype type);
	void Add(std::unique_ptr<Animal>& animal); //add things to database
	void DisplayAll(std::ostream& ostr);
	void DisplaybyName(std::ostream& ostr);
	void DisplaybyType(std::ostream& ostr);

	void Save(const string filename);
	void Load(const string& filename);
	void RemoveAll();

};