#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *add;
};

struct node *start = NULL, *temp, *new1;

void create();
void search_position();
void count_occurrence();

int main() {
    int choice;

    do {
        system("cls");

        printf("\n*------Linked List------*\n");
        printf("1. Create\n");
        printf("2. Search by Position\n");
        printf("3. Count Occurrences\n");
        printf("4. Exit\n");
        printf("*-----------------------*\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                search_position();
                break;
            case 3:
                count_occurrence();
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

void search_position() {
    int pos, i = 1;

    if (start == NULL) {
        printf("\nList not found!");
    }
    else {
        printf("\nEnter the position to search: ");
        scanf("%d", &pos);

        temp = start;

        while (temp != NULL && i < pos) {
            temp = temp->add;
            i++;
        }

        if (temp == NULL || pos < 1) {
            printf("\nInvalid position!");
        }
        else {
            printf("\nNode found!");
            printf("\nValue at position %d is: %d", pos, temp->data);
        }
    }
}

void count_occurrence() {
    int value, count = 0;

    if (start == NULL) {
        printf("\nList not found!");
    }
    else {
        printf("\nEnter the value to count: ");
        scanf("%d", &value);

        temp = start;

        while (temp != NULL) {
            if (temp->data == value) {
                count++;
            }
            temp = temp->add;
        }

        printf("\nOccurrences of %d: %d", value, count);
    }
}
