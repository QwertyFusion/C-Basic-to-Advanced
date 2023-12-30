/*Question 4:
WAP to find the transpose of a matrix.
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the square n*x matrix, n : ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("\nMATRIX INPUT BLOCK\n");
    printf("Enter the element values of the %d * %d matrix:\n", n, n);

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            printf("Enter the value of the element at pos [%d, %d]: ", (i+1), (j+1));
            scanf("%d", &matrix[i][j]);
        }
    }

    //Display of the Matrix
    printf("\nThe Matrix:\n");
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    //Transpose Of Matrix
    int temp;
    int transpose[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            transpose[j][i] = matrix [i][j];
        }
    }

    //Display of the Transposed Matrix
    printf("\nThe Transposed Matrix:\n");
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}
