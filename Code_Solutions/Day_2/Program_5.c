/*Question 2:
WAP to create a global integer variable  and print its value.
*/

#include <stdio.h>
int a = 9;

int main()
{
    extern int a; //extern is the keyword to define a variable as global. Global variables can be accessed by any function/method in the file
    printf("%d",a);
    return 0;
}

//ALTERNATE METHOD
/*
#include <stdio.h>
extern int a = 9;

int main ()
{
    printf("%d", a);
    return 0;
}
*/
