// program to find first repeating character in a string
#include <stdio.h>
int main() 
{
    char str[100];
    int freq[256] = {0}; // Array to store frequency of each character
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) 
    {  
        freq[(unsigned char)str[i]]++;
    }
    // Find the first repeating character
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (freq[(unsigned char)str[i]] > 1) 
        {
            printf("First repeating character: '%c'\n", str[i]);
            return 0;
        }
    }
    printf("No repeating character found.\n");
    return 0;
}