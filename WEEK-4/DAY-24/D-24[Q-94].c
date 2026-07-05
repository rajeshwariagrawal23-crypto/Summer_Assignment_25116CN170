// program to compress a string
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[101];
    char compressed[201];

    printf("Enter a string: ");
    if (!fgets(str, sizeof(str), stdin)) {
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    if (len == 0) {
        printf("\n");
        return 0;
    }

    int write = 0;
    int count = 1;
    for (int i = 1; i <= len; ++i) {
        if (i < len && str[i] == str[i - 1]) {
            count++;
        } else {
            compressed[write++] = str[i - 1];
            if (count > 1) {
                write += sprintf(&compressed[write], "%d", count);
            }
            count = 1;
        }
    }
    compressed[write] = '\0';

    printf("Compressed string: %s\n", compressed);
    return 0;
}
