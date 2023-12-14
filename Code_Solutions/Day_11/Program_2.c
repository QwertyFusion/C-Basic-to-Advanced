/* Question 2: 
Write a C program to print all even numbers between 1 to 100. - using while loop.
*/

#include<stdio.h>
int main()
{
    int i=1;

    printf("The series:\n");

    while(i<=100)
    {
        if(i%2==0)
        {
            printf("%d\t", i);
        }
        i++;
    }
    return 0;
}
