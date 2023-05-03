#pragma once
#include <string>
#include <iostream>
#include "Animal.h"

class Fish : public Animal
{
public:
	etype GetType() override { return etype::Fish; }
	void Read(std::ostream& ostr, std::istream& istr) override;
	void Write(std::ostream& ostr) override;
	void Read(std::ifstream& istr) override;
	void Write(std::ofstream& ostr) override;

protected:
	std::string habitat;
	int numTeeth = 0;
	int numFins = 0;
};
