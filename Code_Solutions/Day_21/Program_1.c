/*Question 1:
WAP to convert Binary to Decimal using array, then binary to hexadecimal.
*/

#include<stdio.h>
void main()
{
    int i, bin=0, n, a[64];
    printf("\nEnter the Binary number: ");
    scanf("%d",&n);

    //PRINTING THE ORIGINAL NUMBER
    printf("The Original Binary Number: %d", n);

    for(i=0;n!=0;i++)
    {
        a[i]=n%10;
        if(a[i]>1)
        {
            printf("\nINCORRECT VALUE, Exiting...");
            return;
        }
        n=n/10;
    }
    n=i;

    //CALCULATING AND PRINTING DECIMAL NUMBER
    printf("\nThe Equivalent Decimal Number: ");
    for(i=0;i<n;i++)
    {
        bin+=a[i]*pow(2,i);
    }
    printf("%d",bin);

    //PRINTING HEXADECIMAL NUMBER
    printf("\nThe Equivalent Hexadecimal Value: %lX", bin);
}
