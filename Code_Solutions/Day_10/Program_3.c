/* Question 3:
Write a C program to enter a number and print its reverse.
*/

#include <stdio.h>
int main()
{
    int n, rev=0;
    printf("Enter the number: ");
    scanf("%d", &n);

    while(n>=1)
    {
        rev = rev*10 + n%10;
        n/=10;
    }
    printf("The reverse of the number: %d", rev);
    return 0;
}
