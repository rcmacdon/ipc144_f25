// -------------------------------------
// File:    Week03/Intro to Functions.c
// Date:    Sept. 15, 2025
// Author:  Clint MacDonald
// Purpose: Introducing Basic Functions
// -------------------------------------

// examples of functions you have used in your life!

// Trigonometric functions: sin(), cos(), tan()
// Exponential and logarithmic functions: exp(), log(), log10()

// In Excel: SUM(), AVERAGE(), VLOOKUP(), IF(), NOW()

// In Algebra: f(x) = x^2 + 2x + 1 = y

// functions in C: printf(), scanf(), main()

// Define in simple terms: 
// send in data it needs, perform algorithmic calculations, return a result

#include <stdio.h>

// PROTOTYPES - required in C and C++
//    previews of the function signatures

void printHelloWorld(void);
// int getFavNumber(void);
// int getAge(void);
// int getYearCar(void);
int getInteger(char prompt[], int min, int max);
void printGreeting(char name[]);
int getIntegerInRange(int min, int max);

int main(void) {

    // call the function to print Hello World
    printHelloWorld();

    printf("\nyour fav num is: %i", getInteger("\nWhat is your favorite Number? ", 1, 100));
    printf("\nyour age is: %i", getInteger("\nWhat is your Age? ", 1, 130));
    printf("\nyour car is from: %i", getInteger("\nWhat year is your car? ", 1886, 2025));

    return 0;
}

void printHelloWorld(void) {
    printf("Hello Clint!\n");
}

// int getFavNumber() {
//     printf("\nWhat is your favorite Number? ");
//     int favNum;
//     scanf("%i", &favNum);
//     return favNum;
// }

// int getAge() {
//     printf("\nWhat is your Age? ");
//     int age;
//     scanf("%i", &age);
//     return age;
// }

// int getYearCar() {
//     printf("\nWhat year is your car? ");
//     int yearCar;
//     scanf("%i", &yearCar);
//     return yearCar;
// }

int getInteger(char prompt[], int min, int max) {
    int value;
    printGreeting(prompt);
    value = getIntegerInRange(min, max);
    return value;
}

void printGreeting(char strPrompt[]) {
    printf("\n%s:", strPrompt);
}

int getIntegerInRange(int min, int max) {
    int value;
    do {
        printf("\nEnter a number between %i and %i: ", min, max);
        scanf("%i", &value);
    } while (value < min || value > max);
    return value;
}
// Syntax of a UDF (User Defined Function)
// returnType functionName(parameterType parameterName, ...) {
    // function body
    // return value;  // if returnType is not void  
// }



