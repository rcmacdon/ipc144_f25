// -------------------------------
// Title: Using arrays in an application
// Author: Clint MacDonald
// Date: Oct. 6, 2025
// Description: Learning to use arrays in an application
// -------------------------------

// IIIPO
// Information
// Instructions
// Input
// Processing
// Output

// IMPORTS or INCLUDES
#include <stdio.h>

// CONSTANTS and GLOBAL VARIABLES
const int MIN = 0;
const int MAX = 100;
//const int SIZE = 5;
#define SIZE 5
int grades[SIZE];

// FUNCTION PROTOTYPES
int getIntInRange(char[50], int min, int max);
void displayGrades(int[SIZE]);
float calculateAverage(int[], int size);
int calculateSum(int[], int size);
int findMax(int[], int size);

// MAIN FUNCTION
int main (void) {
    
    for (int i = 0; i < SIZE; i++) {
        grades[i] = getIntInRange("Enter a number", MIN, MAX);
    }

    displayGrades(grades);

    printf("\nThe average is %.2f\n", calculateAverage(grades, SIZE));

    printf("The maximum grade is: %i\n", findMax(grades, SIZE));

    return 0;
}

// FUNCTION DEFINITIONS
int getIntInRange(char prompt[50], int min, int max) {
    int value;
    do {
        printf("%s:", prompt);
        scanf("%i", &value);
    } while (value < min || value > max);

    return value;

}

void displayGrades(int g[SIZE]) {
    printf("------------------\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Grade: %i\n", g[i]);
    }
}

float calculateAverage(int grd[], int size) {
    float total = calculateSum(grd, size);
    float avg = total / size ;

    return avg; 
}

int calculateSum(int grd[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total = total + grd[i];
    }
    return total;
}

int findMax(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}