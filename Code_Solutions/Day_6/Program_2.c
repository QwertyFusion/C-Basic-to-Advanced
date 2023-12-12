/* Question 1:
WAP to input two numbers and do the following: Logical and, logical or, logical not, bitwise and, bitwise or, bitwise not.
*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Logical AND operator = %d\n", a&&b); //Logical AND Operator
    printf("Logical OR operator = %d\n", a||b); //Logical OR Operator
    printf("Logical NOT operator = %d\n", !a); //Logical NOT Operator
    printf("Bitwise AND operator a&b = %d\n", a&b); //Bitwise AND Operator
    printf("Bitwise OR operator a|b = %d\n", a|b); //Bitwise OR Operator
    printf("Bitwise NOT operator ~a = %d", ~a); //Bitwise NOT Operator
    return 0;
}
