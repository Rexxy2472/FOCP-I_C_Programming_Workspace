#include <stdio.h>

int main(void) {
    float basic_salary, allowance, bonus, final_salary;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);
    printf("Enter the allowance: ");
    scanf("%f", &allowance);
    printf("Enter the bonus: ");
    scanf("%f", &bonus);

    final_salary = basic_salary + allowance + bonus;

    printf("The final salary is: %.2f\n", final_salary);
    
    return 0;
}