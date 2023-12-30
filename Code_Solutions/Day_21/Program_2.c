/*Question 2:
WAP to write the digits in words.
*/

#include <stdio.h>

int main()
{
    int n, num = 0;

    // Input number from user
    printf("Enter any number to print in words: ");
    scanf("%d", &n);

    n=n*10+1; //1 is a temp number so that zero is also printed

    //Stores the number in num in reverse
    while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }

    //Extract the last digit of the number and print corresponding digits in words till num becomes 1
    printf("The number in words:\n");
    while(num != 1)
    {
        switch(num % 10)
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }

        num = num / 10;
    }

    return 0;
}
