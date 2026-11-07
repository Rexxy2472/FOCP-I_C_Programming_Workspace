// Question 13 — Print a Checkerboard

#include <stdio.h>

int main() {
    int n;
    printf("Enter the grid size (n): ");
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                printf("X");
            } else {
                printf("O");
            }
        }
        printf("\n");
    }

    return 0;
}