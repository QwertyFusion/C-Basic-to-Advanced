/* Question 5:
WAP to input three numbers and print the highest of the three.
*/

void main()
{
    int a, b ,c;
    printf("Enter three numbers :");
    scanf("%d %d %d", &a, &b, &c);
    printf("\na = %d, b = %d, c = %d\n", a, b, c);

    if(a>b)
    {
        if(a>c)
        {
            printf("a is greater");
        }
        else
        {
            printf("C is greater");
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is greater");
        }
        else
        {
            printf("C is greater");
        }
    }
}
