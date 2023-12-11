/* Question 2:
WAP to understand the working of pre increment, post increment and ternary operator.
*/

void main ()
{
    int a, b, c, d;
    a = 15;
    b = 10;
    c = ++a - b; //pre increment ++a makes a = a+1 before a is used in the sentence c=a-b;
    printf("a = %d b = %d c = %d\n", a, b, c);
    d = b++ +a; //post increment b++ makes b = b+1 after b has been used in the sentence d=b+a;
    printf("a = %d b = %d d = %d\n", a, b, c);
    printf("a/b = %d\n", a/b);
    printf("a%%b = %d\n", a%b); //Here we use two % signs in order to print it normally
    printf("a *= b = %d\n", a*=b);
    printf("%d\n", (c>d) ? 1 : 0); //Ternary operator
    printf("%d\n", (c<d) ? 1 : 0);
    /*
    Ternary operator uses the syntac:
    (<condition>)? (true): (false);
    so if the condition is true, the first value/command will be used. 
    If it is false, then the other will be used.
    It is a compact form of if else where there is only one output, either true or fale.*/
}
