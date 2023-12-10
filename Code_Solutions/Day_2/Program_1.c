/*Question 1:
WAP to get the size of Primary DataTypes in bytes.
*/

#include<stdio.h>

int main()
{
    printf("Size of int: %d bytes\n", sizeof(int)); //Integer is used to store whole numbers
    printf("Size of long int: %d bytes\n", sizeof(long int)); //Similar to integer but stores bigger numbers and needs more storage
    printf("Size of short int: %d bytes\n", sizeof(short int)); //Similar to integer but stores smaller numbers and needs less storage
    printf("Size of float: %d bytes\n", sizeof(float)); //Float is used to store decimal values
    printf("Size of double: %d bytes\n", sizeof(double)); //Similar to float but stores bigger decimal numbers and needs more storage
    printf("Size of long double: %d bytes\n", sizeof(long double)); //Similar to float but stores bigger decimal numbers and needs more storage. Bigger than double.
    return 0;
}

/*
1 byte = 8 bits

Types of DataTypes:
1) Primary:         - Example: integer, character, double, float, void, etc.
                    - Primary Datatypes have fixed sizes.

2) Derived:         - Example: function, array, pointer, reference, etc.
                    - Derived Datatypes are derived from the primary datatypes and have custom sizes.

3) User Defined:    - Example: class, structure, union, enum, typedef, etc.
                    - User Defined Datatypes have custom sizes since they are defined by the user.
*/