/* Question 1:
WAP to calculate salary based on the given info.
*/

/*A company  decides to give bonus to all its employees on new year.
A 5% bonus on salary is given to male workers and 10% bonus on salary
is given to female workers.write a C program to enter the salary and
gender of the employees.  If the salary of the employee is less than 10000,
then the employee gets an extra 2% bonus on salary.  Calculate the bonus
that has to be given to the employee and display the salary that the employee will get?*/

#include<stdio.h>
int main()
{
    float sal, gsal, nsal;
    char g;

    printf("Enter the Gender (M/F): ");
    scanf("%c", &g);

    printf("Enter the salary: ");
    scanf("%f", &sal);

    if(g == 'M')
    {
        gsal = sal*0.05;
    }
    else if(g == 'F')
    {
        gsal = sal * 0.1;
    }
    else
    {
        printf("INCORRECT GENDER, EXITING...");
        return 0;
    }

    if(sal < 10000)
    {
        nsal = sal*0.02;
    }

    printf("The actual salary = %.2f\n", sal);
    printf("Gender = %c\n", g);
    printf("The bonus salary = %.2f\n", gsal + nsal);
    printf("The resultant Salary after bonus: %0.2f", nsal + gsal + sal);
    return 0;
}

