#include <stdio.h>

int main() {
    int n, i, x = 0, y = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);


    int a[n], b[n], c[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nSplit array  into positive and negative numbers --->\n");
    for(i = 0; i < n; i++) {
        if(a[i] >= 0) {
            b[x] = a[i];
            x++;
        } else {
            c[y] = a[i];
            y++;
        }
    }

    printf("\nPositive set\n");
    for(i = 0; i < x; i++) {
        printf("%d ", b[i]);
    }

    printf("\nNegative set\n");
    for(i = 0; i < y; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
