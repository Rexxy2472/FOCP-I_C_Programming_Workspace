#include <stdio.h>

int main(void) {
    int student_id;
    int student_age;
    float student_percentage;
    char student_grade;

    printf("Enter student ID: ");
    scanf("%d", &student_id);
    printf("Enter student age: ");
    scanf("%d", &student_age);
    printf("Enter student percentage: ");
    scanf("%f", &student_percentage);
    printf("Enter student grade: ");
    scanf(" %c", &student_grade);

    printf("Student Information:\n");
    printf("ID: %d\n", student_id);
    printf("Age: %d\n", student_age);
    printf("Percentage: %.2f\n", student_percentage);
    printf("Grade: %c\n", student_grade);
    
    return 0;
}