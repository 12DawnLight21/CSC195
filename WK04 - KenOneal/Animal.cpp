#include "Animal.h"

////////////////////////////////////////////////////////////
string Animal::GetTypeStr() { 
	switch(this->GetType()) {
	case eType::Bird:
		return "Bird";
		break;
	case eType::Fish:
		return "Fish";
		break;
	default:
		return "Undefined animal";
	}
}

////////////////////////////////////////////////////////////
void Animal::Read(std::ostream& ostr, std::istream& istr) {
	ostr << "\nEnter animal name: "; //<-- acts as a cout
	istr >> this->_name; //should use getters/setters later on
	ostr << "\nEnter animal lifespan: ";
	istr >> this->_lifespan;
}

////////////////////////////////////////////////////////////
void Animal::Write(std::ostream& ostr) {
	ostr << "\n-----------------------";
	ostr << "\nName: " << this->_name;
	ostr << "\nType: " << this->GetTypeStr();
	ostr << "\nLifespan: " << this->_lifespan;
}



// for files!!
void Animal::Read(std::ifstream& istr) {
	istr >> this->_name;
	istr >> this->_lifespan;
}

void Animal::Write(std::ofstream& ostr) {
	ostr << "\n" << (int)this->GetType(); //must be first, gets the type!
	ostr << this->_name;
	ostr << this->_lifespan;
}