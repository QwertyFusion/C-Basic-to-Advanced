/*Question 2:
Write a program to sort array of elements in ascending and descending order by selection sort using function.
*/

#include <stdio.h>

void selectionSortAscending(int arr[], int n) {
    int i, j, minIndex, temp;

    for (i = 0; i < n-1; i++) {
        minIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void selectionSortDescending(int arr[], int n) {
    int i, j, maxIndex, temp;

    for (i = 0; i < n-1; i++) {
        maxIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    selectionSortAscending(arr, n);

    printf("\nArray sorted in ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    selectionSortDescending(arr, n);

    printf("\nArray sorted in descending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
