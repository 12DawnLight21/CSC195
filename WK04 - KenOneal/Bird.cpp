#include "Bird.h"

/////////////////////////////////////////////////
void Bird::Read(std::ostream& ostr, std::istream& istr) {
	Animal::Read(ostr, istr); //gets details of animal BEFORE getting bird details
	ostr << "\nEnter number of eggs it lays: "; 
	istr >> m_eggNum; 
	ostr << "\nEnter wingspan: ";
	istr >> m_wingInches;
}