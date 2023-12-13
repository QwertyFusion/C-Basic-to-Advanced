/* Question 4:
Write a C program to check whether a number is a palindrome or not.
*/

#include<stdio.h>
int main()
{
    int num, n=0, rev=0;
    printf("Enter the number: ");
    scanf("%d", &num);

    n=num;

    while(n>=1)
    {
        rev = rev*10 + n%10;
        n/=10;
    }
    printf("The reverse of the number: %d\n", rev);

    if(num == rev)
    {
        printf("The number is Palindrome!");
    }
    else
    {
        printf("The number is NOT Palindrome!");
    }

    return 0;
}
