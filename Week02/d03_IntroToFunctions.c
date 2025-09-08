// -------------------------------------
// File:    Week02/Intro to Functions.c
// Date:    Sept. 10, 2025
// Author:  Clint MacDonald
// Purpose: Introducing Basic Functions
// -------------------------------------

// include the standard input/output library
#include <stdio.h>     

// function prototypes - required in C and C++
void printHelloWorld(void);
void printGreeting(char name[]);
int getInteger(char prompt[]);
float calcAreaOfCircle(int radius);

// main function - program execution starts here
int main(void) {                            

    // call function to print Hello World
    printHelloWorld();                       

    // declare a character array to hold the name
    char myName[25];                        

    printf("Please enter your name: ");
    // obtain input from the console standard input (keyboard)
    scanf("%24s", myName);                  // Limit input to avoid overflow (%24s)

    // call function to print greeting with the name
    printGreeting(myName);                   


    // call function to get an integer from user
    int age = getInteger("Please enter your age: ");    
    printf("You are %d years old.\n", age);

    // call function to get radius and calculate area of circle
    int radius = getInteger("Please enter the radius of a circle (inches): ");
    float area = calcAreaOfCircle(radius);
    printf("The area of a circle with radius %d is %.2f square inches.\n", radius, area);

    return 0;
}

// function to print Hello World
void printHelloWorld(void) {
    printf("Hello World!\n");               
}

// function to print greeting with the provided name
void printGreeting(char name[]) {
    printf("Hello, %s!\n", name);           
}

// function to get an integer from user with a prompt
int getInteger(char prompt[]) {
    int value;
    printf("%s", prompt);
    scanf("%d", &value);
    return value;
}

// function to calculate the area of a circle given its radius
float calcAreaOfCircle(int radius) {
    const float PI = 3.14159f;
    return PI * radius * radius;
}