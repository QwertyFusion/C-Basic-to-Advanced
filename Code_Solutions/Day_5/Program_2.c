/* Question 2:
WAP to input amount of seconds and convert it to equivalent hours, minutes and seconds.
*/

#include <stdio.h>

int main()
{
    int s, h, m, ns;
    printf("Enter the amount of second(s): ");

    //reads the user input and stores in 's'
    scanf("%d", &s);

    ns = s%60;
    h = s/3600;
    m = s/60 - h *60;

    printf("%d Second(s) = %d Hour(s), %d Minute(s) and %d Second(s)", s, h, m, ns);
    return 0;
}
