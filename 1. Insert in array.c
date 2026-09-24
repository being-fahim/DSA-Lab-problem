#include <stdio.h>
#include <conio.h>

int main(){
    int n, i, v, j;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\nIn which position do you want to add a new value: ");
    scanf("%d", &i);
    printf("\nEnter the value: ");
    scanf("%d", &v);

    if(i >= n){
        if(i > n)
            printf("\nError!");
        else{
            a[n] = v;
            n = n + 1;
        }
    }else{
        for(j = n; j > i; j--)
            a[j] = a[j - 1];

        a[i] = v;
        n = n + 1;
    }


    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    getche();
}

