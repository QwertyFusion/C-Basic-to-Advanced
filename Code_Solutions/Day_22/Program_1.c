/*Question 1: 
WAP to perform transpose of a given sparse matrix in 3-tuple format.
*/

#include<stdio.h>

// GLOBAL VARIABLES
int r, c;

void main()
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

    //Printing in 3 Tuple Format
    printf("\nThe Matix in 3 Tuple Format:\n");
    print(r, c, mat);

    //Transposing the Original Matrix
    int temp;
    int transpose[c][r];
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            transpose[j][i] = mat[i][j];
        }
    }

    //Printing in 3 Tuple Format
    printf("\nThe Transposed Matix in 3 Tuple Format:\n");
    print(c, r, transpose);

}

void input()
{
    printf("Enter the total number of rows and columns: \nrow = ");
    scanf("%d",&r);
    printf("column = ");
    scanf("%d",&c);
}

void print(int a, int b, int ar[a][b])
{
    printf("ROW\tCOLUMN\tVALUE\n");
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(ar[i][j]!=0)
            {
                printf("%d\t%d\t%d\n", i, j, ar[i][j]);
            }
        }
    }
}

