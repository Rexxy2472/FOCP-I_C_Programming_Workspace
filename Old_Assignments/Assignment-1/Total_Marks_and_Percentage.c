#include <stdio.h>

int main(void) {
    int maths, science, english, hindi, social_science, total_marks;
    float percentage;

    printf("Enter marks obtained in Maths: ");
    scanf("%d", &maths);
    printf("Enter marks obtained in Science: ");
    scanf("%d", &science);
    printf("Enter marks obtained in English: ");
    scanf("%d", &english);
    printf("Enter marks obtained in Hindi: ");
    scanf("%d", &hindi);
    printf("Enter marks obtained in Social Science: ");
    scanf("%d", &social_science);

    total_marks = maths + science + english + hindi + social_science;
    percentage = total_marks / 5.0;

    printf("Total marks obtained: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}