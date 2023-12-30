/*Question 2: 
WAP to perform addition of two given sparse matrix in 3–tuple format.
*/

#include<stdio.h>

void main()
{
    //FIRST SPARSE MATRIX INPUT
    printf("FIRST SPARSE MATRIX INPUT BLOCK\n");
    int r, c;
    printf("Enter the total number of rows and columns: \nrow = ");
    scanf("%d",&r);
    printf("column = ");
    scanf("%d",&c);

    int mat[r][c];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            mat[i][j] = 0;
        }
    }

    printf("Enter the row index position, column index position and value correspondingly:\n");

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

    //SECOND SPARSE MATRIX INPUT
    printf("SECOND SPARSE MATRIX INPUT BLOCK\n");
    int r2, c2;
    printf("Enter the total number of rows and columns: \nrow = ");
    scanf("%d",&r2);
    printf("column = ");
    scanf("%d",&c2);

    int mat2[r2][c2];

    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            mat2[i][j] = 0;
        }
    }

    printf("Enter the row index position, column index position and value correspondingly:\n");

    for(int i=0; ; i++)
    {
        int rpos2, cpos2, check2 = 1;
        printf("Element %d details: ", (i+1));
        scanf("%d", &rpos2);
        scanf("%d", &cpos2);
        scanf("%d", &mat2[rpos2][cpos2]);
        printf("Any other element? (Y = 1/N = 0) ");
        scanf("%d", &check2);
        if(check2 == 0)
        {
            break;
        }
    }

    //Printing in 3 Tuple Format
    printf("\nThe Matix 1 in 3 Tuple Format:\n");
    display(r, c, mat);

    //Printing in 3 Tuple Format
    printf("\nThe Matix 2 in 3 Tuple Format:\n");
    display(r2, c2, mat2);

    int rf=(r>r2)?r:r2, cf=(c>c2)?c:c2; //TERNARY OPERATOR

    //Initializing and assigning addition values to addition matrix
    int matadd[rf][cf];

    for(int i=0; i<rf; i++)
    {
        for(int j=0; j<cf; j++)
        {
            matadd[i][j] = 0; //All elements will be zero initially
            if(i<r && j<c)
            {
                matadd[i][j] += mat[i][j]; //Addition of matrix 1 element to 0
            }
            if(i<r2 && j<c2)
            {
                matadd[i][j] += mat2[i][j]; //Addition of matrix 2 element
            }
        }
    }

    //Printing in 3 Tuple Format
    printf("\nThe Addition Result in 3 Tuple Format:\n");
    display(rf, cf, matadd);
}

void display(int a, int b, int ar[a][b])
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
