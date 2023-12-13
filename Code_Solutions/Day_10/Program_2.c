/* Question 2:
Write a C program to create a Simple Calculator using a switch case.
*/

#include <stdio.h>
#include <math.h>

int main()
{

    char op;
    float num1, num2;

    //INPUT VALUES FROM THE USER
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch (op)
    {
        case '+': //ADDITION
            printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
            break;
        case '-': //SUBTRACTION
            printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
            break;
        case '*': //MULTIPLICATION
            printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
            break;
        case '/': //DIVISION
            printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
            break;
        default: //INVALID OPERATOR
            printf("INVALID CHARACTER, PLEASE CHOOSE FROM (+, -, *, /), EXITING...");
            break;
    }

    return 0;
}
