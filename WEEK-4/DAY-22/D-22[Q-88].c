// progam to remove spaces from a string
#include <stdio.h>
int main()
{
    char str[100], result[100];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n') // Exclude spaces and newline characters
        {
            result[j++] = str[i]; // Copy non-space characters to result
        }
    }
    result[j] = '\0'; // Null-terminate the result string
    printf("String after removing spaces: %s\n", result);
    return 0;
}