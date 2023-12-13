/* Question 5:
Write a C program to find the frequency of the h digit in a given integer. 
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int num, n=0, count=0, h=0, h2=0, res=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    n = num;

    printf("The number of digits: ");

    while(n>=1)
    {
        count++;
        n/=10;
    }
    printf("%d\n", count);

    printf("Enter the digit you want the frequency of: ");
    scanf("%d", &h);

    printf("The Frequency of the digit %d = ", h);

    h2 = count - h;

    res = num/pow(10, h2);
    res = res%10;

    printf("%d", res);

    return 0;
}
