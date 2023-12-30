/*Question 1:
Write a menu driven program to create a stack using array and perform the following operation using
function
a. Push
b. Pop
c. check stack is empty or not
d. check stack is full or not
e. display stack elements*/

#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

void push(int element)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Stack is full. Push operation failed!\n");
    }
    else
    {
        top++;
        stack[top] = element;
        printf("%d pushed onto the stack.\n", element);
    }
}


void pop()
{
    if (top == -1)
    {
        printf("Stack is empty. Pop operation failed!\n");
    }
    else
    {
        printf("%d popped from the stack.\n", stack[top]);
        top--;
    }
}


bool isEmpty()
{
    return top == -1;
}


bool isFull()
{
    return top == MAX_SIZE - 1;
}


void displayStack()
{
    if (isEmpty())
    {
        printf("Stack is empty!\n");
    }
    else
    {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int ch, element;

    while (1)
    {
        printf("\nOperations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Check if stack is empty\n");
        printf("4. Check if stack is full\n");
        printf("5. Display stack elements\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("Enter the value of the element to push onto the stack: ");
                scanf("%d", &element);
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                if (isEmpty())
                {
                    printf("Stack is empty!\n");
                }
                else
                {
                    printf("Stack is not empty!\n");
                }
                break;
            case 4:
                if (isFull())
                {
                    printf("Stack is full!\n");
                }
                else
                {
                    printf("Stack is not full!\n");
                }
                break;
            case 5:
                displayStack();
                break;
            case 6:
                printf("Exiting program…\n");
                return 0;
                break;
            default:
                printf("Invalid choice. Please try again with choice value from 1 to 6.\n");
                break;
        }
    }
    return 0;
}
