// -------------------------------
// Title: d02_Operators.c
// Author: Clint MacDonald
// Date: Sept. 8, 2025
// Purpose: Demonstrating Operators in C
// -------------------------------

#include <stdio.h>

// there are various operators in programming languages
// some are:
// arithmetic operators: +, -, *, /, %
// relational operators: ==, !=, <, >, <=, >= (comarators)
// logical operators: && (and), || (or), ! (not)
// assignment operators: =, +=, -=, *=, /=, %=
// increment/decrement operators: ++, --

int main(void) {

    // Assignment operator
    int x = 5;  // assigns the value 5 to variable x
    int y = 9; // assigns the value 10 to variable y
    x += 3; // equivalent to x = x + 3; now x is 8
    printf("x's value is: %i\n", x);

    printf("x's value is: %i\n", x++);
    printf("x's value is: %i\n", x);

    // Selection
    if (x == y) {
        printf("The numbers are the same!\n");
    }
    else {
        printf("The numbers are different!\n");
    }

    // modulus
    printf("The remainder of %i and %i is %i!\n", x, y, x%y);

    //formatting

    //strings

    char myName[] = "Clint MacDonald";
    printf("My name is %s!\n", myName);
    printf("My name is %30s!\n", myName);
    printf("My name is %-30s!\n", myName);

    // integers
    int myFavNumber = 16;
    printf("My favorite number is %i!\n", myFavNumber);
    printf("My favorite number is %6i!\n", myFavNumber);
    
    // floats 
    float PI = 3.14159f;
    printf("PI is %f!\n", PI); 
    printf("PI is %.3f!\n", PI);
    printf("PI is %9.3f!\n", PI); 
}