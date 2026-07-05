// program to check anagram of two strings
#include <stdio.h>
int main() 
{
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0}; // Arrays to store frequency of each character
    int i;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Count frequency of each character in first string
    for (i = 0; str1[i] != '\0'; i++) 
    {  
        freq1[(unsigned char)str1[i]]++;
    }
    // Count frequency of each character in second string
    for (i = 0; str2[i] != '\0'; i++) 
    {  
        freq2[(unsigned char)str2[i]]++;
    }
    // Compare frequency arrays to check for anagram
    for (i = 0; i < 256; i++) 
    {
        if (freq1[i] != freq2[i]) 
        {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }
    printf("The strings are anagrams.\n");
    return 0;
}