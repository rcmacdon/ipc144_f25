// ---------------------------------
// File: Week02/d01_ProgramBasics.c
// Author: Clint MacDonald
// Date: Sept. 10, 2025
// Purpose: Demonstrate basic C programming concepts
// ---------------------------------

// Include standard input-output library
#include <stdio.h>

// Main function - program entry point
int main(void) {

    // above explained
    // int - return variable type of the function
    // main - required name of the starting function
    // void - means nothing, the location of void is where input parameters go
    // {} - contain the COMMAND BLOCK - section of code that is completed when conditions are met or when executed.

    // inside the function, write code to do stuff

    // Defining Variables
    int myFavNumber;  //#A04F34
    // what is a variable?
    // representing a location in memory
    myFavNumber = 16;
    printf("My favorite number is %i!", myFavNumber);

    // define a new character array (represents a string of characters)
    char userName[20]; // reserve space for 20 characters
    // Prompt the user for their input
    printf("Please enter your name! ");
    // get user input and store it in userName variable
    scanf("%s", userName); 
    // retrieve the value stored in memory for a nice response greeting
    printf("Hello, %s! Nice to meet you!\n", userName);

    // retrieving content from the user with scanf including any spaces
    char fullName[50];
    printf("Please enter your full name: ");
    scanf(" %[^\n]s", fullName); // the space before % is important
    
    // retrieve the value stored in memory for a nice response greeting
    printf("Hello, %s! Nice to meet you!\n", fullName);

    return 0; // return statement - ends the function and returns a value to the calling function
}