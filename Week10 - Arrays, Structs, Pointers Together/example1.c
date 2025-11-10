// -------------------------------
// Title:   Golf Simulator
// Author:  Clint MacDonald
// Date:    Nov. 10, 2025
// Description: Using Structs, Arrays, and Pointers Together 
// -------------------------------

#pragma #region IMPORTS or INCLUDES
#include <stdio.h>
#pragma #endregion IMPORTS or INCLUDES

#pragma #region CONSTANTS and GLOBAL VARIABLES

#define NUM_PLAYERS 4
#define DEFAULT_LINE_LENGTH 40

int PAR_SCORES[19] = {72, 4, 5, 3, 4, 4, 3, 5, 4, 4, 5, 3, 4, 4, 3, 5, 4, 4, 4};

struct golf_scores {
    int playerID;
    char name[50];
    int handicap;
    int hole_scores[19];
};
#pragma #endregion CONSTANTS and GLOBAL VARIABLES

#pragma #region FUNCTION PROTOTYPES
void getPlayerDetails(struct golf_scores scores[], int numPlayers);

void printPlayerDetails(struct golf_scores scores[], int numPlayers);

void printParScores();

void getHoleScores(struct golf_scores scores[], int numPlayers);

void printHoleScores(struct golf_scores scores[], int numPlayers);

void determineWinner(struct golf_scores scores[], int numPlayers);

void printLine(int length) {
    for (int i = 0; i < length; i++) {
        printf("-");
    }
    printf("\n");
}

#pragma #endregion FUNCTION PROTOTYPES

#pragma #region MAIN FUNCTION
int main (void) {
    struct golf_scores scores[NUM_PLAYERS];

    getPlayerDetails(scores, NUM_PLAYERS);
    printPlayerDetails(scores, NUM_PLAYERS);
    printParScores();

    getHoleScores(scores, NUM_PLAYERS);
    printHoleScores(scores, NUM_PLAYERS);
    determineWinner(scores, NUM_PLAYERS);
    
    return 0;
}

#pragma #endregion MAIN FUNCTION

#pragma #region FUNCTION DEFINITIONS

void getPlayerDetails(struct golf_scores scores[], int numPlayers) {
    for (int i = 0; i < numPlayers; i++) {
        printf("Enter name for player %i: ", i + 1);
        scanf("%s", &scores[i].name);
        printf("What is %s's handicap? ", scores[i].name);
        scanf("%i", &scores[i].handicap);
    }
}

void printPlayerDetails(struct golf_scores scores[], int numPlayers) {
    printLine(DEFAULT_LINE_LENGTH);
    printf("Player Details\n");
    printLine(DEFAULT_LINE_LENGTH);
    
    for (int i = 0; i < numPlayers; i++) {
        printf("Player %i: %-20s Handicap: %2i\n", i + 1, scores[i].name, scores[i].handicap);
    }
    printLine(DEFAULT_LINE_LENGTH);
}

void printParScores() {
    printLine(DEFAULT_LINE_LENGTH);
    printf("The Par Scores for the course are:");
    for (int i = 1; i < 19; i++) {
        printf("Hole %2i: Par: %i\n", i, PAR_SCORES[i]);
    }
    printLine(DEFAULT_LINE_LENGTH);
    printf("Total Par:   %d\n", PAR_SCORES[0]);
}

void getHoleScores(struct golf_scores scores[], int numPlayers) {
    // reset totals to 0
    for (int pl = 0; pl < 4; pl++) {
        scores[pl].hole_scores[0] = 0;
    }

    // loop through holes
    for (int h = 1; h < 19; h++) {
        printf("\nEntering scores for Hole %d (Par: %d):\n", h, PAR_SCORES[h]);
        // loop through the players
        for (int p = 0; p < 4; p++) {
            printf("Enter score for %s: ", scores[p].name);
            scanf("%i", &scores[p].hole_scores[h]);
            scores[p].hole_scores[0] += scores[p].hole_scores[h];
        }
    }

}

void printHoleScores(struct golf_scores scores[], int numPlayers) {
    printLine(80);
    // Header
    printf("%-19s ", "Name");
    for (int i = 1; i < 19; i++) {
        printf("%3i", i);
    }
    printf("%6s", "TOTAL");
    printf("\n");

    // Print Fancy Line
    printf("--------------------");
    for (int i = 1; i < 19; i++) {
        printf(" --");
    }
    printf(" -----");
    printf("\n");

    // print PAR scores
    printf("%-20s", "PAR");
    for (int i = 1; i < 19; i++) {
        printf("%3i", PAR_SCORES[i]);
    }
    printf("%6i", PAR_SCORES[0]);
    printf("\n");

    // Print Fancy Line
    printf("--------------------");
    for (int i = 1; i < 19; i++) {
        printf(" --");
    }
    printf(" -----");
    printf("\n");

    // Player Scores

    // Players
    for (int p=0; p < 4; p++) {
        printf("%-20s", scores[p].name);
        for (int h = 1; h < 19; h++) {
            printf("%3i", scores[p].hole_scores[h]);
        }
        printf("%6i", scores[p].hole_scores[0]);
        printf("\n");
    }
}

#pragma #endregion FUNCTION DEFINITIONS


