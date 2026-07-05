// program to remove duplicate characters from a string
#include <stdio.h>
int main()
{
    char str[100], result[100];
    int i, j = 0, k;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        // Check if the character has already been added to the result
        for (k = 0; k < j; k++)
        {
            if (str[i] == result[k])
            {
                break; // Character is a duplicate, skip it
            }
        }
        if (k == j) // Character is not a duplicate
        {
            result[j++] = str[i]; // Add character to result
        }
    }
    result[j] = '\0'; // Null-terminate the result string
    printf("String after removing duplicates: %s\n", result);
    return 0;
}