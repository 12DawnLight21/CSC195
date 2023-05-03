#pragma once
#include <string>
#include <iostream>
using namespace std;

class MyInput
{
public:
	int getUserInt(string prompt, unsigned short low, unsigned short high);
	int getUserInt(unsigned short low, unsigned short high);
};

