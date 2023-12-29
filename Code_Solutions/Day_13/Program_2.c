/*Question 2:
Write a C program to find all factors of a number.
*/

#include<stdio.h>

int main()
{
    int i, n;
    printf("Enter the number to find its factors: ");
    scanf("%d", &n);

    printf("The factors of %d are as follows:\n", n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}
