/*Question 3:
Write a program to represent the polynomial equation of single variable using single linked list and perform the addition of two polynomial equations.*/

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list representing a term of the polynomial
struct Term
{
    int coefficient;
    int exponent;
    struct Term* next;
};

// Function to create a new term node with the given coefficient and exponent
struct Term* createTerm(int coefficient, int exponent)
{
    struct Term* newTerm = (struct Term*)malloc(sizeof(struct Term));
    newTerm->coefficient = coefficient;
    newTerm->exponent = exponent;
    newTerm->next = NULL;
    return newTerm;
}

// Function to insert a term into a polynomial linked list
void insertTerm(struct Term** poly, int coefficient, int exponent)
{
    struct Term* newTerm = createTerm(coefficient, exponent);
    if (*poly == NULL)
    {
        *poly = newTerm;
    }
    else
    {
        struct Term* current = *poly;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newTerm;
    }
}

// Function to add two polynomial equations
struct Term* addPolynomials(struct Term* poly1, struct Term* poly2)
{
    struct Term* result = NULL;

    while (poly1 != NULL || poly2 != NULL)
    {
        if (poly1 == NULL)
        {
            insertTerm(&result, poly2->coefficient, poly2->exponent);
            poly2 = poly2->next;
        }
        else if (poly2 == NULL)
        {
            insertTerm(&result, poly1->coefficient, poly1->exponent);
            poly1 = poly1->next;
        }
        else
        {
            if (poly1->exponent > poly2->exponent)
            {
                insertTerm(&result, poly1->coefficient, poly1->exponent);
                poly1 = poly1->next;
            }
            else if (poly1->exponent < poly2->exponent)
            {
                insertTerm(&result, poly2->coefficient, poly2->exponent);
                poly2 = poly2->next;
            }
            else
            {
                int sumCoeff = poly1->coefficient + poly2->coefficient;
                if (sumCoeff != 0)
                {
                    insertTerm(&result, sumCoeff, poly1->exponent);
                }
                poly1 = poly1->next;
                poly2 = poly2->next;
            }
        }
    }

    return result;
}

// Function to display a polynomial equation
void displayPolynomial(struct Term* poly)
{
    struct Term* current = poly;
    while (current != NULL)
    {
        if (current->coefficient > 0)
        {
            printf("+%dx^%d ", current->coefficient, current->exponent);
        }
        else
        {
            printf("%dx^%d ", current->coefficient, current->exponent);
        }
        current = current->next;
    }
    printf("\n");
}

int main()
{
    struct Term* poly1 = NULL;
    struct Term* poly2 = NULL;
    struct Term* result = NULL;
    int coeff, exp, n;

    printf("Enter the number of terms in polynomial 1: ");
    scanf("%d", &n);
    printf("Enter the terms for polynomial 1:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Coefficient: ");
        scanf("%d", &coeff);
        printf("Exponent: ");
        scanf("%d", &exp);
        insertTerm(&poly1, coeff, exp);
    }

    printf("Enter the number of terms in polynomial 2: ");
    scanf("%d", &n);
    printf("Enter the terms for polynomial 2:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Coefficient: ");
        scanf("%d", &coeff);
        printf("Exponent: ");
        scanf("%d", &exp);
        insertTerm(&poly2, coeff, exp);
    }

    printf("Polynomial 1: ");
    displayPolynomial(poly1);
    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    result = addPolynomials(poly1, poly2);
    printf("Resultant Polynomial (Sum of Polynomial 1 and Polynomial 2): ");
    displayPolynomial(result);

    // Free memory
    free(poly1);
    free(poly2);
    free(result);

    return 0;
}
