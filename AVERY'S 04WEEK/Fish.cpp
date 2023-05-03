#include "Fish.h"

void Fish::Read(std::ostream& ostr, std::istream& istr)
{
	Animal::Read(ostr, istr);

	ostr << "enter number of Fins: ";
	istr >> this->numFins;
	ostr << "enter number of Teeth: ";
	istr >> this->numTeeth;
}
void Fish::Write(std::ostream& ostr) {
	Animal::Write(ostr);
	ostr << " Fins: " << this->numFins << endl;
	ostr << "Teeth: " << this->numTeeth << endl;
}

void Fish::Read(std::ifstream& istr)
{
	Animal::Read(istr);

	istr >> this->numFins;
	istr >> this->numTeeth;
}

void Fish::Write(std::ofstream& ostr) {
	Animal::Write(ostr);
	ostr << " Fins: " << this->numFins << endl;
	ostr << "Teeth: " << this->numTeeth << endl;
}