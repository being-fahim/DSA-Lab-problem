#include <stdio.h>
#include <conio.h>

int main() {
    int n, i, v, j, choice;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[100];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nOriginal array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    do {
        printf("\n\nIn which position do you want to add a new value: ");
        scanf("%d", &i);

        printf("Enter the value: ");
        scanf("%d", &v);

        if (i < 0 || i > n) {
            printf("Error! Invalid position.");
        }
        else {
            for (j = n; j > i; j--) {
                a[j] = a[j - 1];
            }

            a[i] = v;
            n++;

            printf("Array after insertion: ");
            for (j = 0; j < n; j++) {
                printf("%d ", a[j]);
            }
        }

        printf("\n\nDo you want to insert another element? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    printf("\nFinal array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    getche();
    return 0;
}