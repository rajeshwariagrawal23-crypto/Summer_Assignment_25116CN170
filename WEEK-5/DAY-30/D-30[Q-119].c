// program to create mini employee management system
#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

void displayMenu() {
    printf("\nMini Employee Management System\n");
    printf("1. Add employee\n");
    printf("2. Display all employees\n");
    printf("3. Search employee by ID\n");
    printf("4. Update salary\n");
    printf("5. Delete employee\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
}

void trimNewline(char str[]) {
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void displayEmployees(struct Employee employees[], int count) {
    if (count == 0) {
        printf("No employees available.\n");
        return;
    }

    printf("\nEmployee List:\n");
    printf("ID\tName\tDepartment\tSalary\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%s\t%.2f\n", employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
    }
}

void addEmployee(struct Employee employees[], int *count) {
    if (*count >= MAX_EMPLOYEES) {
        printf("Employee list is full.\n");
        return;
    }

    printf("Enter employee ID: ");
    scanf("%d", &employees[*count].id);
    while (getchar() != '\n') {}

    printf("Enter name: ");
    fgets(employees[*count].name, sizeof(employees[*count].name), stdin);
    trimNewline(employees[*count].name);

    printf("Enter department: ");
    fgets(employees[*count].department, sizeof(employees[*count].department), stdin);
    trimNewline(employees[*count].department);

    printf("Enter salary: ");
    scanf("%f", &employees[*count].salary);
    while (getchar() != '\n') {}

    (*count)++;
    printf("Employee added successfully.\n");
}

void searchEmployee(struct Employee employees[], int count) {
    int id;
    printf("Enter employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("Employee found:\n");
            printf("ID: %d\nName: %s\nDepartment: %s\nSalary: %.2f\n", employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
            return;
        }
    }

    printf("Employee not found.\n");
}

void updateSalary(struct Employee employees[], int count) {
    int id;
    float newSalary;
    printf("Enter employee ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("Enter new salary: ");
            scanf("%f", &newSalary);
            employees[i].salary = newSalary;
            printf("Salary updated successfully.\n");
            return;
        }
    }

    printf("Employee not found.\n");
}

void deleteEmployee(struct Employee employees[], int count) {
    int id;
    printf("Enter employee ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                employees[j] = employees[j + 1];
            }
            printf("Employee deleted successfully.\n");
            return;
        }
    }

    printf("Employee not found.\n");
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0, choice;

    while (1) {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(employees, &count);
                break;
            case 2:
                displayEmployees(employees, count);
                break;
            case 3:
                searchEmployee(employees, count);
                break;
            case 4:
                updateSalary(employees, count);
                break;
            case 5:
                deleteEmployee(employees, count);
                break;
            case 6:
                printf("Exiting employee management system.\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
