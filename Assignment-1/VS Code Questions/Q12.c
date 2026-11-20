//Question 12 — Print a Multiplication Table Grid

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows (n): ");
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d", i * j);
            if (j < n) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}