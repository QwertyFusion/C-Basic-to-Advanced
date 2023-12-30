/*Question 5:
Write a C program to find the reverse use of an array.
*/

#include<stdio.h>

int main()
{
    //Initialization Block
    int n, i;

    //Input Block
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int Ar1[n], Ar2[n];

    printf("Enter the values of the %d elements in the array: ", n);
    for(i=0; i<n ;i++)
    {
        scanf("%d", &Ar1[i]);
    }

    //Copying the array to a new one
    for (i=0; i<n ; i++)
    {
        Ar2[n-i-1] = Ar1[i];
    }

    //Original Array
    printf("\nOriginal Array:\n");
    for(i=0; i<n ;i++)
    {
        printf("%d\n", Ar1[i]);
    }

    //Copied Array
    printf("\nCopied Array:\n");
    for(i=0; i<n ;i++)
    {
        printf("%d\n", Ar2[i]);
    }
    return 0;
}
