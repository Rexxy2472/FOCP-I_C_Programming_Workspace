// Question 6 — Print a Consecutive-Number Triangle

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows (n): ");
    if (scanf("%d", &n) != 1) return 0;

    int current_number = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", current_number++);
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}