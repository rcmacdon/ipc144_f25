// -------------------------------
// Title: Arrays in C
// Author: Clint MacDonald
// Date: Oct 6, 2025
// Description: Demonstrates array usage in C
// -------------------------------

// IMPORTS or INCLUDES
#include <stdio.h>

// CONSTANTS and GLOBAL VARIABLES
const float PI = 3.14159;
const float G = 9.81;
const float HST = 13.0;
const int MIN = 1;
const int MAX = 50;
#define SIZE = 5;

// FUNCTION PROTOTYPES

// MAIN FUNCTION
int main (void) {

    // defining an array of size 5
    int numbers[] = {10, 20, 30, 40, 50};
    int numbers2[5] = {0}; // all elements initialized to 0
    int numbers3[5]; // uninitialized array

    // accessing array elements
    // elements in the array are stored in order, this order can be accessed using an index
    printf("The 3rd number is %i\n", numbers[2]); // arrays are 0-indexed

    // calculate the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("The size of the array is: %d\n", size);


    // print each element of the array individually using a loop
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }
    return 0;
}
// FUNCTION DEFINITIONS



