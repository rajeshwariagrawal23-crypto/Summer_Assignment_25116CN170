#include <stdio.h>
#include <string.h>

void trimNewline(char str[]) {
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void displayString(char str[]) {
    printf("String: %s\n", str);
}

void concatenateStrings(char str1[], char str2[]) {
    strcat(str1, str2);
    printf("After concatenation: %s\n", str1);
}

void copyString(char dest[], char src[]) {
    strcpy(dest, src);
    printf("Copied string: %s\n", dest);
}

void compareStrings(char str1[], char str2[]) {
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Both strings are equal.\n");
    } else if (result < 0) {
        printf("First string is smaller.\n");
    } else {
        printf("First string is greater.\n");
    }
}

void findLength(char str[]) {
    printf("Length of string: %lu\n", strlen(str));
}

void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    printf("Reversed string: %s\n", str);
}

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Menu-Driven String Operations\n");
    printf("===========================\n");

    while (1) {
        printf("\n1. Display string\n");
        printf("2. Concatenate strings\n");
        printf("3. Copy string\n");
        printf("4. Compare strings\n");
        printf("5. Find length\n");
        printf("6. Reverse string\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        while (getchar() != '\n') {}

        switch (choice) {
            case 1:
                printf("Enter string: ");
                fgets(str1, sizeof(str1), stdin);
                trimNewline(str1);
                displayString(str1);
                break;
            case 2:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                trimNewline(str1);
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                trimNewline(str2);
                concatenateStrings(str1, str2);
                break;
            case 3:
                printf("Enter source string: ");
                fgets(str1, sizeof(str1), stdin);
                trimNewline(str1);
                copyString(str2, str1);
                break;
            case 4:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                trimNewline(str1);
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                trimNewline(str2);
                compareStrings(str1, str2);
                break;
            case 5:
                printf("Enter string: ");
                fgets(str1, sizeof(str1), stdin);
                trimNewline(str1);
                findLength(str1);
                break;
            case 6:
                printf("Enter string: ");
                fgets(str1, sizeof(str1), stdin);
                trimNewline(str1);
                reverseString(str1);
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
