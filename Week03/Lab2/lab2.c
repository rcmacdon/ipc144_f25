/***************************************************************** 

    File: lab2.c

    Author: [Your Name]
    Seneca email: [Your Seneca email address]

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab2.c lab2main.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/

#include <stdio.h>
int lastDigit(int number);
int wholeMinutes(int seconds);

// A function to return only the last digit of a positive integer.
int lastDigit(int number){
    return number % 10;
}

// A function to return the whole number of minutes in a given number of seconds.
int wholeMinutes(int seconds){
    return seconds / 60;
}


