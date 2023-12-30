/*Question 2:
Write a C program to insert an element in an array.
*/

#include<stdio.h>

int main()
{
    //Initialization Block
    int n, i, pos, num;

    //Input Block
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int Ar1[n], Ar2[n+1];

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

    //Element enter block
    printf("\nEnter the position of the element in the array 1 to %d: ", (n+1));
    scanf("%d", &pos);
    printf("Enter the new value of the element: ");
    scanf("%d", &num);
    pos--;

    if(pos>n)
    {
        printf("Error: The position is invalid. Exiting...");
        return 0;
    }

    //Copying the array to a new one
    for (i=0; i<pos ; i++)
    {
        Ar2[i] = Ar1[i];
    }

    Ar2[pos] = num;

    for (i=pos+1; i<n+1 ; i++)
    {
        Ar2[i] = Ar1[i-1];
    }

    //Original Array
    printf("\nModified Array:\n");
    for(i=0; i<n+1 ;i++)
    {
        printf("%d\t", Ar2[i]);
    }

    return 0;
}
