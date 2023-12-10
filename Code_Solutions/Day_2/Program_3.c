/*Question 3:
WAP to divide 4 by 9 and print in integer value, print integer after conversion to float, and print float. Also use truncation of decimal points.
*/


#include <stdio.h>
int main()
{
    int var = 4/9; //Value is 0, since: 4/9 = 0.4444... but we are storing it in int variable, so the value gets truncated to 0
    printf("%d\n", var);

    float var1 = 4/9; //value is 0.00... since: in 4/9 both the numbers are integers so the value of 4/9 = 0, then converted to float = 0.00...
    printf("%.2f\n", var1);

    float var2 = 4.0/9.0; //value is 0.44... since: in 4.0/9.0 both the numbers are float type.
    printf("%.2f\n", var2); //We are printing just the first two decimal values. (%f is for whole decimal; %.nf is for n number of digits after decimal point)
    return 0;
}
