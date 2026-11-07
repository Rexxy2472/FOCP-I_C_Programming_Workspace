//Question 16 — Print a Diamond Pattern

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows (n): ");
    if (scanf("%d", &n) != 1) return 0;

    int total_rows = 2 * n - 1;
    for (int i = 1; i <= total_rows; i++) {
        int stars, spaces;
        if (i <= n) {
            spaces = n - i;
            stars = 2 * i - 1;
        } else {
            spaces = i - n;
            stars = 2 * (2 * n - i) - 1;
        }

        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}