#include "Animal.h"
//
string Animal::GetTypeStr()
{
	switch (this->GetType())
	{
	case etype::Bird:
		return "Bird";
		break;
	case etype::Fish:
		return "Fish";
		break;
	}
	return "undef";
}

//
void Animal::Read(std::ostream& ostr, std::istream& istr)
{
	ostr << "Enter animal name: " << endl;
	istr >> this->_name;
	ostr << "Enter lifespan" << endl;
	istr >> this->_lifespan;
	//cant instantiate animal due to virtual
} // creating a alias


void Animal::Write(std::ostream& ostr)
{
	ostr << "----------------------------" << endl;
	ostr << " Name: " << this->_name << endl;
	ostr << "Type: " << this->GetTypeStr() << endl;
	ostr << "LifeSpan: " << this->_lifespan << endl;
}


//for files--------------------------------------
void Animal::Read(std::ifstream& istr)
{
	istr >> this->_name;
	istr >> this->_lifespan;
	//cant instantiate animal due to virtual	
} // creating a alias

void Animal::Write(std::ofstream& ostr)
{
	ostr << (int)this->GetType() << endl; // must be first **
	ostr << this->_name << endl;
	ostr << this->_lifespan << endl;
} // for files
