// program to convert binary to decimal
#include <stdio.h>
#include <math.h>
int main(void)
{
    int Bnum, Dnum=0, digit, d=0;
    printf("Enter the binary number : ");
    scanf("%d", &Bnum);
    while(Bnum>0)
    {
        digit = Bnum % 10;
        Dnum += digit * (1 << d);
        d++;
        Bnum = Bnum / 10;
    }
    printf("Decimal number: %d\n", Dnum);
    return 0;
}