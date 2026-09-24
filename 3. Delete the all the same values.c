#include <stdio.h>

int main(){
    int n, v, c = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n], b[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\nEnter the value you want to delete: ");
    scanf("%d", &v);

    for(int i = 0; i < n; i++){

        if(a[i] != v){
            b[c] = a[i];
            c++;
        }
    }

    for(int i = 0; i < c; i++){
        printf("%d ", b[i]);
    }
}


