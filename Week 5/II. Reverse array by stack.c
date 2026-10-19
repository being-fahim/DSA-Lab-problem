#include <stdio.h>

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n], stack[n];
    int top = -1;

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Push array elements into stack
    for (int i = 0; i < n; i++) {
        stack[++top] = arr[i];
    }

    // Pop elements back into the array
    for (int i = 0; i < n; i++) {
        arr[i] = stack[top--];
    }

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
