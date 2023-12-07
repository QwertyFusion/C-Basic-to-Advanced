/* Question 4:
WAP to declare an empty variable and assign the value of another variable to it.
*/

#include <stdio.h>
int main()
{
    int var1 = 3; //var 1 got the value 3
    int var2; //var 2 is declared without a value
    var2 = var1; //value of var 1 is copied to var 2
    printf("%d", var2); //var 2 value is 3 now
    return 0;
}
