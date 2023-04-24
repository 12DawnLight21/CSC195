#pragma once
class Employee
{
public:
	char name[32];
	int age = 0;
	float hoursPerDay[7];
	float wage = 15.50;
	float grossPay = 0;
	float netPay = 0;
	float totalHours = 0;
	int daysWorked = 0;
	const float TAX = 0.01f;

public:
	Employee();
	void Read();
	void Write();
};

