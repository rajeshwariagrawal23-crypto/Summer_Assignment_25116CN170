// program to create student record management system
#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct student s[10];
    int n, i;

    printf("Enter the number of students:");
    scanf("%d", &n);

    if (n < 1) {
        printf("No students to record.\n");
        return 0;
    }
    if (n > 10) {
        printf("Max students is 10. Truncating to 10.\n");
        n = 10;
    }

    for (i = 0; i < n; i++) {
        printf("\nSTUDENT %d\n", i + 1);
        printf("Enter the roll no: ");
        scanf("%d", &s[i].roll);
        printf("Enter name: ");
        scanf("%49s", s[i].name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nSTUDENT RECORDS\n");

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll no: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
