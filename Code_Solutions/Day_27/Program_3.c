/*Question 3:
Write a program to create a binary search tree of n data elements using linked list and perform the
following menu driven operations:
i. preorder traversal
ii. postorder traversal
iii. inorder traversal
iv. search an element
*/
#include <stdio.h>
#include <stdlib.h>

// Structure for tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the binary search tree
struct Node* insertNode(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }
    return root;
}

// Function for preorder traversal
void preorderTraversal(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// Function for postorder traversal
void postorderTraversal(struct Node* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

// Function for inorder traversal
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Function to search for an element in the binary search tree
struct Node* searchElement(struct Node* root, int data) {
    if (root == NULL || root->data == data) {
        return root;
    }
    if (data < root->data) {
        return searchElement(root->left, data);
    }
    return searchElement(root->right, data);
}

int main() {
    struct Node* root = NULL;
    int choice, data;

    do {
        printf("\nMenu:\n");
        printf("1. Insert element\n");
        printf("2. Preorder traversal\n");
        printf("3. Postorder traversal\n");
        printf("4. Inorder traversal\n");
        printf("5. Search element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &data);
                root = insertNode(root, data);
                break;
            case 2:
                printf("Preorder traversal: ");
                preorderTraversal(root);
                printf("\n");
                break;
            case 3:
                printf("Postorder traversal: ");
                postorderTraversal(root);
                printf("\n");
                break;
            case 4:
                printf("Inorder traversal: ");
                inorderTraversal(root);
                printf("\n");
                break;
            case 5:
                printf("Enter element to search: ");
                scanf("%d", &data);
                if (searchElement(root, data) != NULL) {
                    printf("Element found\n");
                } else {
                    printf("Element not found\n");
                }
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 6);

    return 0;
}
