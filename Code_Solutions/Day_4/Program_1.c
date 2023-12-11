/* Question 1
WAP to input the number of days and print it in equivalent number of month and days.
*/

void main()
{

    int months, days;

    printf("Enter days\n");
    scanf("%d", &days); //user input

    months = days/30; // Using / sign performs the devision and returns the quotient
    days = days%30; //Using % sign performs the division and returns the remainder
    printf("Months = %d Days = %d", months, days);
}
