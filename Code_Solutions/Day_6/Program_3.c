/* Question 3:
WAP to input two numbers and swap them using xor operation.
*/

#include <stdio.h>
int main()
{
    int a=4, b=3;
    printf("before XOR, a= %d and b= %d\n",a,b);

    a=a^b;
    b=a^b;
    a=a^b;

    printf("after XOR, a= %d and b= %d",a,b);
    return 0;
}
