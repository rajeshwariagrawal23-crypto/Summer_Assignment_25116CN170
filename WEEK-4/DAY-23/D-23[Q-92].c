// program to find maximum occuring character in a string
#include <stdio.h>
int main() 
{
    char str[100];
    int freq[256] = {0}; // Array to store frequency of each character
    int i, maxFreq = 0;
    char maxChar;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) 
    {  
        freq[(unsigned char)str[i]]++;
    }
    // Find the maximum occurring character
    for (i = 0; i < 256; i++) 
    {
        if (freq[i] > maxFreq) 
        {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }
    if (maxFreq > 0)
    {
        printf("Maximum occurring character: '%c' with frequency: %d\n", maxChar, maxFreq);
    }
    else
    {
        printf("No characters found in the string.\n");
    }
    return 0;
}   