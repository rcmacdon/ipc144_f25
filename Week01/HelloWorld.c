// ------------------------------
// File:        HelloWorld.c
// Author:      Clint MacDonald
// Date:        Sept. 2, 2025
// Purpose:     My First Program
// ------------------------------

// go and retrieve an outside library for standard input and output
#include <stdio.h>

int main(void) {
    printf("Hello World!\nIt is a wonderful day!\n");
    printf("Clint's Book is named \"Intro to software\"\n");
    char myName[] = "Clint MacDonald";
    printf("My name is %s\n", myName);
    int myNum = 16;
    printf("My favorite number is %i\n", myNum);
}