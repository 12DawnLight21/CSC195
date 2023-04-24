// WK03 - KenONeal.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "MyConfig.h"
using namespace std;


struct Person
{
    char name[32];
    int id;
};

//create a function above main() called Square that takes in an int parameter
void Square(int iParam) {
    iParam = iParam * iParam; // could also be iParam*=iParam
    // multiply the int parameter by itself and assign it back to the parameter(i = i * i)
}

void SquareRef(int& iParam) {
    iParam *= iParam; 
}

//create a function above main() called Double that takes in an int pointer parameter
void Double(int* iPtr) {
    *iPtr = *iPtr * 2;
    //multiply the int pointer parameter by 2 and assign it back to the parameter(i = i * 2)
}

int main()
{
    Config myConfig;
    myConfig.Version.major = 1; //structures are simpler classes?
    cout << "WK03 - Ken ONeal :: Hello World!\n";

    // ** REFERENCE **
    int myInt = 5; //declare an int variable and set the value to some number(less than 10
    int& iRef = myInt; //declare a int reference and set it to the int variable above
    cout << "\nInt value = " << myInt; //output the int variable

    iRef = 7; // set the int reference to some number
    cout << "\nInt Ref value = " << myInt; // output the int variable

    // what happened to the int variable when the reference was changed?
    // ((When the reference was changed, the int variable's value became the change - Ken))
    
    cout << "\nInt address = " << &myInt; // output the address of the int variable
    cout << "\nInt ref address = " << &iRef; // output the address of the int reference

    // are the addresses the same or different?
    // ((The int value address and the int ref value are the same - Ken))
    
    // ** REFERENCE PARAMETER **
    Square(myInt); //call the Square function with the int variable created in the REFERENCE section
    cout << "\nSquare() value = " << myInt; // output the int variable to the console

    // !! notice how the variable has not changed, this is because we only passed the value to the function !!

    SquareRef(myInt);
    cout << "\nSquareRef() value = " << myInt;// change the Square function to take a int reference
     
    // !! notice how the calling variable has now changed, this is because we'passed  by reference' !!
    // !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""


    // ** POINTER VARIABLE **
    int* nullPtr = NULL; //declare an int pointer, set it to nullptr (it points to nothing)
    nullPtr = &myInt; // set the int pointer to the address of the int variable created in the REFERENCE section
    
    cout << "\nnullPtr value = " << nullPtr; //output the value of the pointer
    //what is this address that the pointer is pointing to?
    // ((The null pointer is pointing to myInt's address. - Ken))

    cout << "\nInitial value of nullPtr = " << *nullPtr; //output the value of the object the pointer is pointing to (dereference the pointer)
    
    // ** POINTER PARAMETER 
    // !! make sure to dereference the pointer to set the value and not set the address !!
    
    Double(nullPtr); //call the Double function with the pointer created in the POINTER VARIABLE section
    cout << "\nAfter Double() value = " << *nullPtr; // output the dereference pointer
    cout << "\nmyInt's value = " << myInt; //output the int variable created in the REFERENCE section

    // did the int variable's value change when using the pointer 
    

    //everything from here down needs peer reviewed when i get back to class monday

    // ** ALLOCATION/DEALLOCATION **
    int* heapPtr = nullPtr; // create an int pointer that points at an int allocated on the heap, set the allocated int value to some number
    cout << "\nHeapPtr value = " << heapPtr; // output the pointer value, this should be the address of the int allocated on the heap
    cout << "\nDereferenced HeapPtr value = " << *heapPtr; // output the dereference pointer
    
    nullPtr = NULL; // deallocate the int pointer to free up the memory

    int intArray[4];
    int* arrayPtr = intArray; // create an int pointer that points at an array of ints allocated on the heap, the array size should be 4 - 6
    
    // use a for loop and set each int in the array to a random number (use => rand() % 10 to get a random number)
    for (int i = 0; i < sizeof(arrayPtr); i++) { 
        intArray[i] = (rand() % 10);
    }

    // use a for loop and output each of the ints in the array
    for (int i = 0; i < sizeof(arrayPtr); i++) {
        cout << "\n" << intArray[i];
    }

    // use a for loop and output the address of each of the ints in the array
    for (int i = 0; i < sizeof(arrayPtr); i++) { 
        cout << "\nAddress: " << &arrayPtr;
    }

    arrayPtr = NULL; // deallocate the int pointer to free up the memory block (remember it's an array)
    
    // ** STRUCTURE **

    Person person[2]; // create a Person pointer that points at an array of Persons allocated on the heap, the array size should be 2
    Person* personPtr = person;
    
    // read in a name from the console and set it to the person name, do this for the id also, do this for both Persons
    cout << "\n\nWhat is Person 1's name?";
    cin >> person[0].name;
    cout << "\nWhat is their ID?";
    cin >> person[0].id;

    cout << "\n\nWhat is Person 2's name?";
    cin >> person[1].name;
    cout << "\nWhat is their ID?";
    cin >> person[1].id;
    
    // use a for loop and output the name and id of each person in the array
    for (Person p : person) {
        cout << "\nName: " << p.name; 
        cout << "\nID: " << p.id; 
    }

    // deallocate the person pointer to free up the memory block (remember it's an array)
    personPtr = NULL;
}