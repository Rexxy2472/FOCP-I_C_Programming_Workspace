#include <stdio.h>

int main(void) {
    float a, b, c;

    printf("Enter the three angles of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b + c != 180.0 || a <= 0 || b <= 0 || c <= 0) {
        printf("The angles form an Invalid triangle.\n");
    } else if (a < 90 && b < 90 && c < 90) {
        printf("The angles form an Acute triangle.\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("The angles form a Right triangle.\n");
    } else {
        printf("The angles form an Obtuse triangle.\n");
    }

    return 0;
}