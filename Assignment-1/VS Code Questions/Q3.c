// Question 3 — Print an Inverted Triangle

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows (n): ");
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}