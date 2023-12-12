/* Question 4:
WAP to read an alphabet from the user and convert it into uppercase if the entered alphabet is in
lowercase, otherwise display an appropriate message.
*/

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter the alphabet: ");
    scanf("%c", &ch);

    if(!(ch>64 && ch<123))
    {
        printf("INVALID ALPHABET, EXITING...");
        return 0;
    }

    if(ch>='a' && ch<='z')
    {
        ch=ch-32;
        printf("The alphabet in UPPERCASE is %c.", ch);
    }
    else
    {
        printf("The alphabet already in UPPERCASE.");
    }

    return 0;
}
