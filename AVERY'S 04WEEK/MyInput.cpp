#include "MyInput.h"

int MyInput::getUserInt(string prompt, unsigned short low, unsigned short high)
{
	int iTemp = 0;
	do
	{
		cout << prompt;
		cout << " Enter a number between: " << low << " and " << high << endl; //enters number between range set
		cin >> iTemp; // temp number 
		if (!cin.good())
		{
			cin.clear();
			cin.ignore();
			cout << "Bad Input, Loser follow instructions" << endl;
			iTemp = low - 1;

		}
	} while ((iTemp < low) || (iTemp) > high);
	return iTemp;
}
int MyInput::getUserInt(unsigned short low, unsigned short high)
{
	return getUserInt("", low, high);
}