// program to create marksheet generation system

#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];
    int roll;
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    // enter student's details
    printf("Enter student name: ");
    if (!fgets(name, sizeof(name), stdin)) return 1;
    name[strcspn(name, "\n")] = '\0';

    printf("Enter roll no.: ");
    if (scanf("%d", &roll) != 1) return 1;

    // Enter student's marks
    printf("Enter marks of 5 subjects (0-100):\n");
    printf("Maths: "); if (scanf("%d", &m1) != 1) return 1;
    printf("Physics: "); if (scanf("%d", &m2) != 1) return 1;
    printf("Chemistry: "); if (scanf("%d", &m3) != 1) return 1;
    printf("Mechanical: "); if (scanf("%d", &m4) != 1) return 1;
    printf("Electronics: "); if (scanf("%d", &m5) != 1) return 1;

    // calculate total and percentage of marks
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0f;

    // marksheet generation
    printf("\nMARKSHEET\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", roll);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f\n", percentage);

    // grading system
    if (percentage >= 90.0f)
        printf("Grade: A+\n");
    else if (percentage >= 75.0f)
        printf("Grade: A\n");
    else if (percentage >= 60.0f)
        printf("Grade: B\n");
    else if (percentage >= 50.0f)
        printf("Grade: C\n");
    else if (percentage >= 40.0f)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    // pass/fail
    if (percentage >= 40.0f)
        printf("Result: Pass\n");
    else
        printf("Result: Fail\n");

    return 0;
}