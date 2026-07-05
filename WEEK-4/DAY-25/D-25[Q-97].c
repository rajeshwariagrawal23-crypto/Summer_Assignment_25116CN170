// program to merge two sorted arrays
#include <stdio.h>

int main(void) {
    int n1, n2;
    int a[100], b[100], merged[200];

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first sorted array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second sorted array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    while (i < n1) {
        merged[k++] = a[i++];
    }

    while (j < n2) {
        merged[k++] = b[j++];
    }

    printf("Merged array: ");
    for (int x = 0; x < k; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");

    return 0;
}