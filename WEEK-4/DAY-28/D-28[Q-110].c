// program to create bank account system

#include<stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

void createAccount(struct Account accounts[], int count)
{
    printf("Enter Account Number: ");
    scanf("%d", &accounts[count].accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", accounts[count].name);

    printf("Enter Initial Balance: ");
    scanf("%f", &accounts[count].balance);

    printf("Account Created Successfully!\n");
}

void displayAccounts(struct Account accounts[], int count)
{
    if(count == 0)
    {
        printf("No accounts found!\n");
        return;
    }

    for(int i = 0; i < count; i++)
    {
        printf("Account Number: %d\n", accounts[i].accNo);
        printf("Name: %s\n", accounts[i].name);
        printf("Balance: %.2f\n", accounts[i].balance);
        printf("--------------------------\n");
    }
}

void searchAccount(struct Account accounts[], int count)
{
    if(count == 0)
    {
        printf("No accounts found!\n");
        return;
    }

    int accNo;
    int found = 0;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    for(int i = 0; i < count; i++)
    {
        if(accounts[i].accNo == accNo)
        {
            printf("Name: %s\n", accounts[i].name);
            printf("Balance: %.2f\n", accounts[i].balance);

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Account not found!\n");
}

void depositMoney(struct Account accounts[], int count)
{
    int accNo;
    float amount;
    int found = 0;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    for(int i = 0; i < count; i++)
    {
        if(accounts[i].accNo == accNo)
        {
            printf("Enter Amount to Deposit: ");
            scanf("%f", &amount);

            accounts[i].balance += amount;

            printf("Deposit Successful!\n");
            printf("Updated Balance: %.2f\n",
                   accounts[i].balance);

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Account not found!\n");
}

void withdrawMoney(struct Account accounts[], int count)
{
    int accNo;
    float amount;
    int found = 0;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    for(int i = 0; i < count; i++)
    {
        if(accounts[i].accNo == accNo)
        {
            printf("Enter Amount to Withdraw: ");
            scanf("%f", &amount);

            if(amount <= accounts[i].balance)
            {
                accounts[i].balance -= amount;

                printf("Withdrawal Successful!\n");
                printf("Remaining Balance: %.2f\n",
                       accounts[i].balance);
            }
            else
            {
                printf("Insufficient Balance!\n");
            }

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Account not found!\n");
}

int main()
{
    struct Account accounts[100];
    int count = 0;
    int choice = 0;

    while(choice != 6)
    {
        printf("\n------ MENU ------\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count < 100)
                {
                    createAccount(accounts, count);
                    count++;
                }
                break;

            case 2:
                displayAccounts(accounts, count);
                break;

            case 3:
                searchAccount(accounts, count);
                break;

            case 4:
                depositMoney(accounts, count);
                break;

            case 5:
                withdrawMoney(accounts, count);
                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}