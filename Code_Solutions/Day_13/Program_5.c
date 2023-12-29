/*Question 5:
Write a C program to find LCM of two numbers.
*/

#include<stdio.h>

int main()
{
    int i, n1, n2, temp=0, lcm=0;
    printf("Enter the two numbers to find its LCM: ");
    scanf("%d%d", &n1, &n2);

    for(i=1; ; i++)
    {
        if(i%n1==0 && i%n2==0)
        {
            lcm = i;
            break;
        }
    }

    printf("The LCM of %d and %d: %d", n1, n2, lcm);

    return 0;
}
