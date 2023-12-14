/* Question 1: 
Write a C program to print all natural numbers from 1 to n. - using while loop.
*/

#include <stdio.h>
int main()
{
    int n, i=1;
    printf("Enter the limit number n: ");
    scanf("%d", &n);

    printf("The series:\n");

    while(n>=1)
    {
        printf("%d\t", i);
        n--;
        i++;
    }
    return 0;
}

