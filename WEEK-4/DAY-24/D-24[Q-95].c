// program to find longest word in a string
#include <stdio.h>
int main()
{
    char str[100], longest[100];
    int i = 0, j = 0, maxLength = 0, currentLength = 0, startIndex = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            currentLength++;
        }
        else
        {
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
                startIndex = i - currentLength;
            }
            currentLength = 0;
        }
        i++;
    }
    // Check for the last word in case the string doesn't end with a space
    if (currentLength > maxLength)
    {
        maxLength = currentLength;
        startIndex = i - currentLength;
    }
    // Copy the longest word to the longest array
    for (j = 0; j < maxLength; j++)
    {
        longest[j] = str[startIndex + j];
    }
    longest[j] = '\0'; // Null-terminate the longest word
    printf("Longest word: %s\n", longest);
    return 0;
}