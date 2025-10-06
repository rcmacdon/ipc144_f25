// Basics of Arrasys in C
#include <stdio.h>

int main() {
    // Declare and initialize an array of integers
    int numbers[] = {10, 20, 30, 40, 50};
    
    // Calculate the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("Size of the array: %d\n", size);

    // Print the elements of the array
    printf("Array elements are:\n");
    for(int i = 0; i < size; i++) {
        printf("%d\n", numbers[i]);
    }
    
    return 0;
}