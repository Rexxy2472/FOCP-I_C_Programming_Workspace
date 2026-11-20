#include <stdio.h>

int main(void) {
    float item_price;
    int item_quantity;

    printf("Enter the price of the item: ");
    scanf("%f", &item_price);
    printf("Enter the quantity of the item: ");
    scanf("%d", &item_quantity);

    printf("The total bill is: %.2f\n", item_price*item_quantity);

    return 0;
}