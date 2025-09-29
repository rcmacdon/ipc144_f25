/***************************************************************** 

    File: lab2practicemain.c

    Author: [Your Name]
    Seneca email: [Your Seneca email address]

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab2practice.c lab2practicemain.c
    To run program in codespaces, in terminal pane type:
        ./a.out

	Write your test main in this file to test your functions
        
***************************************************************/
//Uncomment the next line if you are using Visual Studio
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int numSeconds(int hours, int minutes, int seconds);

int main(void)
{
    int hours, minutes, seconds;

    // testing numSeconds function
    printf("Enter hours: ");
    scanf("%d", &hours);
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    printf("Enter seconds: ");
    scanf("%d", &seconds);
    printf("%d hours, %d minutes and %d seconds is %d total seconds\n", hours, minutes, seconds, numSeconds(hours, minutes, seconds));

    return 0;
}