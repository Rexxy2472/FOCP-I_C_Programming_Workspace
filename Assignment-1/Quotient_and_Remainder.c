#include <stdio.h>

int main(void) {
    int dividend, divisor, quotient, remainder;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Quotient is: %d\n", quotient);
    printf("Remainder is: %d\n", remainder);

    return 0;
}