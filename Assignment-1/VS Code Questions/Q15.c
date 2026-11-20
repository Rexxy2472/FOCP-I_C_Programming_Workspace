//Question 15 — Print a Butterfly Pattern

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows (n): ");
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 1; i <= n; i++) {
        // Determine the number of stars for the current row's wing
        int stars = (i <= (n + 1) / 2) ? i : (n - i + 1);
        
        // Determine the number of spaces between the wings
        int spaces = (n + 2) - 2 * stars;

        // Print left wing
        for (int j = 0; j < stars; j++) {
            printf("*");
        }

        // Print central gap spaces
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }

        // Print right wing
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}