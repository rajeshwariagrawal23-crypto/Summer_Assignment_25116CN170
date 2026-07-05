// program to create ATM simulation
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
    srand(time(0));
    float balance = 1000.0 + (rand() % 9000) + (rand() % 100) / 100.0;
    int choice;
    float amount;

    printf("\nATM Simulation\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");

    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current balance: %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit successful. New balance: %.2f\n", balance);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= balance) 
                {
                    balance -= amount;
                    printf("Withdrawal successful. New balance: %.2f\n", balance);
                } else 
                {
                    printf("Insufficient balance.\n");
                }
                break;
            case 4:
                printf("Thank you for using ATM.\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}