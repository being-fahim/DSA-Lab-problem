
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int top = -1;

void push(int stack[], int maxsize, int *top);
void pop(int stack[], int maxsize, int *top);
void display(int stack[], int *top);

int main() {
    int n, choice;

    printf("Enter the size of stack: ");
    scanf("%d", &n);

    int stack[n];
    int maxsize = n - 1;

    do {
        system("cls");

        printf("\n------------------------");
        printf("\n-------Stack Menu-------");
        printf("\n------------------------\n");

        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\n\nEnter an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push(stack, maxsize, &top);
                break;

            case 2:
                pop(stack, maxsize, &top);
                break;

            case 3:
                display(stack, &top);
                break;

            case 4:
                printf("\nProgram terminating....");
                break;

            default:
                printf("\nInvalid option!");
                break;
        }

        getche();

    } while (choice != 4);

    return 0;
}

void push(int stack[], int maxsize, int *top) {
    int value;

    if (*top == maxsize) {
        printf("\nStack is overflow!");
    }
    else {
        printf("\nEnter an element: ");
        scanf("%d", &value);

        stack[++(*top)] = value;

        printf("\n%d is pushed", value);
    }
}

void pop(int stack[], int maxsize, int *top) {
    int c;

    if (*top == -1) {
        printf("\nStack is underflow (Empty)");
    }
    else {
        c = stack[*top];
        (*top)--;

        printf("\n%d is popped", c);
    }
}

void display(int stack[], int *top) {
    if (*top == -1) {
        printf("\nStack is underflow (Empty)");
    }
    else {
        for (int i = *top; i >= 0; i--) {
            printf("\n%d", stack[i]);
        }
    }
}

