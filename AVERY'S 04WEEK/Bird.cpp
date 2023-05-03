#include "Bird.h"
//
void Bird::Read(std::ostream& ostr, std::istream& istr)
{
	Animal::Read(ostr, istr);

	ostr << "enter wingspan: ";
	istr >> this->wingSpan;
	ostr << "enter number of eggs: ";
	istr >> this->numEggs;
}

void Bird::Write(std::ostream& ostr)
{
	Animal::Write(ostr);
	ostr << "Wingspan: " << this->wingSpan << endl; // putting this-> it becomes more readable
	ostr << "LifeSpan: " << this->numEggs << endl;
}

void Bird::Read(std::ifstream& istr)
{
	Animal::Read(istr);

	istr >> this->wingSpan;
	istr >> this->numEggs;
}

void Bird::Write(std::ofstream& ostr)
{
	Animal::Write(ostr);
	ostr << "Wingspan: " << this->wingSpan << endl; // putting this-> it becomes more readable
	ostr << "LifeSpan: " << this->numEggs << endl;
}
