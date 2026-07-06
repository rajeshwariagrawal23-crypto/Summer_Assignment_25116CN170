// program to menu-driven calculator

#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    printf("Enter a number: ");
    scanf("%f", &a);
    printf("Enter another number: ");
    scanf("%f", &b);

    while(1)
    {
        printf("\nMENU\n");
        printf("1. Addition\n");
        printf("2. SUbtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                printf("Sum = %.2f\n", a+b);
                break;
            }
            case 2:
            {
                printf("Difference = %.2f\n", a-b);
                break;
            }
            case 3:
            {
                printf("Product = %.2f\n", a*b);
                break;
            }
            case 4:
            {
                if(b != 0)
                {
                    printf("Quotient = %.2f\n", a/b);
                }
                else{
                    printf("Division by zero is not possible.\n");
                }
                break;
            }
            case 5:
            {
                printf("Thank You.\n");
                return 0;
            }
            default:
            {
                printf("Invalid Choice.\n");
            }

        }

    }
}