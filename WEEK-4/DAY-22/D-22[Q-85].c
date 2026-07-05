// program to check palindrome string
#include <stdio.h>
int main() 
{
    char str[100], rev[100];
    int length = 0, i, j;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0') 
    {
        length++;
    }
    // Exclude the newline character if present
    if (length > 0 && str[length - 1] == '\n') 
    {
        length--;
    }
    for (i = length - 1, j = 0; i >= 0; i--, j++) 
    {
        rev[j] = str[i];
    }
    rev[j] = '\0'; // Null-terminate the reversed string
    // Check if the original string and reversed string are the same
    int isPalindrome = 1;
    for (i = 0; i < length; i++) 
    {
        if (str[i] != rev[i]) 
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) 
    {   
        printf("The string is a palindrome.\n");
    } 
    else 
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}