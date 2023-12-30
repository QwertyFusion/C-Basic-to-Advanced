/* Question 3:
Write a menu driven program to implement circular queue operations such as Enqueue, Dequeue,
Traverse, IsEmpty, IsFull using array.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1, rear = -1;

int isFull()
{
    return ((rear + 1) % MAX_SIZE == front);
}

int isEmpty()
{
    return (front == -1 && rear == -1);
}

void enqueue(int value)
{
    if (isFull())
    {
        printf("Queue is full. Cannot enqueue.\n");
    }
    else
    {
        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % MAX_SIZE;
        }
        queue[rear] = value;
        printf("Enqueued successfully: %d\n", value);
    }
}

void dequeue()
{
    if (isEmpty())
    {
        printf("Queue is empty. Cannot dequeue.\n");
    }
    else
    {
        printf("Dequeued element: %d\n", queue[front]);
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % MAX_SIZE;
        }
    }
}

void traverse()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements: ");
        int i = front;
        do
        {
            printf("%d ", queue[i]);
            i = (i + 1) % MAX_SIZE;
        }
        while (i != (rear + 1) % MAX_SIZE);
        printf("\n");
    }
}

int main()
{
    int choice, value;

    do
    {
        printf("\n------ Circular Queue Menu ------\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Traverse\n");
        printf("4. IsEmpty\n");
        printf("5. IsFull\n");
        printf("6. Exit\n");
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
                if (isFull())
                {
                    printf("Queue is full.\n");
                }
                else
                {
                    printf("Queue is not full.\n");
                }
                break;

            case 6:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }
    while (choice != 6);

    return 0;
}
