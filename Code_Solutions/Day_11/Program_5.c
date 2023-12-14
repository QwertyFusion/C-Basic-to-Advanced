/* Question 5: 
Write a C program to count the number of digits in a number.
*/

#include <stdio.h>
int main()
{
    int n, count=0;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("The number of digits: ");

    while(n>=1)
    {
        count++;
        n/=10;
    }
    printf("%d", count);
    return 0;
}
