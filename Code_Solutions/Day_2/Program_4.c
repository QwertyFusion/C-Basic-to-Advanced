/*Question 2:
WAP to take an integer as a user input and print its equivalent ASCII Character.
*/

#include<stdio.h>
int main()
{
    int var;
    printf("Enter an ASCII value to print the equivalent character: "); 
    scanf("%d", &var); //scanf is used to take input and is stored in the memory address of var (&var).
    printf("Equivalent character = %c", var);
    return 0;
}
