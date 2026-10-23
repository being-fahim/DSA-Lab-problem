#include <stdio.h>

int i;

void sort(int Y[], int y) {
    int temp;

    for(i = 0; i < y - 1; i++) {
        for(int j = 0; j < y - 1 - i; j++) {
            if(Y[j] > Y[j + 1]) {
                temp = Y[j];
                Y[j] = Y[j + 1];
                Y[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for(i = 0; i < y; i++)
        printf("%d ", Y[i]);

    printf("\n");
}

int main() {
    int n, m, o, j = 0, k = 0, x;

    printf("ARRAY MERGE & SORT\n\n");

    printf("Enter the size of Array A: ");
    scanf("%d", &n);

    printf("Enter the size of Array B: ");
    scanf("%d", &m);

    printf("Enter the size of Array C: ");
    scanf("%d", &o);

    x = n + m + o;

    int a[n], b[m], c[o], abc[x];

    printf("\nEnter %d elements for Array A:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nEnter %d elements for Array B:\n", m);
    for(i = 0; i < m; i++)
        scanf("%d", &b[i]);

    printf("\nEnter %d elements for Array C:\n", o);
    for(i = 0; i < o; i++)
        scanf("%d", &c[i]);

    printf("\n--------------------------------\n");
    printf("Sorted Array A: ");
    sort(a,n);

    printf("\nSorted Array B: ");
    sort(b,m);

    printf("\nSorted Array C: ");
    sort(c,o);

    for(i = 0; i < n; i++)
        abc[i] = a[i];

    for(i = n; i < m + n; i++)
        abc[i] = b[j++];

    for(i = m + n; i < x; i++)
        abc[i] = c[k++];

    printf("\n\nMerged Array: ");
    for(i = 0; i < x; i++)
        printf("%d ", abc[i]);

    printf("\n\n");
    sort(abc, x);

}

