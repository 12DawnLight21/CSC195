#include "Fish.h"

void Fish::Read(std::ostream& ostr, std::istream& istr) {
	Animal::Read(ostr, istr);
	ostr << "\nEnter it's habitat: ";
	istr >> habitat;
	ostr << "\nEnter number of teeth it has: ";
	istr >> m_teethNum;
	ostr << "\nEnter number of fins it has: ";
	istr >> m_finNum;
}

void Fish::Write(std::ostream& ostr) {
	Animal::Write(ostr);
	ostr << "\nHabitat: " << this->habitat;
	ostr << "\nNumber of Teeth: " << this->m_teethNum;
	ostr << "\nNumber of Fins: " << this->m_finNum;
	ostr << "\n\n";
}

void Fish::Read(std::ifstream& istr) {
	Animal::Read(istr);
	istr >> this->m_teethNum;
	istr >> this->m_finNum;
}

void Fish::Write(std::ofstream& ostr) {
	Animal::Write(ostr);
	ostr << "\nFins: " << this->m_finNum;
	ostr << "\nTeeth: " << this->m_teethNum;
}