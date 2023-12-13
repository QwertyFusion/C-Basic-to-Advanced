/* Question 1:
WAP to check whether a number is even or odd.
*/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num%2==0)
    {
        printf("%d is an EVEN integer.", num);
    }
    else
    {
        printf("%d is an ODD integer.", num);
    }
    return 0;
}
