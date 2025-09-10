// ------------------------
// Title: Introduction to User Input
// Author: Clint MacDonald
// Date: Sept. 10, 2025
// Purpose: TO learn the BASICS only of user input in the console window
// ------------------------

#include <stdio.h>

int main(void) {

    printf("Hello World!\n");

    char myName[] = "Clint MacDonald";
    printf("My name is %s!\n", myName);

    // User input
    printf("\nEnter your name: ");
    char userName[] = "";
    scanf("%s", userName);
    printf("\nYour name is: %s!", userName);

    // user input that includes spaces
    printf("\nEnter your full name: ");
    char fullName[] = "";
    scanf(" %[^\n]s", fullName);
    printf("\nYour name is: %s!", fullName);

    // user input that is numeric
    printf("\nHow old are you? ");
    int userAge;
    scanf("%i", &userAge);
    printf("\nYou are %i years old!", userAge);
}