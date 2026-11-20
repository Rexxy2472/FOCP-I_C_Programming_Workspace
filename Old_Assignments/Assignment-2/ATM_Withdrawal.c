#include <stdio.h>

int main() {
    int pin, amount;
    float balance;

    printf("Enter PIN: ");
    scanf("%d", &pin);
    printf("Enter amount: ");
    scanf("%d", &amount);
    printf("Enter balance: ");
    scanf("%f", &balance);

    if (pin == 1234) {
        if (amount > 0 && amount % 100 == 0) {
            if (amount <= balance) {
                printf("Withdrawal Successful");
            } else {
                printf("Insufficient Balance");
            }
        } else {
            printf("Invalid Amount");
        }
    } else {
        printf("Invalid PIN");
    }

    return 0;
}
