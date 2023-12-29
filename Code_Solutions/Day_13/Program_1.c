/*Question 1:
Write a C program to find power of a number using for loop.
*/

#include<stdio.h>

int main()
{
    int i, n, p, pow=1;
    printf("Enter the number and the power: ");
    scanf("%d %d", &n, &p);

    for(i=1; i<=p; i++)
    {
        pow*=n;
    }

    printf("%d ^ %d = %d", n, p, pow);
    return 0;
}
