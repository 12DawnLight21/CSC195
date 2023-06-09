#pragma once
#include <string>
#include <iostream>
#include "Animal.h"
using namespace std;

class Fish : public Animal
{
//habitat, # of teeth, # of fins
public:
	eType GetType() override { return eType::Fish; }

	void Read(std::ostream& ostr, std::istream& istr) override;
	void Write(std::ostream& ostr) override;

	void Read(std::ifstream& istr) override;
	void Write(std::ofstream& ostr) override;

protected:
	string habitat = "";
	unsigned int m_teethNum{ 0 };
	int m_finNum{ 0 };
};

