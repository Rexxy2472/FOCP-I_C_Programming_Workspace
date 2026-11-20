// Question 7 — Print a Right-Aligned Star Triangle

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows (n): ");
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}