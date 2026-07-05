// program to create employee management system
#include <stdio.h>

struct employee
{
    int ID;
    char name[50];
    float salary;
};

int main()
{
    struct employee e[21];
    int n, i;

    printf("Enter the number of employees:");
    scanf("%d", &n);

    if (n < 1) {
        printf("No employees to record.\n");
        return 0;
    }
    if (n > 21) {
        printf("Max employees is 21. Truncating to 21.\n");
        n = 21;
    }

    for (i = 0; i < n; i++) 
    {
        printf("\nEMPLOYEE %d\n", i + 1);
        printf("Enter the employee's ID: ");
        scanf("%d", &e[i].ID);
        printf("Enter name: ");
        scanf("%49s", e[i].name);
        printf("Enter marks: ");
        scanf("%f", &e[i].salary);
    }

    printf("\nEMPLOYEE DETAILS\n");

    for (i = 0; i < n; i++) 
    {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", e[i].ID);
        printf("Name: %s\n", e[i].name);
        printf("Salary: %.2f\n", e[i].salary);
    }

    return 0;
}

