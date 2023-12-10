/* Question 5:
WAP to understand the use of method declaration and method calling.
*/

#include <stdio.h>
void fun();
int var = 10; //global variable

int main()
{
    int var = 3; //local variable
    printf("%d\n", var);
    fun(); //method calling
    return 0;
}

void fun() //method declaration format:    <datatype> <method_name> (<arguments>)
{
    printf("%d", var);
}

/*
- void datatype does not require a return statement
- Any other data type needs a require statement with the correct return value of datatype
*/