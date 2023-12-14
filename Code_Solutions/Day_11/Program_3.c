/* Question 3: 
Write a C program to find the sum of all natural numbers between 1 and n.
*/

#include<stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the limit number n: ");
    scanf("%d", &n);

    printf("The Sum of all the natural numbers from 1 to %d: ", n);

    while(n>=1)
    {
        sum +=n;
        n--;
    }

    printf("%d", sum);
    return 0;
}
