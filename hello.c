#include<stdio.h>
#include<math.h>

int main() {
    float radius;
    printf("Enter a radius of circle: ");
    scanf("%f",&radius);
    printf("The area of the circle having radius%f is:%f sq cm",radius,3.14*pow(radius,2));
    return 0;
}

