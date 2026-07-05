// program to create library management system


#include<stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
    int quantity;
};

void addBook(struct Book books[], int count)
{
    printf("Enter details:\n");

    printf("Book ID: ");
    scanf("%d", &books[count].bookId);

    printf("Book Title: ");
    scanf("%s", books[count].title);

    printf("Author Name: ");
    scanf("%s", books[count].author);

    printf("Quantity: ");
    scanf("%d", &books[count].quantity);

    printf("Book Added Successfully!\n");
}

void displayBooks(struct Book books[], int count)
{
    if(count == 0)
    {
        printf("No books found!\n");
        return;
    }

    for(int i = 0; i < count; i++)
    {
        printf("Book ID: %d\n", books[i].bookId);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Quantity: %d\n", books[i].quantity);
        printf("\n");
    }
}

void searchBook(struct Book books[], int count)
{
    if(count == 0)
    {
        printf("No books found!\n");
        return;
    }

    int id;
    int found = 0;

    printf("Enter Book ID to Search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(books[i].bookId == id)
        {
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Quantity: %d\n", books[i].quantity);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Book not found!\n");
}

void updateBook(struct Book books[], int count)
{
    if(count == 0)
    {
        printf("No books found!\n");
        return;
    }

    int id;
    int found = 0;

    printf("Enter Book ID to Update: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(books[i].bookId == id)
        {
            printf("New Title: ");
            scanf("%s", books[i].title);

            printf("New Author: ");
            scanf("%s", books[i].author);

            printf("New Quantity: ");
            scanf("%d", &books[i].quantity);

            printf("Book Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Book not found!\n");
}

int deleteBook(struct Book books[], int count)
{
    if(count == 0)
    {
        printf("No books found!\n");
        return count;
    }

    int id;
    int found = 0;

    printf("Enter Book ID to Delete: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(books[i].bookId == id)
        {
            found = 1;

            for(int j = i; j < count - 1; j++)
            {
                books[j] = books[j + 1];
            }

            count--;
            printf("Book Deleted Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("Book not found!\n");

    return count;
}

void issueBook(struct Book books[], int count)
{
    if(count == 0)
    {
        printf("No books found!\n");
        return;
    }

    int id;
    int found = 0;

    printf("Enter Book ID to Issue: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(books[i].bookId == id)
        {
            found = 1;

            if(books[i].quantity > 0)
            {
                books[i].quantity--;
                printf("Book Issued Successfully!\n");
            }
            else
            {
                printf("Book is not available!\n");
            }

            break;
        }
    }

    if(found == 0)
        printf("Book not found!\n");
}

int main()
{
    struct Book books[100];
    int count = 0;
    int choice = 0;

    while(choice != 7)
    {
        printf("\nMENU\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Update Book\n");
        printf("5. Delete Book\n");
        printf("6. Issue Book\n");
        printf("7. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count < 100)
                {
                    addBook(books, count);
                    count++;
                }
                break;

            case 2:
                displayBooks(books, count);
                break;

            case 3:
                searchBook(books, count);
                break;

            case 4:
                updateBook(books, count);
                break;

            case 5:
                count = deleteBook(books, count);
                break;

            case 6:
                issueBook(books, count);
                break;

            case 7:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}