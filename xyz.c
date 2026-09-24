#include<stdio.h>

int main() {
    int age = 30;
    float height = 5.8;
    char name[20] = "John Doe";
    double salary = 20000.75;
    
    printf("1. Integer (int): %d\n", age);
    printf("2. Float: %f\n", height);
    printf("3. Character (char): %c\n", name);
    printf("4. Double: %lf\n", salary);
    
    printf("\n=== Summary ===\n");
    printf("Age: %d years\n", age);
    printf("Height: %.1f feet\n", height);
    printf("Name: %10s\n", name);
    printf("Salary: $%.2lf\n", salary);
    
    return 0;
}