/*Question 1:
Write a menu driven program to create a linear queue using array and perform Enqueue, Dequeue,
Traverse, IsEmpty, IsFull operations.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1, rear = -1;

void Enqueue(int value)
{
    if(IsFull()) //Check is queue is full
    {
        printf("Cannot perform Enqueue of %d. Queue is full.\n", value);
        return;
    }
    if(IsEmpty()) //Check is queue was initially empty
    {
        front++;
    }
    queue[++rear] = value;
    printf("Value(%d) enqueued successfully!\n", value);
}

void Dequeue()
{
    if(IsEmpty()) //Check is queue is empty
    {
        printf("Cannot perform Dequeue. Queue is Empty.\n");
        return;
    }

    printf("Dequeued Element: %d\n", queue[rear]);

    if(front == rear) //Check if last element from queue or not
    {
        front = rear = -1;
        return;
    }

    front++;
}

void Traverse()
{
    if(IsEmpty()) //Check if queue is empty
    {
        printf("Empty Queue.");
        return;
    }

    printf("Stack Elements:\n");
    for(int i = front; i<=rear; i++)
    {
        printf("%d\t", queue[i]);
    }
}

int IsEmpty()
{
    return (front==-1);
}

int IsFull()
{
    return (rear==MAX_SIZE-1);
}

void main()
{
    int choice, value;
    do
    {
        printf("\n------ Queue Menu ------\n");
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
                Enqueue(value);
                break;

            case 2:
                Dequeue();
                break;

            case 3:
                Traverse();
                break;

            case 4:
                if (IsEmpty())
                {
                    printf("Queue is empty.\n");
                }
                else
                {
                    printf("Queue is not empty.\n");
                }
                break;
            case 5:
                if (IsFull())
                {
                    printf("Queue is full.\n");
                }
                else
                {
                    printf("Queue is not full.\n");
                }
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }
    while (choice != 6);
}
