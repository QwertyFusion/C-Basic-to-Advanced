/* Question 3:
WAP to perform the following operations on a give square matrix using function
i) Find the number of non-zero elements
ii) Display the upper triangular matrix
iii) Display the elements just above and below the main diagonal*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the square n*n matrix, n: ");
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

    printf("\nOUTPUT BLOCK:\n");
    //Assignment i
    int count=0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(matrix[i][j] !=0)
            {
                count++;
            }
        }
    }
    printf("i) The number of non-zero elements: %d", count);

    //Assignment ii
    printf("\nii) The Upper Triangular Matrix is:\n");
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(j>= i)
            {
                printf("%d\t", matrix[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }

    //Assignment iii
    printf("iii) The Elements of the Matrix which are above and below the diagonal are:\n");
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(j>i || j<i)
            {
                printf("%d\t", matrix[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
