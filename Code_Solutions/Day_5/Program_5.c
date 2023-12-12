/* Question 5:
WAP to input hours minutes and days twice, add them and display the result.
*/

#include <stdio.h>

int main()
{
    int hh1, mm1, ss1, hh2, mm2, ss2, sumhh, summm, sumss;
    printf("Enter the first time in hh mm ss: ");

    scanf("%d %d %d", &hh1, &mm1, &ss1);

    printf("Enter the second time in hh mm ss: ");

    scanf("%d %d %d", &hh2, &mm2, &ss2);

    sumss = (ss1 + ss2)%60;
    summm = ((ss1 + ss2)/60 + mm1 + mm2)%60;
    sumhh = ((ss1 + ss2)/60 + mm1 + mm2)/60 + hh1 + hh2;

    printf("The sum of the two times in hh:mm:ss format = %d:%d:%d", sumhh, summm, sumss);
    return 0;
}
