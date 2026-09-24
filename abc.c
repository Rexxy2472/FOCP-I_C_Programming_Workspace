#include<stdio.h>

int main() {
    float num1=12756.678954321;
    double num2=12756.678954321;
    printf("The value of num1 is: %f\n",num1);
    printf("The value of num2 is: %lf\n",num2);

    printf("The value of num1 is: %.2f\n",num1);
    printf("The value of num2 is: %.2lf\n",num2);

    printf("The value of num1 is: %.3f\n",num1);
    printf("The value of num2 is: %.lf\n",num2);

    printf("The value of num1 is: %.10f\n",num1);
    printf("The value of num2 is: %.10lf\n",num2);

    printf("num1 is: %f\tnum2 is: %f\n",num1,num2);
    printf("num1 is: %f\nnum2 is: %f\n",num1,num2);
    printf("num1 is: %f num2 : %f\n",num1,num2);
    printf("num1 is: %f-------num2 is: %f\n",num1,num2);
        return 0;
}



