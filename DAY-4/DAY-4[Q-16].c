// program to print armstrong number in a given range
#include <stdio.h>
void main()
{
    int start, end, i, temp, sum, r;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);
    // loop through the range and check for armstrong numbers
    for(i=start; i<=end; i++)
    {
        temp = i;
        sum = 0;
        while(temp != 0)
        {
            r = temp % 10;
            sum = sum + r*r*r;
            temp = temp / 10;
        }
        //check if the number is an armstrong number
        if(sum == i)
        {
            printf("armstrong number in the range is:%d\n", i);
        }
    }
}
