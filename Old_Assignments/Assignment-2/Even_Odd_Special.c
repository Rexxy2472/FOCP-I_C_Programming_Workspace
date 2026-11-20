#include <stdio.h>

int main(void) {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0 && n % 5 == 0) {
        printf("%d is Special.\n", n);
    } else if (n % 2 == 0) {
        printf("%d is even.\n", n);
    } else if (n % 5 == 0) {
        printf("%d is Five.\n", n);
    } else {
        printf("%d is Odd/Other.\n", n);
    }
    return 0;
}