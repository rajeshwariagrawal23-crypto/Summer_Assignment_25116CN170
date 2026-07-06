// program to create menu driven array operation system
#include <stdio.h>

void displayArray(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertElement(int arr[], int *n, int maxSize) {
    int value, pos;

    if (*n >= maxSize) {
        printf("Array is full. Cannot insert more elements.\n");
        return;
    }

    printf("Enter element to insert: ");
    scanf("%d", &value);
    printf("Enter position (1 to %d): ", *n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > *n + 1) {
        printf("Invalid position.\n");
        return;
    }

    for (int i = *n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    (*n)++;
    printf("Element inserted successfully.\n");
}

void deleteElement(int arr[], int *n) {
    int pos;

    if (*n == 0) {
        printf("Array is empty. Cannot delete.\n");
        return;
    }

    printf("Enter position to delete (1 to %d): ", *n);
    scanf("%d", &pos);

    if (pos < 1 || pos > *n) {
        printf("Invalid position.\n");
        return;
    }

    for (int i = pos - 1; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;
    printf("Element deleted successfully.\n");
}

void searchElement(int arr[], int n) {
    int key, found = 0;

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at position %d.\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }
}

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array sorted successfully.\n");
}

void sumAndAverage(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);
    if (n > 0) {
        printf("Average = %.2f\n", (float)sum / n);
    } else {
        printf("Average = 0.00\n");
    }
}

int main() {
    int arr[100], n = 0, choice;

    printf("Menu-Driven Array Operations\n");
    printf("\n");

    while (1) {
        printf("\n1. Display array\n");
        printf("2. Insert element\n");
        printf("3. Delete element\n");
        printf("4. Search element\n");
        printf("5. Sort array\n");
        printf("6. Sum and average\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayArray(arr, n);
                break;
            case 2:
                insertElement(arr, &n, 100);
                break;
            case 3:
                deleteElement(arr, &n);
                break;
            case 4:
                searchElement(arr, n);
                break;
            case 5:
                sortArray(arr, n);
                break;
            case 6:
                sumAndAverage(arr, n);
                break;
            case 7:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
