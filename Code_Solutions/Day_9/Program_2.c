/* Question 2:
WAP to check whether a triangle is valid.
*/

/*Logic to check triangle validity
Step by step descriptive logic to check triangle validity if its sides are given.

Input sides of a triangle from user. Store them in some variable say side1, side2 and side1.
Given triangle is valid if side1 + side2 > side3 and side1 + side3 > side2 and side2 + side3 > side1.*/

#include<stdio.h>
int main()
{
    float side1, side2, side3;

    printf("Enter the length of side 1 of the triangle: ");
    scanf("%f", &side1);

    printf("Enter the length of side 2 of the triangle: ");
    scanf("%f", &side2);

    printf("Enter the length of side 3 of the triangle: ");
    scanf("%f", &side3);

    if((side1+side2)>side3 && (side1+side3)>side2 && (side2+side3)>side1)
    {
        printf("The triangle with the sides of length %.2f, %.2f, %.2f is valid.", side1, side2, side3);
    }
    else
    {
        printf("The triangle with the sides of length %.2f, %.2f, %.2f is invalid.", side1, side2, side3);
    }
    return 0;
}

