/* Question 2:
WAP to declare three variables and assign the same value to each of the variables.
*/

#include <stdio.h>
int main()
{
    int var1, var2, var3; //declaring values of Integer type
    var1 = var2 = var3 = 4; //Assigning same value to three different variables
    printf("%d\n",var1); //printing the value of each variable in new line with \n
    printf("%d\n",var2); //using %d in order to print value of Integer variables
    printf("%d",var3); //Not using \n in the last line since no new line is needed
    return 0;
}
