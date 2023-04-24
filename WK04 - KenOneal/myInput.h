#pragma once
#include <iostream>
using namespace std;

class myInput
{
public:
	int GetUserInt(string prompt, unsigned short low, unsigned short high); //prompt, range high/low
	int GetUserInt(unsigned short low, unsigned short high);
};

