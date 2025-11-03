// -------------------------------
// Title: 
// Author: Clint MacDonald
// Date: 
// Description: 
// -------------------------------


#pragma region Notes

// Pointers are variables that store the memory address of another variable.
// They are declared using the * (asterisk) symbol.
// Example: int *ptr; // ptr is a pointer to an integer

// Pointers can be dereferenced using the * operator to access the value at the memory address they point to.

// Example: int value = 5; int *ptr = &value; int dereferencedValue = *ptr; // dereferencedValue is 5

#pragma endregion Notes





// IMPORTS or INCLUDES
#include <stdio.h>

// CONSTANTS and GLOBAL VARIABLES
int favNum = 16;

// FUNCTION PROTOTYPES
void printFavNumValue(int num1);
void printFavNumAddress(int *numPtr);

// MAIN FUNCTION
int main (void) {
    printf("Before Value: %d\n", favNum);
    printFavNumValue(favNum); // by Value
    printf("After Value: %d\n\n", favNum);

    printf("Before Address: %d\n", favNum);
    printFavNumAddress(&favNum);
    printf("After Address: %d\n", favNum);

    return 0;
}
// FUNCTION DEFINITIONS
void printFavNumValue(int num1) {
    printf("Inside Value Function Before Change: %d\n", num1);
    num1 = 42;
    printf("Inside Value Function After Change: %d\n", num1);
}

void printFavNumAddress(int *numPtr) {
    printf("Inside Address Function Before Change: %d\n", *numPtr);
    *numPtr = 42;
    printf("Inside Address Function After Change: %d\n", *numPtr);
}


