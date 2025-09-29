// ----------------------
// Tools function definitions
// Author: Clint MacDonald
// Date: September 15, 2025
// Description: Common tools for various programs
// ----------------------
#include <stdio.h>
#include "tools.h"

// FUNCTION DEFINITIONS
void printString(char recString[]) {
    printf("\n%s", recString);
}



// write a function to get a string from the user
// char* getString(char prompt[]) {
//     printString(prompt);
//     char value[30];
//     scanf(" %[^\n]s", value); 
//     return value;   
// };


char* getString(char prompt[], char* returnValue) {
    printString(prompt);
    scanf(" %[^\n]s", returnValue); 
    return returnValue;   
};

int getInteger(char prompt[], int min, int max){
    printString(prompt);
    int value;
    scanf("%i", &value);
    while(value < min || value > max){
        printf("Invalid entry, please try again: ");
        scanf("%i", &value);
    }
    return value;
};
