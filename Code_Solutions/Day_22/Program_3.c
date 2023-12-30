/*Question 3:
WAP to represent the polynomial of single variable using 1-D array and perform the addition of two polynomial equations.
*/

#include<stdio.h>

//GLOBAL VARIABLES
int deg;

//FUNCTION DECLARATIONS
int input(int temp);
void display(int a[deg+1]);


void main()
{
    //DEGREE INPUT
    printf("Enter the maximum degree of x: ");
    scanf("%d", &deg);

    //ARRAY DECLARATION
    int ar1[deg+1], ar2[deg+1], sum[deg+1];

    //ARRAY ELEMENTS INPUT BLOCK
    printf("ENTER VALUES OF POLYNOMIAL 1:\n");
    for(int i=0; i<=deg; i++)
    {
        ar1[i] = input(i);

    }

    printf("ENTER VALUES OF POLYNOMIAL 2:\n");
    for(int i=0; i<=deg; i++)
    {
        ar2[i] = input(i);

    }

    //ADDITION OF TWO ARRAY BLOCK
    for(int i=0; i<=deg; i++)
    {
        sum[i] = ar1[i]+ar2[i];
    }

    //OUTPUT BLOCK
    printf("\nTHE POLYNOMIALS ARE:\n");

    printf("\nPolynomial 1:\t");
    display(ar1);

    printf("\nPolynomial 2:\t");
    display(ar2);

    printf("\nThe Result of Addition:\t");
    display(sum);

}

int input(int temp)
{
    int num;
    printf("Enter the value of coefficient of x^%d: ", temp);
    scanf("%d", &num);
    return num;
}

void display(int a[deg+1])
{
    for(int i=0; i<=deg; i++)
    {
        printf("%dx^%d", a[i], i);
        if(i<deg)
        {
            printf(" + ");
        }
    }
}
