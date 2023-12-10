/* Question 4:
WAP to use define statement in order to define an if else statement.
*/

#include <stdio.h>
#define greater(x,y) if (x>y) \
    printf("%d is greater than %d", x, y);\
else \
    printf("%d is lesser than %d", x, y);

int main()
{
    greater(5,6);
    return 0;
}
