/*Question 5:
In addition to 9.2, perform deletion of an element in the BST using function.
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

// Function to delete an element from the BST
struct Node* deleteNode(struct Node* root, int data) {
if (root == NULL) {
return root;
} else if (data < root->data) {
root->left = deleteNode(root->left, data);
} else if (data > root->data) {
root->right = deleteNode(root->right, data);
} else {
// Case 1: No child or only one child
if (root->left == NULL) {
struct Node* temp = root->right;
free(root);
return temp;
} else if (root->right == NULL) {
struct Node* temp = root->left;
free(root);
return temp;
}

    // Case 2: Two children
    struct Node* temp = findSmallestNode(root->right);
    root->data = temp->data;
    root->right = deleteNode(root->right, temp->data);
}
return root;
}

// Function to find the smallest node in the BST
struct Node* findSmallestNode(struct Node* root) {
struct Node* current = root;
while (current && current->left != NULL) {
current = current->left;
}
return current;
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

// Delete an element from the BST
int elementToDelete = 30;
root = deleteNode(root, elementToDelete);
printf("Deleted element %d from the BST.\n", elementToDelete);

// Display the BST after deletion
printf("BST elements after deletion: ");
inorderTraversal(root);
printf("\n");

return 0;
}
