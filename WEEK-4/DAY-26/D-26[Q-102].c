// program to create voting eligibilty system 
#include <stdio.h>
int main ()
{
    int age;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    //checking wether the person is eligible for voting
    if(age >= 18)
    {
        printf("%s is eligible to vote.\n", name);
    }
    else
    {
        printf("%s is not eligible to vote.\n", name);
    }
    return 0;
}