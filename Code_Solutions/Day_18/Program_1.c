/*Question 1:
Write a C program to find the second largest element in an array.
*/

#include<stdio.h>

int main()
{
    //Initialization Block
    int n, i, max2=0, max1=0;

    //Input Block
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int Ar[n];

    printf("Enter the values of the %d elements in the array: ", n);
    for(i=0; i<n ;i++)
    {
        scanf("%d", &Ar[i]);
    }

    //Second largest and Largest check Block
    for (i=0; i<n ;i++)
    {
        if(Ar[i] > max1)
        {
            max2 = max1;
            max1 = Ar[i];
        }
        else if(Ar[i] > max2 && Ar[i] < max1)
        {
            max2 = Ar[i];
        }
    }

    printf("The second largest element is: %d", max2);
    return 0;
}
