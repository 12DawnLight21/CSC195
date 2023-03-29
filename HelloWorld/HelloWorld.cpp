// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


//tells program the starting point
int main()
{
    int myInt = 42;
    char myChar = 'x';

    //cout = standard output
    // << = take this to the standard out
    // \n line break
    //std::cout << "Hello World!\n";
    std::cout << "Git\n";

    int anotherInt = 13;
    //* = pointer to another variable
    //most every variable in java is a pointer, just hidden ;3
    int* ptrInt;
    char* ptrChar;

    //& = address of
    ptrChar = &myChar; 
    *ptrChar = 'a';
    *(ptrChar + 300) = 'a';
    ptrChar = 0;
}

//stack = dynamic memory = first-in last-out
//heap = general memory you can make reference too