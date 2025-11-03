// -------------------------------
// Title: 
// Author: Clint MacDonald
// Date: 
// Description: 
// -------------------------------

#pragma #region IMPORTS or INCLUDES
#include <stdio.h>
#pragma #endregion IMPORTS or INCLUDES

#pragma #region CONSTANTS and GLOBAL VARIABLES

#pragma #endregion CONSTANTS and GLOBAL VARIABLES

#pragma #region FUNCTION PROTOTYPES
void get2Numbers(int *a, int *b);
#pragma #endregion FUNCTION PROTOTYPES


// MAIN FUNCTION
int main (void) {
    int a;
    int b;

    int* a, *b;

    get2Numbers(&a, &b);
    printf("You entered: %d and %d\n", a, b);
    return 0;
}

// FUNCTION DEFINITIONS
void get2Numbers(int* x, int* y) {
    printf("Enter first number: ");
    scanf("%d", x);
    printf("Enter second number: ");
    scanf("%d", y);
}



