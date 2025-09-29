/***************************************************************** 

    File: lab2main.c

    Author: Clint MacDonald
    Date: Sept. 17, 2025    
    Seneca email: clint.macdonald@senecapolytechnic.ca

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab2.c lab2main.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/
//Uncomment the next line if you are using Visual Studio
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int lastDigit(int number);
int wholeMinutes(int seconds);

// main function to test the functions in lab2.c
int main(void)
{
    int number, seconds;

    // testing lastDigit function
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("The last digit of %d is %d\n", number, lastDigit(number));

    // testing wholeMinutes function
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);
    printf("%d seconds is %d whole minutes\n", seconds, wholeMinutes(seconds));

    return 0;
}

/*
DESK CHECKS

number      correct result          your result     pass/fail  
--------------------------------------------------------------
123         3                        3               pass
456         6                        6               pass
789         9                        9               pass

seconds     correct result          your result     pass/fail
--------------------------------------------------------------
120         2                        2               pass
370         6                        6               pass
735         12                       12              pass

*/