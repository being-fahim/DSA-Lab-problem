#include <stdio.h>
#include <conio.h>

int main(){
    int n, i, v, c = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[100];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    printf("\nEnter the value: ");
    scanf("%d", &v);

    for(int i = 0; i < n; i++){
        if(a[i] < v)
            c++;
    }

    for(int j = n; j > c; j--)
        a[j] = a[j - 1];

    a[c] = v;
    n = n + 1;



    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    getche();
}


