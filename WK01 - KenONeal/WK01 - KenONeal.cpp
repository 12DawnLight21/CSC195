// WK01 - KenONeal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "WK01 - Hello World!\n";

    //primatives -  long(64x), int(32x), short(16x), float(4x), char(1x)

    //integer - value - number 1 << naming convention
    int iVal1 = -1;
    short shVal = 3;
    long lVal = 123456789;
    int iVal2 = 29;
    float fVal = 23;
    char cVal = 'a';

    std::cout << "\n iVal1 = ";
    std::cout << iVal1 << " address = " << &iVal1; //& =  
    std::cout << "\n shVal = ";
    std::cout << shVal << " address = " << &shVal;
    std::cout << "\n iVal2 = ";
    std::cout << iVal2 << " address = " << &iVal2;
    std::cout << "\n" << (&iVal1 - &iVal2);

    //important to see byte size to help allocate memory for variables
    //sizeof() = sees byte size of variable
    std::cout << "\n **** Byte size of char = " << sizeof(cVal);
    std::cout << "\n **** Byte size of short = " << sizeof(shVal); 
    std::cout << "\n **** Byte size of int = " << sizeof(iVal1);

    //initialize variables to avoid an episode
    int* iPtr = NULL;
    iPtr = &iVal1;

    //points to MEMORY LOCATION , not VAR VALUE
    std::cout << "\n Value of iPtr = " << iPtr;
    std::cout << "\n iPtr address = " << &iPtr;
    std::cout << "\n **** Byte size of iPtr = " << sizeof(iPtr);
    std::cout << "\n Value iPtr points to is " << *(&iPtr + 17);

    //messing around with thins for like WK 2 or somethin
    char nameA;
    std::cout << "\n Type the first letter in your name: ";
    std::cin >> nameA;
    std::cout << nameA;

    // Heap memory
    char* chTemp = NULL;
    chTemp = (char*)malloc(20); //malloc = memory allocation into bytes
    memset(chTemp, '\0', 20); //memset = memory set ; '\0' = NULL terminator (tells PC to end the string)
    //memset(chTemp, 0, 20) && memset(chTemp, NULL, 20) == memset(chTemp, '\0', 20)
    //NULL terminators IMPORTANT!!! Can be used i nmore than just C++ (Python, Java, etc)

    //do stuff with memory, then free it up
    //dont free up memory = memory leak, free this up!!
    free(chTemp);
    chTemp = NULL; //good practice! set to NULL in case shit gets redefined elsewhere

    std::cout << "\n\n End of Program.";
}