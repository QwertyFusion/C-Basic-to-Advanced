/*Question 3:
Write a C program to calculate factorial of a number.
*/

#include<stdio.h>

int main()
{
    int i, n, fac=1;
    printf("Enter the number to find its factorial: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        fac*=i;
    }

    printf("The factorial of %d = %d", n, fac);
    return 0;
}
