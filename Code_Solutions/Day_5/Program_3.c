/* Question 3:
WAP to input two numbers and swap them without using a third variable.
*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of a: ");

    //reads the user input and stores in 'a'
    scanf("%d", &a);

    printf("Enter the value of b: ");

    //reads the user input and stores in 'b'
    scanf("%d", &b);

    printf("The value of a = %d, the value of b = %d\n", a, b); //Printing Initial Values

    a = b + a;
    b = a - b;
    a = a - b;

    printf("The value of a = %d, the value of b = %d", a, b); //Printing Final Values after swapping
    return 0;
}
