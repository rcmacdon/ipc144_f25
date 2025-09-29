// main menu function
#include <stdio.h>

void mainMenu(void)
{
    printf("Main Menu\n");
    printf("1. Start Game\n");
    printf("2. Load Game\n");
    printf("3. Options\n");
    printf("4. Exit\n");
}

int main(void)
{
    
    // process the user choice here

    char choice;
    do {
        mainMenu();
        scanf("%s", &choice);
        printf("You selected option %c\n", choice);
        switch (choice) {
            case '1':
                printf("Starting new game...\n");
                break;
            case '2':
                printf("Loading game...\n");
                break;
            case '3':
                printf("Opening options...\n");
                break;
            case '4':
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
                break;
        }
    } while (choice != '4');

    printf("Exiting the program!\n");
    return 0;
}
