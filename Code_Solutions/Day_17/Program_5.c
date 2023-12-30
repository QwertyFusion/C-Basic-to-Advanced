/*Question 5:
WAP to print Strong numbers in a range using functions.
*/

#include <stdio.h>

long long fact(int num);
void printStrongNumbers(int start, int end);


int main()
{
    int start, end;

    printf("Enter the lower limit to find strong number: ");
    scanf("%d", &start);
    printf("Enter the upper limit to find strong number: ");
    scanf("%d", &end);

    printf("All strong numbers between %d to %d are: \n", start, end);
    printStrongNumbers(start, end);

    return 0;
}


void printStrongNumbers(int start, int end)
{
    long long sum;
    int num;

    while(start != end)
    {
        sum = 0;
        num = start;

        while(num != 0)
        {
            sum += fact(num % 10);
            num /= 10;
        }

        if(start == sum)
        {
            printf("%d, ", start);
        }

        start++;
    }
}


long long fact(int num)
{
    if(num == 0)
        return 1;
    else
        return (num * fact(num-1));
}
