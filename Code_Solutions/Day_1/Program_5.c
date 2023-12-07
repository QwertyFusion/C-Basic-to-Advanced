/* Question 5:
WAP to input two numbers and display the sum of it.
*/

#include<stdio.h>
int main()
{
    int a, b; 
    printf("Enter the first number: ");
    scanf("%d",&a); //taking input of type int and storing in variable a
    //& sign stores the address of the variable a (will be covered in later programs)
    printf("Enter the second number: ");
    scanf("%d", &b); //taking input of type int and storing in variable b
    printf("%d + %d = %d", a, b, a+b);
    return 0;
}
