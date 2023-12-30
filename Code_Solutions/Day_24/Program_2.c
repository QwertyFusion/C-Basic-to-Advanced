/*Question 2:
Write a program to create a circular linked list and display the elements of the list.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

// Function to insert a node at the end of the circular linked list
struct Node* insertEnd(struct Node* last, int data)
{
    if (last == NULL)
    {
        // If the list is empty, create the first node
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = newNode; // Point to itself
        return newNode;
    }
    else
    {
        // Create a new node
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = last->next; // Make it point to the first node

        // Connect the last node to the new node
        last->next = newNode;

        // Update the last node to the new node
        last = newNode;

        return last;
    }
}

// Function to display elements of the circular linked list
void display(struct Node* last)
{
    if (last == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = last->next; // Start from the first node

    printf("Circular Linked List: ");
    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != last->next); // Continue until we reach the first node again

    printf("\n");
}

int main()
{
    struct Node* last = NULL;
    int data, n;

    printf("Enter the number of elements in the circular linked list: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        last = insertEnd(last, data);
    }

    display(last);

    return 0;
}
