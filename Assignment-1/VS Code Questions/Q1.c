// Question 1 — Print a Solid Square 

#include <stdio.h>

int main() {
    int n;
    printf("Enter the square dimension (n): ");
    if (scanf("%d", &n) != 1) return 0;

    printf("\n--- Generated Pattern ---\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}