/***************************************************************** 

    File: lab2practice.c

    Author: [Your Name]
    Seneca email: [Your Seneca email address]

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab2practice.c lab2main.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/

int numSeconds(int hours, int minutes, int seconds);

// A function to return the total number of seconds in a given number of hours, minutes and seconds.
int numSeconds(int hours, int minutes, int seconds){
    return (hours * 3600) + (minutes * 60) + seconds;
}
