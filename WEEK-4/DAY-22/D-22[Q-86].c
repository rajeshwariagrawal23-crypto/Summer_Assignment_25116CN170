// program to count words in a sentence
#include <stdio.h>
int main() 
{
    char str[100];
    int i, words = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) 
    {
        // Count words based on spaces and newlines
        if (str[i] == ' ' || str[i] == '\n') 
        {
            words++;
            // Skip consecutive spaces
            while (str[i + 1] == ' ' || str[i + 1] == '\n') 
            {
                i++;
            }
        }
    }
    // If the last character is not a space or newline, count the last word
    if (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\n') 
    {
        words++;
    }
    printf("Number of words: %d\n", words);
    return 0;
}   