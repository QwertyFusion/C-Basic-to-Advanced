/* Question 5:
WAP to check whether a an alphabet is uppercase or lowercase.
*/

/*Step by step descriptive logic to check uppercase and lowercase alphabets.

Input a character from user. Store it in some variable say ch.
Character is uppercase alphabet if(ch >= 'A' and ch <= 'Z').
Character is lowercase alphabet if(ch >= 'a' and ch <= 'z').
If none of the above conditions met, then character is not alphabet.*/

#include<stdio.h>
int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z')
    {
        printf("The alphabet is in Uppercase.");
        return 0;
    }
    else if(ch>='a' && ch<='z')
    {
        printf("The alphabet is in Lowercase.");
        return 0;
    }
    else
    {
        printf("NOT AN APLHABET, EXITING PROGRAM...");
        return 0;
    }
    return 0;
}
