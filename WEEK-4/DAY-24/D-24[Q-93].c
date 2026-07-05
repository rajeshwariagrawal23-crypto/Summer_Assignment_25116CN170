// program to check string rotation
#include <stdio.h>
int main() 
{
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0, isRotation = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Calculate lengths of both strings
    while (str1[len1] != '\0') {
        len1++;
    }
    while (str2[len2] != '\0') {
        len2++;
    }

    // Exclude the newline character if present
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        len1--;
    }
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        len2--;
    }

    // Check if lengths are equal
    if (len1 != len2) {
        printf("The strings are not rotations of each other.\n");
        return 0;
    }

    // Check for rotation
    for (i = 0; i < len1; i++) {
        isRotation = 1;
        for (j = 0; j < len1; j++) {
            if (str1[(i + j) % len1] != str2[j]) {
                isRotation = 0;
                break;
            }
        }
        if (isRotation) {
            break;
        }
    }

    if (isRotation) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }
    return 0;
}
