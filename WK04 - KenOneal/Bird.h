#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;

class Bird : public Animal
{
//wingspan, # of eggs
public:
	eType GetType() override { return eType::Bird;}

	void Read(std::ostream& ostr, std::istream& istr) override;
	void Write(std::ostream& ostr) override;

	void Read(std::ifstream& istr) override;
	void Write(std::ofstream& ostr) override;

protected:
	unsigned int m_eggNum{0}; //same thing as = 0
	int m_wingInches = 0;
};