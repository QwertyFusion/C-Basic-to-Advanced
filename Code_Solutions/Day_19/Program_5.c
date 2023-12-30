/** Question 5:
 * C program to check whether a matrix is Identity matrix or not.
 */

#include <stdio.h>
#define SIZE 3 // Matrix size

int main()
{
    int A[SIZE][SIZE];
    int row, col, isIdentity;

    /* Input elements in matrix from user */
    printf("Enter elements in matrix of size 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Check whether it is Identity matrix or not */
    isIdentity = 1;
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {

            if(row==col && A[row][col]!=1)
            {
                /* If elements of main diagonal is not equal to 1 */
                isIdentity = 0;
            }
            else if(row!=col && A[row][col]!=0)
            {
                /* If other elements than main diagonal is not equal to 0 */
                isIdentity = 0;
            }
        }
    }

    /* If it is an Identity matrix */
    if(isIdentity == 1)
    {
        printf("\nThe given matrix is an Identity Matrix.\n");

        /*
         * Print the Identity matrix
         */
        for(row=0; row<SIZE; row++)
        {
            for(col=0; col<SIZE; col++)
            {
                printf("%d ", A[row][col]);
            }

            printf("\n");
        }
    }
    else
    {
        printf("The given matrix is not Identity Matrix");
    }

    return 0;
}
