#include "myInput.h"


int myInput::GetUserInt(string prompt, unsigned short low, unsigned short high) {
	int iTemp = 0;
	do {
		cout << prompt;
		cout << "\nEnter a number between " << low << " and " << high << ".\n";
		cin >> iTemp;
		
		if (!cin.good()) { //if the answer isn't okay, clear it, ignore the input, tell the person, reset the iTemp
			cin.clear();
			cin.ignore();
			cout << "\nImproper input!!";
			iTemp = low - 1; 
		}
	} while ((iTemp < low) || (iTemp > high) );
	return iTemp;
}

int myInput::GetUserInt(unsigned short low, unsigned short high) {
	return GetUserInt("", low, high); //shoves the range near an empty space
}