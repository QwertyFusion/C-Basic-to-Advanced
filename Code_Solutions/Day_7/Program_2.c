/* Question 2:
WAP to count total number of notes in given amount.
*/

/*C program to count total number of notes in given amount
Input amount from user. Store it in some variable say amt.
If amount is greater than 500 then, divide amount by 500 to get maximum 500 notes required.
Store the division result in some variable say note500 = amt / 500;.
After division, subtract the resultant amount of 500 notes from original amount. Perform amt = amt - (note500 * 500).

Repeat above step, for each note 200, 100, 50, 20, 10, 5, 2 and 1.

amount -= note500 * 500; is equivalent to amount = amount - (note500 * 500);.
*/

#include<stdio.h>

int main()
{
    int amt, note500, note200, note100, note50, note20, note10, note5, note2, note1;

    printf("Enter the amount: ");
    scanf("%d", &amt);

    note500 = amt/500;
    amt = amt - (note500 * 500);

    note200 = amt/200;
    amt = amt - (note200 * 200);

    note100 = amt/100;
    amt = amt - (note100 * 100);

    note50 = amt/50;
    amt = amt - (note50 * 50);

    note20 = amt/20;
    amt = amt - (note20 * 20);

    note10 = amt/10;
    amt = amt - (note10 * 10);

    note5 = amt/5;
    amt = amt - (note5 * 5);

    note2 = amt/2;
    amt = amt - (note2 * 2);

    note1 = amt/1;
    amt = amt - (note1 * 1);

    printf("The number of 500 notes: %d\n", note500);
    printf("The number of 200 notes: %d\n", note200);
    printf("The number of 100 notes: %d\n", note100);
    printf("The number of 50 notes: %d\n", note50);
    printf("The number of 20 notes: %d\n", note20);
    printf("The number of 10 notes: %d\n", note10);
    printf("The number of 5 notes: %d\n", note5);
    printf("The number of 2 notes: %d\n", note2);
    printf("The number of 1 notes: %d", note1);

    return 0;
}
