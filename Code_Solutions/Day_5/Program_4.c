/* Question 4:
WAP to input two numbers and swap them in one line.
*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter number 1: ");

    //reads the user input and stores in 'a'
    scanf("%d", &a);

    printf("Enter number 2: ");

    //reads the user input and stores in 'b'
    scanf("%d", &b);

    printf("The value of a = %d, the value of b = %d\n", a, b);

    a += b -= a = b - a;

    printf("The value of a = %d, the value of b = %d\n", a, b);
    return 0;
}
