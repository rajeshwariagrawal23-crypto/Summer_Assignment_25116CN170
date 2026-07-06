// program to create mini library system
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

void trimNewline(char str[]) {
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

struct Book {
    int id;
    char title[50];
    char author[50];
    int available;
};

void displayMenu() {
    printf("\nMini Library System\n");
    printf("1. Add book\n");
    printf("2. Display all books\n");
    printf("3. Search book by ID\n");
    printf("4. Borrow book\n");
    printf("5. Return book\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
}

void displayBooks(struct Book books[], int count) {
    if (count == 0) {
        printf("No books available.\n");
        return;
    }

    printf("\nBook List:\n");
    printf("ID\tTitle\tAuthor\tAvailable\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%s\t%d\n", books[i].id, books[i].title, books[i].author, books[i].available);
    }
}

void addBook(struct Book books[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Library is full.\n");
        return;
    }

    printf("Enter book ID: ");
    scanf("%d", &books[*count].id);
    while (getchar() != '\n') {}

    printf("Enter title: ");
    fgets(books[*count].title, sizeof(books[*count].title), stdin);
    trimNewline(books[*count].title);

    printf("Enter author: ");
    fgets(books[*count].author, sizeof(books[*count].author), stdin);
    trimNewline(books[*count].author);

    printf("Enter availability (1 for available, 0 for borrowed): ");
    scanf("%d", &books[*count].available);
    while (getchar() != '\n') {}

    (*count)++;
    printf("Book added successfully.\n");
}

void searchBook(struct Book books[], int count) {
    int id;
    printf("Enter book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            printf("Book found:\n");
            printf("ID: %d\nTitle: %s\nAuthor: %s\nAvailable: %d\n", books[i].id, books[i].title, books[i].author, books[i].available);
            return;
        }
    }

    printf("Book not found.\n");
}

void borrowBook(struct Book books[], int count) {
    int id;
    printf("Enter book ID to borrow: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            if (books[i].available == 1) {
                books[i].available = 0;
                printf("Book borrowed successfully.\n");
            } else {
                printf("Book is already borrowed.\n");
            }
            return;
        }
    }

    printf("Book not found.\n");
}

void returnBook(struct Book books[], int count) {
    int id;
    printf("Enter book ID to return: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            if (books[i].available == 0) {
                books[i].available = 1;
                printf("Book returned successfully.\n");
            } else {
                printf("Book is already available.\n");
            }
            return;
        }
    }

    printf("Book not found.\n");
}

int main() {
    struct Book books[MAX_BOOKS];
    int count = 0, choice;

    while (1) {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                displayBooks(books, count);
                break;
            case 3:
                searchBook(books, count);
                break;
            case 4:
                borrowBook(books, count);
                break;
            case 5:
                returnBook(books, count);
                break;
            case 6:
                printf("Exiting library system.\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}

