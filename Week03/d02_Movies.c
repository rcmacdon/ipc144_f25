// -----------------------------
// Title: d02_Movies.c
// Author: Clint MacDonald
// Date: September 15, 2025
// Description: Example of using header files
// ------------------------------
// this also can refer to libraries!

// INCLUDED LIBRARIES
#include <stdio.h>

#include "tools.h"  // include the header file we created

int main(void) {

    // Greet the user! ?
    printString("Hello, welcome to my program!");

    // Instructions ?
    printString("You will be asked for details about your favorite movie!");

    // ask for name of favorite movie ?
    char* movieName;
    movieName = getString("What is the name of your favorite movie?", movieName);

    // // ask who was the main actor ?
    char* mainActor;
    mainActor = getString("Who was the main actor in that movie?", mainActor);

    // printf("\nGreat! So far we have %s starring %s.", movieName, mainActor);

    // how long was that movie ?
    int movieLength;
    movieLength = getInteger("How long was that movie (in minutes)?", 10, 300);

    // what year did it come out?
    int movieYear;
    movieYear = getInteger("What year did that movie come out?", 1900, 2025);

    // print out a summary!
    printString("Summary");
    printf("\nYour favorite movie is %s.", movieName);
    // printf("\nThe main actor was %s.", mainActor);
    printf("\nIt is %i minutes long and came out in %i.", movieLength, movieYear);

    // verify this was correct!

    return 0;
}

