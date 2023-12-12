/* Question 1:
WAP to input two numbers and do the following operations: add, subtract, multiply, divide, modulus.
*/

#include<stdio.h>

int main()
{
    int a, b; //variables
    printf("Enter the number 1: ");
    scanf("%d",&a); //inputing the first value
    printf("Enter the number 2: ");
    scanf("%d",&b); //inputing the second value

    printf("a+b = %d\n", a+b); //addition operator
    printf("a-b = %d\n", a-b); //subtraction operator
    printf("a*b = %d\n", a*b); //multiplication operator
    printf("a/b = %d\n", a/b); //division operator
    printf("a%%b = %d", a%b); //modulus operator - used to get the remainder of two numbers
    return 0;
}
