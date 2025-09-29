// --------------------------------
// Title: Introduction to Iteration
// Author: Clint MacDonald
// Date: Sept 29, 2025
// Purpose: Demonstrate iteration with a main menu
// --------------------------------

#include <stdio.h>

void mainMenu();
void option1();
void option2();
void option3();

// Main function where the program execution starts
int main(void) {

    // Greeting the user
    printf("Welcome to Clint's Main Menu Iteration Lesson!\n");
    printf("----------------------------------------------\n");

    // run the main menu
    mainMenu();

    // clean up the program
    printf("Good-bye!");

    // end the program
    return 0;
}

void mainMenu() {

    char choice;
    
    // repeat the menu until the user chooses to quit
    do {

        // display the menu
        printf("Main Menu\n");
        printf("------------------------\n");
        printf("1. For Loop\n");
        printf("2. While Loop\n");
        printf("3. Do While Loop\n");
        printf("4. Quit\n");
        printf("Enter your choice (1-4): ");

        // get the choice from the user
        scanf("%s", &choice);

        // validate the choice and proceed according to that choice
        if (choice == '1') {
            option1();
        }
        else if (choice == '2') {
            option2();
        }
        else if (choice == '3') {
            option3();
        }
        // exit when user makes the exit choice
        else if (choice == '4' ) {
            printf("You chose to exit!\n");
        }
        // anything else is incorrect
        else {
            printf("That was not a valid choice!\n");
        }

    } while (choice != '4');

}

// demonstrating a for loop
void option1() {
    // iterating through to show the number 1 to 5
    printf("For Loop!\n");
    printf("--------------------------\n");

    // for loop are mainly used when you know exactly how many iterations there are
    for (int i = 1; i <= 5; i++) { // (iterater and start, exit condition, increment)
        printf("%d\n", i);
    }

    printf("Returning to main menu...\n");
}
  
void option2() {
    // a while loop is used with unknown number of iterations, including no iterations
    printf("while loop\n");
    printf("--------------------------\n");
    
    // iterator and a place to start
    int i = 1;
    while (i <= 5) { // exit condition
        printf("%d\n", i);
        i++; // increment
    }
    printf("Returning to main menu...\n");
}

void option3() {
    // Do-While loop is similar to while loop, but it will always run at least once
    printf("do-while loop\n");
    printf("--------------------------\n");
    
    // iterator and a place to start
    int i = 1;
    do {
        printf("%d\n", i);
        i++; // increment
    } while (i <= 5);
    printf("Returning to main menu...\n");
}






