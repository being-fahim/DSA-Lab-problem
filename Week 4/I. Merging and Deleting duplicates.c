#include <stdio.h>

int i;
void dd(int c[], int x);

int main() {
    int n, m, j = 0, x;

    printf("ARRAY MERGE & DELETE DUPLICATES\n\n");

    printf("Enter the size of Array A: ");
    scanf("%d", &n);

    printf("Enter the size of Array B: ");
    scanf("%d", &m);

    x = n + m;

    int a[n], b[m], c[x];

    printf("\nEnter %d elements for Array A:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nEnter %d elements for Array B:\n", m);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);

    printf("\n--------------------------------\n");

    printf("Array A: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nArray B: ");
    for (i = 0; i < m; i++)
        printf("%d ", b[i]);

    for (i = 0; i < n; i++)
        c[i] = a[i];

    for (i = n; i < x; i++)
        c[i] = b[j++];

    printf("\n\nMerged Array: ");
    for (i = 0; i < x; i++)
        printf("%d ", c[i]);

    printf("\n\n");

    dd(c, x);

    return 0;
}

void dd(int c[], int x) {
    int y = 0, z = -1;

    for (i = 0; i < x; i++) {
        for (int j = 0; j < i; j++) {
            if (c[i] == c[j])
                z++;
        }

        if (z == -1)
            c[y++] = c[i];

        z = -1;
    }

    printf("After deleting duplicate elements, Array: ");
    for (i = 0; i < y; i++)
        printf("%d ", c[i]);

    printf("\n");
}

