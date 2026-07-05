// program to sort words by length
#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    char words[100][50];

    printf("Enter number of words: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Enter word %d: ", i + 1);
        fgets(words[i], sizeof(words[i]), stdin);
        words[i][strcspn(words[i], "\n")] = '\0';
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                char temp[50];
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
