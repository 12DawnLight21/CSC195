#pragma once
#include <iostream>
using namespace std;
#include <list>
#include <fstream>

class Animal
{
//name lifespan
public:
	enum class eType { Fish = 1, Bird = 2};
protected:
	string _name; //convention!
	unsigned int _lifespan = 0;

public:
	virtual eType GetType() = 0; //Pure virtual method cuase of the = 0
	string GetTypeStr();
	// getters/setters could go in .cpp, doesn't matter
	void SetName(string val) { _name = val; }
	string GetName() { return _name;}
	void SetLifespan(unsigned int span) { _lifespan = span; }
	unsigned int GetLifespan() { return _lifespan;}
	
	
	virtual void Read(std::ostream& ostr, std::istream& istr); //creating an alias || like we're accessing the object directly
	virtual void Write(std::ostream& ostr);

	//for the files!
	virtual void Read(std::ifstream& istr);
	virtual void Write(std::ofstream& ostr);
};