/* Question 1: 
Write a C program to find the roots of a quadratic equation using a switch case.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, r1, r2, ig, dis;
    int flag = 0;

    //Input values from the user
    printf("In the quadratic equation (aX^2 + bX +c):\n");
    printf("Enter value of 'a': ");
    scanf("%f", &a);
    printf("Enter value of 'b': ");
    scanf("%f",&b);
    printf("Enter values of 'c': ");
    scanf("%f",&c);

    //Discriminant calculation
    dis = (b*b) - (4*a*c);
    switch(dis>0)
    {
        case 1: // If discriminant is positive
            r1 = (-b + sqrt(dis)) / (2*a);
            r2 = (-b - sqrt(dis)) / (2*a);
            printf("Two distinct and real roots exists: %.2f and %.2f", r1, r2);
            break;
        case 0: // If discriminant is not positive or zero
            flag = 1;

            if(dis < 0) // If discriminant is negative
            {
                r1 = r2 = -b/(2*a);
                ig = sqrt(-dis)/(2*a);
                printf("Two distinct complex roots exists: %.2f + %.2fi and %.2f - %.2fi",r1, ig, r2, ig);
                break;
            }
            else // If discriminant is zero
            {
                r1 = r2 = -b/(2*a);
                printf("Two equal and real roots exists: %.2f and %.2f", r1, r2);
                break;
            }
    }
    return 0;
}
