/*Question 3: 
Write a C program to count the frequency of each element in an array.
*/

#include <stdio.h>

int main()
{
    //Initialization Block
    int length, i;

    //Input Block
    printf("Enter the number of elements in the array: ");
    scanf("%d", &length);
    int arr[length];

    printf("Enter the values of the %d elements in the array: ", length);
    for(i=0; i<length ;i++)
    {
        scanf("%d", &arr[i]);
    }

    //Array fr will store frequencies of element
    int fr[length];
    int visited = -1;

    for(int i = 0; i < length; i++){
        int count = 1;
        for(int j = i+1; j < length; j++){
            if(arr[i] == arr[j]){
                count++;
                //To avoid counting same element again
                fr[j] = visited;
            }
        }
        if(fr[i] != visited)
            fr[i] = count;
    }

    //Displays the frequency of each element present in array
    printf("---------------------\n");
    printf(" Element | Frequency\n");
    printf("---------------------\n");
    for(int i = 0; i < length; i++){
        if(fr[i] != visited){
            printf("    %d", arr[i]);
            printf("    |  ");
            printf("  %d\n", fr[i]);
        }
    }
    printf("---------------------\n");
    return 0;
}
