/* Question 3:
WAP to display whether a triangle is scalene, isosceles or equilateral.
*/

/*Properties of triangle
A triangle is said Equilateral Triangle, if all its sides are equal.
If a, b, c are three sides of triangle. Then, the triangle is equilateral only if a == b == c.

A triangle is said Isosceles Triangle, if its two sides are equal.
If a, b, c are three sides of triangle. Then, the triangle is isosceles if either a == b or a == c or b == c.

A triangle is said Scalene Triangle, if none of its sides are equal.

Logic to check equilateral, scalene or isosceles triangle
Step by step descriptive logic to classify triangle as equilateral, scalene or isosceles triangle.

Input sides of a triangle from user. Store it in some variables say side1, side2 and side3.
Check if(side1 == side2 && side2 == side3), then the triangle is equilateral.
If it is not an equilateral triangle then it may be isosceles.
Check if(side1 == side2 || side1 == side3 || side2 == side3), then triangle is isosceles.
If it is neither equilateral nor isosceles then it scalene triangle.*/

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

    if(side1==side2 && side2==side3)
    {
        printf("The Triangle is equilateral.");
        return 0;
    }
    else if(side1==side2 || side2==side3 || side1==side3)
    {
        printf("The Triangle is isosceles.");
        return 0;
    }
    else
    {
        printf("The Triangle is scalene.");
        return 0;
    }
    return 0;
}
