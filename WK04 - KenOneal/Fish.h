#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;

class Fish : public Animal
{
//habitat, # of teeth, # of fins
public:
	eType GetType() override { return eType::Fish; }

	void Read(std::ostream& ostr, std::istream& istr) override;
protected:
	string habitat = "";
	unsigned int m_teethNum{ 0 };
	int m_finNum{ 0 };
};

