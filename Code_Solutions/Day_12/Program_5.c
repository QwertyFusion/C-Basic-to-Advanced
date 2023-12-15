/*Question 5: 
Write a C program to print the Fibonacci series up to n terms.
*/

#include <stdio.h>

int main()
{
    int a=0, b=1, c=0, i, terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci terms: \n");

    for(i=1; i<=terms; i++)
    {
        printf("%d, ", c);

        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}
