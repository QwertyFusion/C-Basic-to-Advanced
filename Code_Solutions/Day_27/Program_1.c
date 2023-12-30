/*Question 1:
Write a menu driven program to implement Deques (both Inputrestricted and output-restricted) and
performed operations such as Enqueue, Dequeue, Peek, IsEmpty, IsFull using static array.
*/

#include <stdio.h>
#define MAX_SIZE 100

int deque[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue_input_restricted(int element) {
    if (rear == MAX_SIZE - 1) {
        printf("Deque is full. Cannot enqueue.\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    deque[rear] = element;
}

void enqueue_output_restricted(int element) {
    if (front == 0 && rear == MAX_SIZE - 1) {
        printf("Deque is full. Cannot enqueue.\n");
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else if (rear == MAX_SIZE - 1) {
        rear = 0;
    } else {
        rear++;
    }
    deque[rear] = element;
}

void dequeue_input_restricted() {
    if (front == -1) {
        printf("Deque is empty. Cannot dequeue.\n");
        return;
    }
    printf("Dequeued element: %d\n", deque[front]);
    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}

void dequeue_output_restricted() {
    if (front == -1) {
        printf("Deque is empty. Cannot dequeue.\n");
        return;
    }
    printf("Dequeued element: %d\n", deque[rear]);
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = MAX_SIZE - 1;
    } else {
        rear--;
    }
}

void peek_input_restricted() {
    if (front == -1) {
        printf("Deque is empty. Cannot peek.\n");
        return;
    }
    printf("Front element: %d\n", deque[front]);
}

void peek_output_restricted() {
    if (front == -1) {
        printf("Deque is empty. Cannot peek.\n");
        return;
    }
    printf("Rear element: %d\n", deque[rear]);
}

int is_empty() {
    return front == -1;
}

int is_full() {
    return (front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1);
}

int main() {
    int choice, element;

    do {
        printf("Menu:\n");
        printf("1. Enqueue (Input-restricted)\n");
        printf("2. Enqueue (Output-restricted)\n");
        printf("3. Dequeue (Input-restricted)\n");
        printf("4. Dequeue (Output-restricted)\n");
        printf("5. Peek (Input-restricted)\n");
        printf("6. Peek (Output-restricted)\n");
        printf("7. Is Empty?\n");
        printf("8. Is Full?\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to enqueue: ");
                scanf("%d", &element);
                enqueue_input_restricted(element);
                break;
            case 2:
                printf("Enter element to enqueue: ");
                scanf("%d", &element);
                enqueue_output_restricted(element);
                break;
            case 3:
                dequeue_input_restricted();
                break;
            case 4:
                dequeue_output_restricted();
                break;
            case 5:
                peek_input_restricted();
                break;
            case 6:
                peek_output_restricted();
                break;
            case 7:
                printf("Is empty: %s\n", is_empty() ? "Yes" : "No");
                break;
            case 8:
                printf("Is full: %s\n", is_full() ? "Yes" : "No");
                break;
            case 9:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        printf("\n");
    } while (choice != 9);

    return 0;
}
