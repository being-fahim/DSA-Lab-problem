#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("\nYour inserted elements are\n");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n\nAll elements replaced by 5\n");

    for(int i = 0; i < n; i++){
        a[i] = 5;
    }

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}



