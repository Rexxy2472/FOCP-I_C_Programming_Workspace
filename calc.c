/* Basic DMAS calculator: Division, Multiplication, Addition, Subtraction. */
#include <stdio.h>

int main(void)
{
	double first, second, result;
	char operator;

	printf("Enter an expression (for example, 12 + 3): ");
	if (scanf("%lf %c %lf", &first, &operator, &second) != 3) {
		printf("Invalid input.\n");
		return 1;
	}

	switch (operator) {
	case '+':
		result = first + second;
		break;
	case '-':
		result = first - second;
		break;
	case '*':
	case 'x':
	case 'X':
		result = first * second;
		break;
	case '/':
		if (second == 0) {
			printf("Error: division by zero.\n");
			return 1;
		}
		result = first / second;
		break;
	default:
		printf("Invalid operator. Use +, -, *, or /.\n");
		return 1;
	}

	printf("Result: %.2f\n", result);
	return 0;
}
