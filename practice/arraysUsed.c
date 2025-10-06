
// IIIPO

// Information
// Instructions
// Input
// Processing
// Output


// IMPORTS
#include <stdio.h>

// CONSTANTS AND GLOBAL VARIABLES
const int MIN = 1;
const int MAX = 50;
#define SIZE 5
int numbers[SIZE];
    
// FUNCTION PROTOTYPES
int getInt(char[50], int min, int max);

// MAIN FUNCTION
int main(void) {
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = getInt("Enter a number: ", MIN, MAX);
    }

    printf("The numbers you entered are:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}

// FUNCTION DEFINITIONS
int getInt(char prompt[50], int min, int max) {
    int value;
    do {
        printf("%s", prompt);
        scanf("%d", &value);
    } while (value < min || value > max);
    return value;
}
