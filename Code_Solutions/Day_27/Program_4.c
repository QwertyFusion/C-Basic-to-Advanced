/*Question 4:
In addition to the 9.1, perform the following menu driven operations on BST.
i. insert an element to the BST
ii. display the largest element
iii. display the smallest element
iv. height of a node
v. count number of leaf nodes
*/

#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the BST
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

// Function to insert an element into the BST
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    } else if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

// Function to find the largest element in the BST
int findLargest(struct Node* root) {
    if (root == NULL) {
        printf("BST is empty.\n");
        return -1;
    } else if (root->right == NULL) {
        return root->data;
    } else {
        return findLargest(root->right);
    }
}

// Function to find the smallest element in the BST
int findSmallest(struct Node* root) {
    if (root == NULL) {
        printf("BST is empty.\n");
        return -1;
    } else if (root->left == NULL) {
        return root->data;
    } else {
        return findSmallest(root->left);
    }
}

// Function to calculate the height of a node in the BST
int calculateHeight(struct Node* root) {
    if (root == NULL) {
        return -1;
    } else {
        int leftHeight = calculateHeight(root->left);
        int rightHeight = calculateHeight(root->right);
        return (leftHeight > rightHeight) ? leftHeight + 1 : rightHeight + 1;
    }
}

// Function to count the number of leaf nodes in the BST
int countLeafNodes(struct Node* root) {
    if (root == NULL) {
        return 0;
    } else if (root->left == NULL && root->right == NULL) {
        return 1;
    } else {
        return countLeafNodes(root->left) + countLeafNodes(root->right);
    }
}

// Function to display the BST in inorder traversal
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    struct Node* root = NULL;

    // Insert elements into the BST
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    // Display the largest element
    int largest = findLargest(root);
    printf("Largest element in the BST: %d\n", largest);

    // Display the smallest element
    int smallest = findSmallest(root);
    printf("Smallest element in the BST: %d\n", smallest);

    // Calculate the height of a node
    int height = calculateHeight(root);
    printf("Height of the BST: %d\n", height);

    // Count the number of leaf nodes
    int leafCount = countLeafNodes(root);
    printf("Number of leaf nodes in the BST: %d\n", leafCount);

    // Display the BST in inorder traversal
    printf("BST elements in inorder traversal: ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
