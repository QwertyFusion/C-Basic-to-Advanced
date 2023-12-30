/* Question 1:
 * C program to find transpose of a matrix.
 */

#include <stdio.h>
#define MAX_ROWS 3
#define MAX_COLS 3

int main()
{
    int A[MAX_ROWS][MAX_COLS];  // Original matrix
    int B[MAX_COLS][MAX_ROWS];  // Transpose matrix

    int row, col;

    /* Input elements in matrix A from user */
    printf("Enter elements in matrix of size %dx%d: \n", MAX_ROWS, MAX_COLS);
    for(row=0; row<MAX_ROWS; row++)
    {
        for(col=0; col<MAX_COLS; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /*
     * Find transpose of matrix A
     */
    for(row=0; row<MAX_ROWS; row++)
    {
        for(col=0; col<MAX_COLS; col++)
        {
            /* Store each row of matrix A to each column of matrix B */
            B[col][row] = A[row][col];
        }
    }

    /* Print the original matrix A */
    printf("\nOriginal matrix: \n");
    for(row=0; row<MAX_ROWS; row++)
    {
        for(col=0; col<MAX_COLS; col++)
        {
            printf("%d ", A[row][col]);
        }

        printf("\n");
    }

    /* Print the transpose of matrix A */
    printf("Transpose of matrix A: \n");
    for(row=0; row<MAX_COLS; row++)
    {
        for(col=0; col<MAX_ROWS; col++)
        {
            printf("%d ", B[row][col]);
        }

        printf("\n");
    }

    return 0;
}
