#pragma once
#include <iostream>
using namespace std;
#include <list>
#include <fstream>

class Animal
{
public:
	enum class etype { Fish = 1, Bird = 2 };
protected:
	string _name;
	unsigned int _lifespan = 0;
	string _color;

public:
	virtual etype GetType() = 0; // 0 makes it a pure virtual method // virtual method are override methods
	string GetTypeStr();
	string GetName() { return _name; }
	void setName(string val) { _name = val; }
	unsigned int GetLifeSpan() { return _lifespan; }
	void setLifeSpan(unsigned int span) { _lifespan = span; }

	virtual void Read(std::ostream& ostr, std::istream& istr); // creating a alias
	virtual void Write(std::ostream& ostr);

	virtual void Read(std::ifstream& istr); // creating a alias
	virtual void Write(std::ofstream& ostr); // for files
};

