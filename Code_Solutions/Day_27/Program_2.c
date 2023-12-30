/*Question 2:
Write a menu driven program to implement priority queue operations such as Enqueue, Dequeue,
Traverse using linked list.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    int priority;
    struct Node* next;
};

struct Node* front = NULL;

void enqueue(int data, int priority) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->priority = priority;
    newNode->next = NULL;

    if (front == NULL || priority < front->priority) {
        newNode->next = front;
        front = newNode;
    } else {
        struct Node* temp = front;
        while (temp->next != NULL && temp->next->priority <= priority) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

int dequeue() {
    if (front == NULL) {
        printf("Priority queue is empty.\n");
        return -1;
    }

    struct Node* temp = front;
    int data = temp->data;
    front = front->next;
    free(temp);
    return data;
}

void traverse() {
    if (front == NULL) {
        printf("Priority queue is empty.\n");
        return;
    }

    struct Node* temp = front;
    printf("Priority queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice, data, priority;

    while (1) {
        printf("Priority Queue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data and priority: ");
                scanf("%d %d", &data, &priority);
                enqueue(data, priority);
                break;
            case 2:
                data = dequeue();
                if (data != -1) {
                    printf("Dequeued element: %d\n", data);
                }
                break;
            case 3:
                traverse();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
