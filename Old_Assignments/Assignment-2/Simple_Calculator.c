#include <stdio.h>

int main(void) {
    int num1, num2, sum, difference, product, quotient, remainder;
    int operation;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Choose an operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &operation);

    switch (operation) {
        case 1:
            sum = num1 + num2;
            printf("Sum: %d\n", sum);
            break;

        case 2:
            difference = num1 - num2;
            printf("Difference: %d\n", difference);
            break;

        case 3:
            product = num1 * num2;
            printf("Product: %d\n", product);
            break;

        case 4:
            if (num2 == 0) {
                printf("Error: Cannot divide by zero.\n");
            } else {
                quotient = num1 / num2;
                printf("Quotient: %d\n", quotient);
            }
            break;

        case 5:
            if (num2 == 0) {
                printf("Error: Cannot divide by zero.\n");
            } else {
                remainder = num1 % num2;
                printf("Remainder: %d\n", remainder);
            }
            break;

        default:
            printf("Invalid choice. Please enter a number between 1 and 5.\n");
    }

    return 0;
}
