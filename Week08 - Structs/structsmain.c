// -------------------------------
// Title:  IPC144 Week 8 - Intro to Structs (aka mini-classes) 
// Author: Clint MacDonald
// Date:   Oct. 27, 2025 
// Description: Introduction to Custom Types and Structs in C
// -------------------------------

// IMPORTS or INCLUDES
#include <stdio.h>

// CONSTANTS and GLOBAL VARIABLES
// array of cars
struct Car cars[100] = {0};


// FUNCTION PROTOTYPES
// STRUCTS
struct Car {
    char vin[24];
    char make[20];
    char model[20];
    int year;
    float mileage;
    float purchasePrice;
    float sellingPrice;
};

// MAIN FUNCTION
int main (void) {
    // update a single car record
    struct Car car1 = {"1HGBH41JXMN109186", "Toyota", "Camry", 2020, 15000.5, 22000.0, 25000.0};
    // alternatively, we could update the first element of the cars array

    struct Car car2;
    // update car2 fields individually
    snprintf(car2.vin, sizeof(car2.vin), "2FAGP9CW0JH123456");
    snprintf(car2.make, sizeof(car2.make), "Honda");
    snprintf(car2.model, sizeof(car2.model), "Civic");
    car2.year = 2019;
    car2.mileage = 12000.0;
    car2.purchasePrice = 20000.0;
    car2.sellingPrice = 23000.0;    

    cars[0] = car1;
    cars[1] = car2;

    printf("Car Information:\n");
    printf("VIN: %s\n", car1.vin);
    printf("Make: %s\n", car1.make);
    printf("Model: %s\n", car1.model);
    printf("Year: %d\n", car1.year);
    printf("Mileage: %.1f\n", car1.mileage);
    printf("Purchase Price: $%.2f\n", car1.purchasePrice);
    printf("Selling Price: $%.2f\n", car1.sellingPrice);

    printf("Car Information:\n");
    printf("VIN: %s\n", car2.vin);
    printf("Make: %s\n", car2.make);
    printf("Model: %s\n", car2.model);
    printf("Year: %d\n", car2.year);
    printf("Mileage: %.1f\n", car2.mileage);
    printf("Purchase Price: $%.2f\n", car2.purchasePrice);
    printf("Selling Price: $%.2f\n", car2.sellingPrice);

    return 0;
}
// FUNCTION DEFINITIONS





// LOOP START

// Instantiate CAR
// Set car properties
// Copy Car to Array
// LOOP END

