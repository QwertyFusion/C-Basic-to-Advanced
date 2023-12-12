/* Question 1:
WAP to calculate electricity bill.
*/

/*For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/

/*Descriptive logic to compute electricity bill.

1.Input unit consumed by customer in some variable say unit.
2.If unit consumed less or equal to 50 units. Then amt = unit * 0.50.
3.If unit consumed more than 50 units but less than 100 units.
4.Then add the first 50 units amount i.e. 25 to final amount and compute the rest 50 units amount.
5.Which is given by amt = 25 + (unit-50) * 0.75. I have used units-50,
6.since I already calculated first 50 units which is 25.
7.Similarly check rest of the conditions and calculate total amount.
8.After calculating total amount.
9.Calculate the surcharge amount i.e. sur_charge = total_amt * 0.20.
10.Add surcharge amount to net amount. Which is given by net_amt = total_amt + sur_charge.*/

//%.2f is used to print fractional values only up to 2 decimal places.
//You can also use %f to print fractional values normally up to six decimal places.


#include<stdio.h>

int main()
{
    int unit;
    float sur_charge, total_amt, net_amt;

    printf("Enter the number of units consumed by customer: ");
    scanf("%d", &unit);

    if(unit <= 50)
    {
        total_amt = unit * 0.50;
    }
    else if(unit <= 150)
    {
        total_amt = 25 + (unit-50) * 0.75;
    }
    else if(unit <= 250)
    {
        total_amt = 25 + 75 + (unit - 150) * 1.20;
    }
    else
    {
        total_amt = 25 + 75 + 120 + (unit - 250);
    }

    sur_charge = total_amt * 0.20;

    net_amt = total_amt + sur_charge;

    printf("Total amount = Rs. %.2f\n", total_amt);
    printf("Surcharge amount = Rs. %.2f\n", sur_charge);
    printf("Net amount = Rs. %.2f", net_amt);
    return 0;
}
