// program to create inventory management system
#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

void displayMenu() {
    printf("\nInventory Management System\n");
    printf("1. Add item\n");
    printf("2. Display all items\n");
    printf("3. Search item by ID\n");
    printf("4. Update quantity\n");
    printf("5. Delete item\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
}

void displayItems(struct Item items[], int count) {
    if (count == 0) {
        printf("No items available.\n");
        return;
    }

    printf("\nItems in inventory:\n");
    printf("ID\tName\tQuantity\tPrice\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%d\t%.2f\n", items[i].id, items[i].name, items[i].quantity, items[i].price);
    }
}

void addItem(struct Item items[], int *count) {
    if (*count >= MAX_ITEMS) {
        printf("Inventory is full.\n");
        return;
    }

    printf("Enter item ID: ");
    scanf("%d", &items[*count].id);
    printf("Enter item name: ");
    scanf("%s", items[*count].name);
    printf("Enter quantity: ");
    scanf("%d", &items[*count].quantity);
    printf("Enter price: ");
    scanf("%f", &items[*count].price);

    (*count)++;
    printf("Item added successfully.\n");
}

void searchItem(struct Item items[], int count) {
    int id;
    printf("Enter item ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (items[i].id == id) {
            printf("Item found:\n");
            printf("ID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n", items[i].id, items[i].name, items[i].quantity, items[i].price);
            return;
        }
    }

    printf("Item not found.\n");
}

void updateQuantity(struct Item items[], int count) {
    int id, newQty;
    printf("Enter item ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (items[i].id == id) {
            printf("Enter new quantity: ");
            scanf("%d", &newQty);
            items[i].quantity = newQty;
            printf("Quantity updated successfully.\n");
            return;
        }
    }

    printf("Item not found.\n");
}

void deleteItem(struct Item items[], int count) {
    int id;
    printf("Enter item ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (items[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                items[j] = items[j + 1];
            }
            printf("Item deleted successfully.\n");
            return;
        }
    }

    printf("Item not found.\n");
}

int main() {
    struct Item items[MAX_ITEMS];
    int count = 0, choice;

    while (1) {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addItem(items, &count);
                break;
            case 2:
                displayItems(items, count);
                break;
            case 3:
                searchItem(items, count);
                break;
            case 4:
                updateQuantity(items, count);
                break;
            case 5:
                deleteItem(items, count);
                break;
            case 6:
                printf("Exiting inventory system.\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
