/*Question 4:
Write a C program to find HCF (GCD) of two numbers.
*/

#include<stdio.h>

int main()
{
    int i, n1, n2, temp=0, hcf=0;
    printf("Enter the two numbers to find its HCF: ");
    scanf("%d %d", &n1, &n2);

    if(n1>=n2)
    {
        temp=n1;
    }
    else
    {
        temp=n2;
    }

    for(i=1; i<=temp; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
    }

    printf("The HCF of %d and %d: %d", n1, n2, hcf);

    return 0;
}
