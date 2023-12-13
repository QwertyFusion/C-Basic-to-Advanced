/* Question 5:
WAP to calculate salary of an employee based on the given info.
*/

/*Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% */

/*da = basic_salary * (DA/100)
If DA = 80% then the statement becomes da = basic_salary * (80/100).
 Which can also be written as DA = basic_salary * 0.08. Likewise you can also derive a formula for HRA.*/


#include<stdio.h>

int main()
{
    float basic_salary, da, hra, gross_salary;
    printf("Enter the Salary (in Rs.): ");
    scanf("%f", &basic_salary);

    if(basic_salary<=10000)
    {
        da = 80.0/100.0 * basic_salary;
        hra = 20.0/100.0 * basic_salary;
    }
    else if(basic_salary<=20000)
    {
        da = 90.0/100.0 * basic_salary;
        hra = 25.0/100.0* basic_salary;
    }
    else
    {
        da = 95.0/100.0 * basic_salary;
        hra = 30.0/100.0 * basic_salary;
    }

    gross_salary = basic_salary + da + hra;

    printf("The Basic Salary = Rs. %.2f\n", basic_salary);
    printf("The DA = Rs. %.2f\n", da);
    printf("The HRA = Rs. %.2f\n", hra);
    printf("The Gross Salary = Rs. %.2f", gross_salary);

    return 0;
}
