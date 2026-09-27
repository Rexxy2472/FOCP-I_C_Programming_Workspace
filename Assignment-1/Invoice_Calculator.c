#include <stdio.h>

int main(void) {
    int product_id, quantity;
    float product_price, discount_percentage, subtotal, discount_amount, final_amount;

    printf("Enter product ID: ");
    scanf("%d", &product_id);
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    printf("Enter product price: ");
    scanf("%f", &product_price);
    printf("Enter discount percentage: ");
    scanf("%f", &discount_percentage);

    subtotal = quantity * product_price;
    discount_amount = (subtotal * discount_percentage) / 100;
    final_amount = subtotal - discount_amount;

    printf("Subtotal: %.2f\n", subtotal);
    printf("Discount Amount: %.2f\n", discount_amount);
    printf("Final Amount: %.2f\n", final_amount);

    return 0;
}