/*Question 2:
Write a C program to convert Octal to a Decimal number system.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    long long octal, tempOctal, decimal;
    int rem, place;

    /* Input octal number from user */
    printf("Enter any octal number: ");
    scanf("%lld", &octal);
    tempOctal = octal;

    decimal = 0;
    place = 0;

    /*
     * Convert octal to decimal
     */
    while(tempOctal > 0)
    {
         /* Extract the last digit of octal */
        rem = tempOctal % 10;

        /* Convert last octal digit to decimal */
        decimal += pow(8, place) * rem;

        /* Remove the last octal digit */
        tempOctal /= 10;

        place++;
    }

    printf("Octal number = %lld\n", octal);
    printf("Decimal number = %lld", decimal);

    return 0;
}
