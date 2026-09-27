#include <stdio.h>

int main(void) {
    int player1_choice, player2_choice;

    printf("Player 1, enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ");
    scanf("%d", &player1_choice);
    printf("Player 2, enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ");
    scanf("%d", &player2_choice);

    if (player1_choice == player2_choice) {
        printf("It's a tie!\n");
    } else if ((player1_choice == 1 && player2_choice == 3) ||
               (player1_choice == 2 && player2_choice == 1) ||
               (player1_choice == 3 && player2_choice == 2)) {
        printf("Player 1 wins!\n");
    } else if ((player2_choice == 1 && player1_choice == 3) ||
               (player2_choice == 2 && player1_choice == 1) ||
               (player2_choice == 3 && player1_choice == 2)) {
        printf("Player 2 wins!\n");
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}