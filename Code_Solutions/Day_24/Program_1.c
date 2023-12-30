/*Question 1:
Write a program to create a double linked list and perform the following menu based operations on it:
i. insert an element at specific position
ii. delete an element from specific position
iii. Traverse the list*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head = NULL;

// Function to insert an element at a specific position
void insert(int data, int position)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (position == 1)
    {
        newNode->next = head;
        newNode->prev = NULL;
        if (head != NULL)
        {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }

    struct Node* temp = head;
    for (int i = 1; i < position - 1; i++)
    {
        if (temp == NULL)
        {
            printf("Invalid position!\n");
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid position!\n");
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}

// Function to delete an element from a specific position
void delete(int position)
{
    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = head;

    if (position == 1)
    {
        head = temp->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        free(temp);
        return;
    }

    for (int i = 1; i < position; i++)
    {
        if (temp == NULL)
        {
            printf("Invalid position!\n");
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid position!\n");
        return;
    }

    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }
    free(temp);
}

// Function to traverse and print the list
void traverse()
{
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int choice, data, position;

    do
    {
        printf("\nMenu:\n");
        printf("1. Insert element\n");
        printf("2. Delete element\n");
        printf("3. Traverse list\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                printf("Enter position: ");
                scanf("%d", &position);
                insert(data, position);
                break;
            case 2:
                printf("Enter position: ");
                scanf("%d", &position);
                delete(position);
                break;
            case 3:
                traverse();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    while (choice != 4);

    return 0;
}
