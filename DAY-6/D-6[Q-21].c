// program to convert decimal to binary
#include <stdio.h>
void main()
{
    int Bnum=0, Dnum, d=1, digit;
    printf("Enter the decimal number: ");
    scanf("%d", &Dnum);
    while(Dnum>0)
    {
        digit = Dnum % 2;
        Dnum = Dnum / 2;
        Bnum = Bnum + (d * digit);
        d = d * 10;
    }
    printf("Binary number: %d", Bnum);
}