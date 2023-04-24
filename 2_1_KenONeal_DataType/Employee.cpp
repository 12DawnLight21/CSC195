#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee() {
	//put constructor code here
}

//BAD CODE PRACTICE \/ \/
void Employee::Read() {
	//read code here
	cout << "\nEnter employee's name: ";
	cin >> name;
	cout << "\nHow old are they?: ";
	cin >> age;
	cout << "\nHow many days did they work? (Can be no more than 7 days): ";
	cin >> daysWorked;
	cout << "\nHow many hours did they work per day? (Please round to nearest half hour, 6.50 = 6:30): ";

	for (int i = 0; i < daysWorked; i++) {
		cout << "\nHours worked for day " << (i+1) << ": ";
		cin >> hoursPerDay[i];
	}
}
void Employee::Write() {
	//write code here
	cout << "\nName:" << name;
	cout << "\nAge:" << age;
	cout << "\nDays they worked:" << daysWorked;
	for (int i = 0; i < daysWorked; i++) {
		cout << "\nHours worked on day " << (i + 1) << ": " << hoursPerDay[i];
		totalHours += hoursPerDay[i]; //this works
	}
	cout << "\nTotal Hours: " << totalHours; //prints our proper shiz
	grossPay = totalHours * wage;
	cout << "\nGross Pay: " << grossPay;
	cout << "\nNet Pay: " << (grossPay - (grossPay * TAX));
	cout << "\n\n--- NEXT EMPLOYEE ---\n\n";
}