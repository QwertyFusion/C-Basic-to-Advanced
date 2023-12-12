/* Question 5:
WAP to read a character from the user and test it whether it a vowel or consonant or not an alphabet.
*/

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter the character: ");
    scanf("%c", &ch);

    if(!(ch>64 && ch<123))
    {
        printf("The character is not an alphabet");
        return 0;
    }

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("The alphabet is a VOWEL.");
    }
    else
    {
        printf("The alphabet is a CONSONANT.");
    }

    return 0;
}
