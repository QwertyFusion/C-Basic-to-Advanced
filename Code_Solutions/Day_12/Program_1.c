/*Question 1: 
Write a C program to find the sum of all prime numbers between 1 and n.
*/

#include<stdio.h>

int main()
{
    int i, n, j, flag = 0, sum=0;
    printf("Enter the number till which Prime numbers will be added: ");
    scanf("%d", &n);

    for(j=2; j<n; j++)
    {
        flag = 0;
        for(i=2; i<=(j/2); i++)
        {
            if(j%i==0)
            {
                flag = 1;
                break;
            }
        }

        if(flag==0)
        {
            sum+=j;
        }
    }

    printf("The sum of all prime numbers till %d = %d", n, sum);
    return 0;
}
