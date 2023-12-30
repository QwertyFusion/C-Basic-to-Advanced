/*Question 4:
Write a C program to delete all duplicate elements from an array.
*/

#include <stdio.h>
int main ()
{
    //Initialization Block
    int n, i, j, k;

    //Input Block
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int Ar1[n];

    printf("Enter the values of the %d elements in the array: ", n);
    for(i=0; i<n ;i++)
    {
        scanf("%d", &Ar1[i]);
    }

    //Original Array
    printf("\nOriginal Array:\n");
    for(i=0; i<n ;i++)
    {
        printf("%d\t", Ar1[i]);
    }

    //Checking and Deletion Block
    for(i=0;i<n;i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(Ar1[i] == Ar1[j])
            {
                for(k = j; k <n; k++)
                {
                    Ar1[k] = Ar1[k+1];
                }
                j--;
                n--;
            }
        }
    }
    printf("\nAfter deleting the duplicate element the Array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",Ar1[i]);
    }
    return 0;
}
