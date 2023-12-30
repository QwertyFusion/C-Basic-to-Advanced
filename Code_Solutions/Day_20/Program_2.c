/*Question 2:
WAP to construct an n*n matrix and find the sum of the diagonals.
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the square n*n matrix, n : ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("\nMATRIX INPUT BLOCK\n");
    printf("Enter the element values of the %d * %d matrix (Row Major Order):\n", n, n);

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
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

    int maj_sum=0, min_sum=0;
    //Sum of Major Diagonal Elements
    for(int i = 0; i<n; i++)
    {
        maj_sum+=matrix[i][i];
    }
    printf("\nThe Sum of the Major Diagonal Elements: %d", maj_sum);

    //Sum of Minor Diagonal Elements
    for(int i = 0; i<n; i++)
    {
        min_sum+=matrix[i][n-i-1];
    }
    printf("\nThe Sum of the Minor Diagonal Elements: %d", min_sum);
}
