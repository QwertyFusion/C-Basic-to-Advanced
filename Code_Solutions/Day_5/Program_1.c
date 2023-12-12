/* Question 1:
WAP to input temperature in Fahrenheit and convert it to Centigrade.
*/

#include <stdio.h>

int main()
{
    float temp;
    printf("Enter temperature in Fahrenheit: ");

    //reads the user input and stores in 'temp'
    scanf("%f", &temp);

    printf("%.2f degree F in Centigrade = %.2f degree C", temp, (temp-32)*5.0/9.0);
    return 0;
}
