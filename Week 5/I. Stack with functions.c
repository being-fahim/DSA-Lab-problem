#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int top = -1; 

void push(int stack[], int maxsize);
void pop(int stack[], int maxsize);
void display(int stack[]);

int main() {
    int n, choice;
    printf("Enter the size of stack: ");
    scanf("%d", &n);

    int stack[n];
    int maxsize = n - 1;

    do {
        system("cls");
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(stack, maxsize); break;
            case 2: pop(stack, maxsize); break;
            case 3: display(stack); break;
            case 4: printf("\nTerminating..."); break;
            default: printf("\nInvalid!"); break;
        }
        getche();
    } while (choice != 4);

    return 0;
}

void push(int stack[], int maxsize) {
    int value;
    if (top == maxsize) {
        printf("\nStack overflow!");
    } else {
        printf("\nEnter element: ");
        scanf("%d", &value);
        stack[++top] = value;
        printf("\n%d pushed", value);
    }
}

void pop(int stack[], int maxsize) {
    if (top == -1) {
        printf("\nStack underflow!");
    } else {
        printf("\n%d popped", stack[top--]);
    }
}

void display(int stack[]) {
    if (top == -1) {
        printf("\nStack empty");
    } else {
        for (int i = top; i >= 0; i--) {
            printf("\n%d", stack[i]);
        }
    }
}
