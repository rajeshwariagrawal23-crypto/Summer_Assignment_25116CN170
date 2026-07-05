// program to count vowels and consonants in a string
#include <stdio.h>
int main() 
{
    char str[100];
    int vowels = 0, consonants = 0, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) 
    {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))  
        {
            // Check for vowels
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                vowels++;
            } 
            else 
            {
                consonants++;
            }
        }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    return 0;
}