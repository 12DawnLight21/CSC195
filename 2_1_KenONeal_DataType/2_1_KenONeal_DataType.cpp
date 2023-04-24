// 2_1_KenONeal_DataType.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream> //<> access the library in path variable
#include "Employee.h" // "" gives specific path to find this
using namespace std;

int main()
{
    const unsigned short MAX_EMPLOYEES = 20;

    std::cout << "2_1_Datatypes :: Hello World!\n";

    //READ() gets the name and that jazz
    //WRITE() prints it to console
    //FOR LOOP is needed to read/print all employees

    Employee workers[MAX_EMPLOYEES];
    unsigned short numberOfEmployees = 0;

    std::cout << "\nHow many employees do you posess? (There shallt be no more than 20 owned): ";
    cin >> numberOfEmployees;
    if (numberOfEmployees > MAX_EMPLOYEES)
        numberOfEmployees = MAX_EMPLOYEES;

    for (int i = 0; i < numberOfEmployees; i++) {
        //read for every employee
        workers[i].Read();
    }
    
    //write for every employee
    for (int i = 0; i < numberOfEmployees; i++) {
        workers[i].Write();
    }
    //write() outputs name, age, pay, taxes, n such

    std::cout << "\n--- END OF PAYROLL ---\n";





    //workers[0].age = 23;
    //workers[0].Read();
    //Employee* empPtr = new Employee(); //in da HEAP
    //empPtr->age = 42; //if one doesnt work try the other! -> OR .
    //empPtr->Read(); //pointer uses -> more often i guess
    //void* ptr = malloc(20); //generic pointer
    //int* intPtr = new int; // int on da HEAP
    // new = HEAP
    //*intPtr = 42;
    //printf("\n hex %00.x", *intPtr); //printf = formatted print function  %00.x = formatter
    //printf("\n hex %00.x", (*intPtr + 1)); //whatever value is here, print the hex value
    //do stuf with heap memory
    //cout << sizeof(Employee);
    //delete empPtr; // "garbage collector" , new things need deleted too!

    //  \/ \/ \/ \/ IMPORTANT SHIT \/ \/ \/ \/
    //cout << "\n size 1: " << (sizeof(workers) / sizeof(workers[0])); //getting number of cells in an array
    //cout << "\n size 2: " << std::size(workers); //size() comes from std
}