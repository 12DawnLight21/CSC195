// 1_3_KenONeal_Payroll.cpp : This file contains the 'main' function. Program execution begins and ends there.

//allows me to just type cout instead of the whole thing
using namespace std;
#include <iostream>

int main()
{
    //const = constant variable
    const unsigned short maxDays = 14; //max days in work week
    const float tax = 0.14f; // tax to play
    unsigned int daysWorked = 0; //days worked
    float grossPay = 0; //hours x wage
    float netPay = 0; // gross pay - (gross pay * tax)
    float wage = 15.50; //moneys per hour
    float totalHours = 0; //total hours worked
    string name; //name

    cout << "Enter your name: ";
    cin >> name;
    cout << name << ", how many days did you work? (Can be no more than " << maxDays << "): ";
    cin >> daysWorked;

    cout << "How many hours did you work per day? (Please round to nearest half hour, ex. 6.50 = 6:30): ";
    float workedHoursPerDay = maxDays - daysWorked;
    cin >> workedHoursPerDay;

    cout << "Name: " << name << "\n";
    cout << "Days worked: " << daysWorked << "\n";
    totalHours = workedHoursPerDay * daysWorked;
    cout << "Hours worked: "<< totalHours << "\n";

    grossPay = wage * totalHours;
    cout << "Amount made before taxes: " << grossPay << "\n";
    netPay = grossPay - (grossPay * tax);
    cout << "Amount made after taxes: " << netPay << "\n";

    cout << "End of Payroll";
}