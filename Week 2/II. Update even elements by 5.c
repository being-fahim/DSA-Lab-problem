#include <stdio.h>

int main(){
    int n, c = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n], b[n];

    printf("\nInsert elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("\nYour inserted elements are: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0)
            b[c] = 5;
        else
            b[c] = a[i];
        c++;
    }

    printf("\nEven elements replaced by 5: ");
    for(int i = 0; i < n; i++){
        printf("%d ", b[i]);
    }
}



