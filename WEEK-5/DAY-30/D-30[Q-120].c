// program to develop complete mini project using arrays, strings, and functions
#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

void trimNewline(char str[]) {
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void displayMenu() {
    printf("\nMini Project: Inventory Management\n");
    printf("1. Add product\n");
    printf("2. Display all products\n");
    printf("3. Search product by ID\n");
    printf("4. Update quantity\n");
    printf("5. Delete product\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
}

void displayProducts(struct Product products[], int count) {
    if (count == 0) {
        printf("No products available.\n");
        return;
    }

    printf("\nProduct List:\n");
    printf("ID\tName\tQuantity\tPrice\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%d\t%.2f\n", products[i].id, products[i].name, products[i].quantity, products[i].price);
    }
}

void addProduct(struct Product products[], int *count) {
    if (*count >= MAX_ITEMS) {
        printf("Inventory is full.\n");
        return;
    }

    printf("Enter product ID: ");
    scanf("%d", &products[*count].id);
    while (getchar() != '\n') {}

    printf("Enter product name: ");
    fgets(products[*count].name, sizeof(products[*count].name), stdin);
    trimNewline(products[*count].name);

    printf("Enter quantity: ");
    scanf("%d", &products[*count].quantity);
    printf("Enter price: ");
    scanf("%f", &products[*count].price);
    while (getchar() != '\n') {}

    (*count)++;
    printf("Product added successfully.\n");
}

void searchProduct(struct Product products[], int count) {
    int id;
    printf("Enter product ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (products[i].id == id) {
            printf("Product found:\n");
            printf("ID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n", products[i].id, products[i].name, products[i].quantity, products[i].price);
            return;
        }
    }

    printf("Product not found.\n");
}

void updateQuantity(struct Product products[], int count) {
    int id, newQty;
    printf("Enter product ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (products[i].id == id) {
            printf("Enter new quantity: ");
            scanf("%d", &newQty);
            products[i].quantity = newQty;
            printf("Quantity updated successfully.\n");
            return;
        }
    }

    printf("Product not found.\n");
}

void deleteProduct(struct Product products[], int count) {
    int id;
    printf("Enter product ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (products[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                products[j] = products[j + 1];
            }
            printf("Product deleted successfully.\n");
            return;
        }
    }

    printf("Product not found.\n");
}

int main() {
    struct Product products[MAX_ITEMS];
    int count = 0, choice;

    while (1) {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProduct(products, &count);
                break;
            case 2:
                displayProducts(products, count);
                break;
            case 3:
                searchProduct(products, count);
                break;
            case 4:
                updateQuantity(products, count);
                break;
            case 5:
                deleteProduct(products, count);
                break;
            case 6:
                printf("Exiting mini project.\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
