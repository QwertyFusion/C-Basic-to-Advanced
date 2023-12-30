/*Question 3:
Write a program to represent the given sparse matrix using header single linked list and display it.
*/

#include <stdio.h>
#include <stdlib.h>

int r, c;

// Structure for a node in the linked list
struct Node
{
    int row;
    int col;
    int value;
    struct Node* next;
};

// Structure for a header node for rows and columns
struct HeaderNode
{
    int count; // Number of non-zero elements in the row/column
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int row, int col, int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->row = row;
    newNode->col = col;
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the linked list
void insertNode(struct Node** head, int row, int col, int value)
{
    struct Node* newNode = createNode(row, col, value);
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Node* temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to create and display the sparse matrix
void createAndDisplaySparseMatrix(int matrix[r][c], int rows, int cols)
{
    struct HeaderNode* rowHeaders[rows];
    struct HeaderNode* colHeaders[cols];

    // Initialize header nodes for rows and columns
    for (int i = 0; i < r; i++)
    {
        rowHeaders[i] = (struct HeaderNode*)malloc(sizeof(struct HeaderNode));
        rowHeaders[i]->count = 0;
        rowHeaders[i]->next = NULL;
    }
    for (int j = 0; j < c; j++)
    {
        colHeaders[j] = (struct HeaderNode*)malloc(sizeof(struct HeaderNode));
        colHeaders[j]->count = 0;
        colHeaders[j]->next = NULL;
    }

    // Populate the linked list with non-zero elements from the matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matrix[i][j] != 0)
            {
                insertNode(&(rowHeaders[i]->next), i, j, matrix[i][j]);
                insertNode(&(colHeaders[j]->next), i, j, matrix[i][j]);
                rowHeaders[i]->count++;
                colHeaders[j]->count++;
            }
        }
    }

    // Display the sparse matrix
    printf("Sparse Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        struct Node* current = rowHeaders[i]->next;
        for (int j = 0; j < c; j++)
        {
            if (current != NULL && current->col == j)
            {
                printf("%d\t", current->value);
                current = current->next;
            }
            else
            {
                printf("0\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    input(); //Input Block

    int mat[r][c]; //Matrix Initialization

    //Setting Initial Matrix Values to 0
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            mat[i][j] = 0;
        }
    }

    printf("Total Number of Elements: %d", (r*c));
    printf("\nEnter the row index position, column index position and value correspondingly:\n");
    for(int i=0; ; i++)
    {
        int rpos, cpos, check = 1;
        printf("Element %d details: ", (i+1));
        scanf("%d", &rpos);
        scanf("%d", &cpos);
        scanf("%d", &mat[rpos][cpos]);
        printf("Any other element? (Y = 1/N = 0) ");
        scanf("%d", &check);
        if(check == 0)
        {
            break;
        }
    }

    createAndDisplaySparseMatrix(mat, r, c);

    return 0;
}

void input()
{
    printf("Enter the total number of rows and columns: \nrow = ");
    scanf("%d",&r);
    printf("column = ");
    scanf("%d",&c);
}
