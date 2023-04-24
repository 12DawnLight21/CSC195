#include "Fish.h"

/////////////////////////////////////////////////
void Fish::Read(std::ostream& ostr, std::istream& istr) {
	Animal::Read(ostr, istr);
	ostr << "\nEnter it's habitat: ";
	istr >> habitat;
	ostr << "\nEnter number of teeth it has: ";
	istr >> m_teethNum;
	ostr << "\nEnter number of fins it has: ";
	istr >> m_finNum;
}