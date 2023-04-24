#pragma once
#include <iostream>
using namespace std;

class Animal
{
//name lifespan color
public:
	enum class eType { Fish = 1, Bird = 2};
protected:
	string _name; //convention!
	unsigned int _lifespan = 0;

public:
	virtual eType GetType() = 0; //Pure virtual method cuase of the = 0
	// getters/setters could go in .cpp, doesn't matter
	string GetName() { return _name;}
	void SetName(string val) { _name = val;}
	unsigned int GetLifespan() { return _lifespan;}
	void SetLifespan(unsigned int span) { _lifespan = span;}
	
	virtual void Read(std::ostream& ostr, std::istream& istr); //creating an alias || like we're accessing the object directly
};