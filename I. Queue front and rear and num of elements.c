#include <stdio.h>
#include <stdlib.h>

int MAXSIZE;
int *cqueue;
int rear = -1, front = -1;

void insert();
void delete1();
void display();
void front_rear();
void num_of_elements();

int main() {
    int choice;

    printf("Enter queue size: ");
    scanf("%d", &MAXSIZE);

    cqueue = (int *)malloc(MAXSIZE * sizeof(int));

    do {
        system("cls");

        printf("\n----------Circular Queue----------\n");
        printf("1. Insert\n2. Delete\n3. Display\n");
        printf("4. Exit\n5. Front and Rear elements\n");
        printf("6. Number of elements\n");
        printf("-----------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;

            case 2:
                delete1();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("\nExiting program...\n");
                break;

            case 5:
                front_rear();
                break;

            case 6:
                num_of_elements();
                break;

            default:
                printf("\nInvalid choice!\n");
        }

        if (choice != 4) {
            printf("\nPress Enter to continue...");
            getchar();
            getchar();
        }

    } while (choice != 4);

}

void insert() {
    int n;

    if ((rear + 1) % MAXSIZE == front) {
        printf("\nQueue Overflow!\n");
    } else {
        printf("Enter your element: ");
        scanf("%d", &n);

        if (rear == -1 && front == -1) {
            rear = 0;
            front = 0;
        } else {
            rear = (rear + 1) % MAXSIZE;
        }

        cqueue[rear] = n;

        printf("Successfully inserted %d onto the queue.\n", n);
    }
}

void display() {
    int i;

    if (rear == -1 && front == -1) {
        printf("\nQueue Underflow (Empty)!\n");
    } else {
        printf("\n------Elements of queue------\n");

        for (i = front; i != rear; i = (i + 1) % MAXSIZE) {
            printf("%d ", cqueue[i]);
        }

        printf("%d\n", cqueue[i]);
    }
}

void delete1() {
    int m;

    if (rear == -1 && front == -1) {
        printf("\nQueue Underflow (Empty)!\n");
    } else {
        m = cqueue[front];

        printf("\nDeleted element: %d\n", m);

        if (rear == front) {
            rear = -1;
            front = -1;
        } else {
            front = (front + 1) % MAXSIZE;
        }
    }
}

void front_rear() {
    if (front == -1 && rear == -1) {
        printf("\nQueue is Empty!\n");
    } else {
        printf("\nFront element: %d\n", cqueue[front]);
        printf("Rear element: %d\n", cqueue[rear]);
    }
}

void num_of_elements() {
    int count;

    if (front == -1 && rear == -1) {
        count = 0;
    } else {
        count = (rear - front + MAXSIZE) % MAXSIZE + 1;
    }

    printf("\nNumber of elements: %d\n", count);
}


