#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a < b && a > c)) {
        printf("The middle number is: %d\n", a);
    } else if ((b > a && b < c) || (b < a && b > c)) {
        printf("The middle number is: %d\n", b);
    } else {
        printf("The middle number is: %d\n", c);
    }

    return 0;
}