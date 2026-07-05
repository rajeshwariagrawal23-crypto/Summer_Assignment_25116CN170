// program to find common characters in a string
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    int count[256] = {0};

    printf("Enter a string: ");
    if (!fgets(str, sizeof(str), stdin)) {
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];
        count[ch]++;
    }

    printf("Repeated characters: ");
    int found = 0;
    for (int i = 0; i < 256; i++) {
        if (count[i] > 1) {
            printf("%c ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }

    printf("\n");
    return 0;
}
