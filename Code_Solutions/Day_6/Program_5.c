/* Question 5:
WAP to input a number and use if statement on it.
*/

#include<stdio.h>

int main()
{
    int a = 45;

    /* if Statement Syntax:
        if(condition) 
        {
            // if body if the condition is true
            // Statements to execute if condition is true
        }
        else
        {
            // if body if the condition is false
            // Statements to execute if condition is false
        }
    */

    if (a == 45 && a>21 && a<1200)  
    /*&& is relational AND operator which tells that if all the conditions are true, then only the if answer will be true.*/
    {
        printf("First Condition is true");
    }
    else //else happens when the if condition is not correct
    {
        printf("First Condition is false");
    }

    if(a==45 || a>99)
    /*|| is relational OR operator which tells that if one of the conditions are true, then only the if answer will be true.*/
    {
        printf("Second Condition is true");
    }
    else
    {
        printf("Second Condition is false");
    }

    if(!(a==45))
    /*! is relational NOT operator which tells that if the conditions are NOT true, then only the if answer will be true.*/
    {
        printf("Third Condition is true");
    }
    else
    {
        printf("Third Condition is false");
    }

    if(a==2)
    /*Here, we have no else statement so if the condition is not true, the if will just exit and not give any output*/
    {
        printf("Fourth Condition is true");
    }

    if(a==2) //first condition
    {
        printf("Fifth Condition first part is true");
    }
    else if(a==45) //when the first condition fails, the if will check whether the next condition is true
    {
        printf("Fifth Condition second part is true");
    }
    else //default case
    {
        printf("Fifth Condition third part is true");
    }
    return 0;
}
