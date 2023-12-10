/*Question 2:
WAP to get the range of different types of Integer and display it. (Signed and Unsigned: Integer, Short Integer, Long Long Integer)
*/

#include <stdio.h>
#include <limits.h> //Function is used to get the ranges of datatypes

int main()
{
    //SIGNED INTEGERS
    printf("-----SIGNED INTEGER RANGES-----\n");
    int var1 = INT_MIN; //returns integer min value
    int var2 = INT_MAX; //returns integer max value
    printf("Range of signed integer is from %d to %d\n", var1, var2);

    short int var3 = SHRT_MIN;
    short int var4 = SHRT_MAX;
    printf("Range of short signed integer is from: %d to %d\n", var3, var4);

    long long int var5 = LLONG_MIN;
    long long int var6 = LLONG_MAX;
    printf("Range of long long signed integer is from: %lld to %lld\n\n", var5, var6);


    //UNSIGNED INTEGERS
    printf("-----UNSIGNED INTEGER RANGES-----\n");

    unsigned int var7 = 0; //unisnged integers start from 0
    unsigned int var8 = UINT_MAX;
    printf("Range of unsigned integer is from %u to %u\n", var7, var8);

    short unsigned int var9 = 0;
    short unsigned int var10 = USHRT_MAX;
    printf("Range of short unsigned integer is from: %u to %u\n", var9, var10);

    long long unsigned int var11 = 0;
    long long unsigned int var12 = ULLONG_MAX;
    printf("Range of long long unsigned integer is from %llu to %llu\n", var11, var12);

    return 0;
}
