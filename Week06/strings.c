// -------------------------------
// Title: Manipulating Strings
// Author: Clint MacDonald
// Date: Oct. 6, 2025
// Description: Trying to convert a sentence to ALL CAPS
// -------------------------------

// IMPORTS or INCLUDES
#include <stdio.h>

// CONSTANTS and GLOBAL VARIABLES

// FUNCTION PROTOTYPES
void toUpperCase(char str[]);
void getString(char str[]);

// MAIN FUNCTION
int main (void) {
    
    char sentence[100];

    getString(sentence);
    printf("You entered: %s\n", sentence);
    toUpperCase(sentence);
    printf("Your string in ALL CAPS is: %s\n", sentence);

    return 0;
}
// FUNCTION DEFINITIONS
void getString(char str[]) {
    printf("Enter a sentence: ");
    scanf(" %[^\n]s", str); // read until newline
}

void toUpperCase(char str[]) {
    int dist = 'a' - 'A'; // distance between lowercase and uppercase in ASCII
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        // if lower case
        if (str[i] >='a' && str[i] <= 'z') {
            str[i] = str[i] - dist; 
        }
    }
    
}





