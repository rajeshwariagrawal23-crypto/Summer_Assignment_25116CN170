// Program to create contact management system

#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[20];
};

struct Contact contact[100];
int count = 0;

void addContact()
{
    printf("\nEnter Name: ");
    scanf("%s", contact[count].name);

    printf("Enter Phone Number: ");
    scanf("%s", contact[count].phone);

    count++;
    printf("Contact Added Successfully!\n");
}

void viewContacts()
{
    int i;

    if (count == 0)
    {
        printf("\nNo Contacts Found!\n");
        return;
    }

    printf("\nContact List\n");
    printf("-------------------------\n");

    for (i = 0; i < count; i++)
    {
        printf("%d. Name : %s\n", i + 1, contact[i].name);
        printf("   Phone: %s\n", contact[i].phone);
    }
}

void searchContact()
{
    char name[50];
    int i, found = 0;

    printf("\nEnter Name to Search: ");
    scanf("%s", name);

    for (i = 0; i < count; i++)
    {
        if (strcmp(name, contact[i].name) == 0)
        {
            printf("\nContact Found!\n");
            printf("Name : %s\n", contact[i].name);
            printf("Phone: %s\n", contact[i].phone);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Contact Not Found!\n");
    }
}

void deleteContact()
{
    char name[50];
    int i, j, found = 0;

    printf("\nEnter Name to Delete: ");
    scanf("%s", name);

    for (i = 0; i < count; i++)
    {
        if (strcmp(name, contact[i].name) == 0)
        {
            for (j = i; j < count - 1; j++)
            {
                contact[j] = contact[j + 1];
            }

            count--;
            found = 1;
            printf("Contact Deleted Successfully!\n");
            break;
        }
    }

    if (found == 0)
    {
        printf("Contact Not Found!\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                viewContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                deleteContact();
                break;

            case 5:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}