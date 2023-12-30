/*Question 2:
In addition to Program 1, perform following operations using function on the single linked list:
i. search an element in the list
ii. sort the list in ascending order
iii. reverse the list*/

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node
{
    int data;
    struct Node* next;
};

// Function to create a new node with the given data
struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the list
void insertNode(struct Node** head, int data)
{
    struct Node* newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Node* current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to search for an element in the list
int searchElement(struct Node* head, int key)
{
    struct Node* current = head;
    int position = 1;
    while (current != NULL)
    {
        if (current->data == key)
        {
            return position;
        }
        current = current->next;
        position++;
    }
    return -1; // Element not found
}

// Function to sort the list in ascending order (bubble sort)
void sortList(struct Node** head)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        return; // List is empty or has only one element, so it's already sorted
    }

    int swapped;
    struct Node* temp;
    struct Node* lastNode = NULL;

    do
    {
        swapped = 0;
        struct Node* current = *head;

        while (current->next != lastNode)
        {
            if (current->data > current->next->data)
            {
                // Swap data
                int tempData = current->data;
                current->data = current->next->data;
                current->next->data = tempData;
                swapped = 1;
            }
            current = current->next;
        }
        lastNode = current;
    } while (swapped);
}

// Function to reverse the list
void reverseList(struct Node** head)
{
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

// Function to traverse and print the linked list
void traverse(struct Node* head)
{
    struct Node* current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node* head = NULL;
    int choice, data, key;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Insert a node\n");
        printf("2. Search an element\n");
        printf("3. Sort the list\n");
        printf("4. Reverse the list\n");
        printf("5. Traverse the list\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertNode(&head, data);
                break;
            case 2:
                printf("Enter element to search: ");
                scanf("%d", &key);
                int position = searchElement(head, key);
                if (position != -1)
                {
                    printf("Element found at position %d\n", position);
                }
                else
                {
                    printf("Element not found in the list\n");
                }
                break;
            case 3:
                sortList(&head);
                printf("List sorted in ascending order.\n");
                break;
            case 4:
                reverseList(&head);
                printf("List reversed.\n");
                break;
            case 5:
                printf("Linked List: ");
                traverse(head);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
