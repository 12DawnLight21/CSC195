#include "Bird.h"

/////////////////////////////////////////////////
void Bird::Read(std::ostream& ostr, std::istream& istr) {
	Animal::Read(ostr, istr); //gets details of animal BEFORE getting bird details
	ostr << "\nEnter number of eggs it lays: "; 
	istr >> m_eggNum; 
	ostr << "\nEnter wingspan: ";
	istr >> m_wingInches;
}

void Bird::Write(std::ostream& ostr) {
	//ostr << "\n-----------------------";
	Animal::Write(ostr);
	ostr << "\nNumber of Eggs: " << this->m_eggNum;
	ostr << "\nWingspan in Inches: " << this->m_wingInches + " inches";
	ostr << "\n\n";
}

void Bird::Read(std::ifstream& istr) {
	Animal::Read(istr);

	istr >> this->m_eggNum;
	istr >> this->m_wingInches;	
}

void Bird::Write(std::ofstream& ostr) {
	Animal::Write(ostr);

	ostr << "\nEggs: " << this->m_eggNum;
	ostr << "\nWingspan: " << this->m_wingInches;
}