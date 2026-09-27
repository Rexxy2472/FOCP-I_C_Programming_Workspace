#include <stdio.h>

int main(void) {
    float marks, attendance;

    printf("Enter your marks (0-100): ");
    scanf("%f", &marks);
    printf("Enter your attendance percentage (0-100): ");
    scanf("%f", &attendance);

    if (marks >= 90 && attendance >= 70) {
        printf("You are eligible for Special scholarship.\n");
    } else if (marks >= 75 && attendance >= 75) {
        printf("You are eligible for scholarship.\n");
    } else {
        printf("You are not eligible for the scholarship.\n");
    }
    
    return 0;
}