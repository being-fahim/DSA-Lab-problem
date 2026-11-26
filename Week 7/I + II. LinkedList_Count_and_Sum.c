#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *add;
};

struct node *start = NULL, *temp, *new1;

void create();
void count_node();
void sum_node();

int main() {
    int choice;

    do {
        system("cls");

        printf("\n*------Linked List------*\n");
        printf("1. Create\n");
        printf("2. Count the nodes\n");
        printf("3. Sum of node values\n");
        printf("4. Exit\n");
        printf("*-----------------------*\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                count_node();
                break;
            case 3:
                sum_node();
                break;
            case 4:
                printf("\nExiting program...\n");
                break;
            default:
                printf("\nInvalid choice!\n");
        }

        if (choice != 4) {
            printf("\n\nPress Enter to continue...");
            while (getchar() != '\n');
            getchar();
        }

    } while (choice != 4);

    return 0;
}

void create() {
    int n;
    char ch;

    printf("\nEnter an element: ");
    scanf("%d", &n);

    start = (struct node *)malloc(sizeof(struct node));
    start->data = n;
    start->add = NULL;
    temp = start;

    printf("\nWant to continue? (y/n): ");
    scanf(" %c", &ch);

    while (ch == 'y' || ch == 'Y') {
        printf("\nEnter an element: ");
        scanf("%d", &n);

        new1 = (struct node *)malloc(sizeof(struct node));
        new1->data = n;
        new1->add = NULL;

        temp->add = new1;
        temp = temp->add;

        printf("\nWant to continue? (y/n): ");
        scanf(" %c", &ch);
    }
}

void count_node() {
    int count = 0;

    temp = start;

    while (temp != NULL) {
        count++;
        temp = temp->add;
    }

    printf("\nTotal number of nodes: %d", count);
}

void sum_node() {
    int sum = 0;

    temp = start;

    while (temp != NULL) {
        sum = sum + temp->data;
        temp = temp->add;
    }

    printf("\nSum of all node values: %d", sum);
}
