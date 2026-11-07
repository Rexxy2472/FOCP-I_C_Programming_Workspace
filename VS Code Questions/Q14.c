//Question 14 — Print Floyd's Triangle

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows (n): ");
    if (scanf("%d", &n) != 1) return 0;

    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", num++);
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}