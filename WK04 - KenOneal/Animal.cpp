#include "Animal.h"

////////////////////////////////////////////////////////////

void Animal::Read(std::ostream& ostr, std::istream& istr) {
	ostr << "\nEnter animal name: "; //<-- acts as a cout
	istr >> this->_name; //should use getters/setters later on
	ostr << "\nEnter animal lifespan: ";
	istr >> this->_lifespan;
}