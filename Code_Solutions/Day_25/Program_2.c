/*Question 2:
Write a menu driven program to create a stack using linked list and perform the following operation
using function
a. Push
b. Pop
c. IsEmpty
d. display the stack elements*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int item)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = item;
    newNode->next = top;
    top = newNode;
    printf("%d pushed onto the stack.\n", item);
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack is empty. Pop operation Failed!\n");
        return;
    }
    struct Node* temp = top;
    top = top->next;
    free(temp);
    printf("Element popped from the stack.\n");
}

int isEmpty()
{
    return top == NULL;
}

// Function to display the stack elements
void display()
{
    struct Node* current = top;
    if (current == NULL)
    {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements: ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    int ch, item;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. IsEmpty\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("Enter an element to push onto the stack: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                if (isEmpty())
                    printf("Stack is empty!\n");
                else
                    printf("Stack is not empty!\n");
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again with values from 1 to 5.\n");
        }
    }

    return 0;
}
