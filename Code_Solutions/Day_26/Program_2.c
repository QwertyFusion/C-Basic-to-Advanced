/*Question 2:
Write a menu driven program to implement linear queue operations such as Enqueue, Dequeue,
IsEmpty, Traverse using single linked list.*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    printf("Enqueued successfully: %d\n", value);
}

void dequeue()
{
    if (front == NULL)
    {
        printf("Queue is empty. Cannot dequeue.\n");
    }
    else
    {
        struct Node* temp = front;
        printf("Dequeued element: %d\n", temp->data);

        if (front == rear)
        {
            front = rear = NULL;
        }
        else
        {
            front = front->next;
        }

        free(temp);
    }
}

void traverse()
{
    if (front == NULL)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        struct Node* current = front;
        printf("Queue elements: ");
        while (current != NULL)
        {
            printf("%d\t", current->data);
            current = current->next;
        }
        printf("\n");
    }
}

int isEmpty()
{
    return (front == NULL);
}

int main()
{
    int choice, value;

    do
    {
        printf("\n------ Queue Menu ------\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Traverse\n");
        printf("4. IsEmpty\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                traverse();
                break;

            case 4:
                if (isEmpty())
                {
                    printf("Queue is empty.\n");
                }
                else
                {
                    printf("Queue is not empty.\n");
                }
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }
    while (choice != 5);

    return 0;
}
