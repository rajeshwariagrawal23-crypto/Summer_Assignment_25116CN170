// program to create student record system using arrays and strings
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int rollNo;
    char name[50];
    int age;
    float marks;
};

void displayMenu() {
    printf("\nStudent Record System\n");
    printf("1. Add student\n");
    printf("2. Display all students\n");
    printf("3. Search student by roll number\n");
    printf("4. Update student marks\n");
    printf("5. Delete student\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
}

void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("No student records found.\n");
        return;
    }

    printf("\nStudent Records:\n");
    printf("Roll No\tName\tAge\tMarks\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%d\t%.2f\n", students[i].rollNo, students[i].name, students[i].age, students[i].marks);
    }
}

void addStudent(struct Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Student list is full.\n");
        return;
    }

    printf("Enter roll number: ");
    scanf("%d", &students[*count].rollNo);
    printf("Enter name: ");
    scanf("%s", students[*count].name);
    printf("Enter age: ");
    scanf("%d", &students[*count].age);
    printf("Enter marks: ");
    scanf("%f", &students[*count].marks);

    (*count)++;
    printf("Student added successfully.\n");
}

void searchStudent(struct Student students[], int count) {
    int roll;
    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            printf("Student found:\n");
            printf("Roll No: %d\nName: %s\nAge: %d\nMarks: %.2f\n", students[i].rollNo, students[i].name, students[i].age, students[i].marks);
            return;
        }
    }

    printf("Student not found.\n");
}

void updateMarks(struct Student students[], int count) {
    int roll;
    float newMarks;
    printf("Enter roll number to update: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            printf("Enter new marks: ");
            scanf("%f", &newMarks);
            students[i].marks = newMarks;
            printf("Marks updated successfully.\n");
            return;
        }
    }

    printf("Student not found.\n");
}

void deleteStudent(struct Student students[], int count) {
    int roll;
    printf("Enter roll number to delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            printf("Student deleted successfully.\n");
            return;
        }
    }

    printf("Student not found.\n");
}

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0, choice;

    while (1) {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                searchStudent(students, count);
                break;
            case 4:
                updateMarks(students, count);
                break;
            case 5:
                deleteStudent(students, count);
                break;
            case 6:
                printf("Exiting student record system.\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
