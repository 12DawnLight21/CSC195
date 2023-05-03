#pragma once
#include "Animal.h"

class Bird : public Animal
{
public:
	etype GetType() override { return etype::Bird; }
	void Read(std::ostream& ostr, std::istream& istr) override;
	void Write(std::ostream& ostr) override;

	void Read(std::ifstream& istr) override;
	void Write(std::ofstream& ostr) override;
protected:
	unsigned int wingSpan = 0;
	int numEggs = 0;
};

