/* Question 4:
WAP to display the number of days depending on the number of the month.
*/

/*Total days in a months is given by below table.

Month    Total days
January, March, May, July, August, October, December    31 days
February    28/29 days
April, June, September, November    30 days
Step by step descriptive logic to find number of days in given month.

Input month number from user. Store it in some variable say month.
For each month check separately and print corresponding number of days in that month using above values.
For example, print 31 days if month == 1 since, January contains 31 days.
Repeat the above step for all 12 months.*/


#include<stdio.h>
int main()
{
    int month;

    printf("Enter the number of the month: ");
    scanf("%d", &month);

    if(month>12)
    {
        printf("INVALID MONTH, EXITING...");
        return 0;
    }

    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("The month got 31 days.");
        return 0;
    }
    else if(month==2)
    {
        printf("The month got 28/29 days.");
        return 0;
    }
    else
    {
        printf("The month got 30 days.");
        return 0;
    }
    return 0;
}
