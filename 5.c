#include <stdio.h>
#include <stdlib.h>  // For exit()

#define SIZE 10

// Function declarations
void push(int);
void pop();
void display();

int stack[SIZE];
int top = -1;

int main() {
    int value, choice;

    while (1) {
        printf("\n****** MENU ******\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong selection! Try again.\n");
        }
    }

    return 0;
}

void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack is full! Insertion not possible.\n");
    } else {
        top++;
        stack[top] = value;
        printf("Insertion successful!\n");
    }
}

void pop() {
    if (top == -1) {
        printf("Stack is empty! Deletion not possible.\n");
    } else {
        printf("Deleted: %d\n", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements are: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
