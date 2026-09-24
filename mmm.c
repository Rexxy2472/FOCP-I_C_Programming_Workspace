#include <stdio.h>
int main() {
    char name[50];
    int number;
    printf("Enter name: ");
    scanf("%49s", name);

    printf("Enter number: ");
    scanf("%d", &number);

    printf("The name is: %s\n", name);
    printf("The number is: %d\n", number);
    return 0;
}