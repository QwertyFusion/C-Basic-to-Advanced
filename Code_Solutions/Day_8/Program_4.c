/* Question 4:
WAP to calculate profit or loss.
*/
/*Formula to calculate profit and loss
Profit = S.P - C.P (Where S.P is Selling Price and C.P is Cost Price)
Loss = C.P - S.P*/

#include<stdio.h>

int main()
{
    float sp, cp, p, l;
    printf("Enter Cost Price and Sell Price (in Rs.): ");
    scanf("%f %f", &cp, &sp);

    if(cp>sp)
    {
        l = cp - sp;
        printf("Loss = Rs. %.2f", l);
    }
    else if(sp>cp)
    {
        p = sp - cp;
        printf("Profit = Rs. %.2f", p);
    }
    else
    {
        printf("Profit/Loss = Rs. 0");
    }
    return 0;
}
