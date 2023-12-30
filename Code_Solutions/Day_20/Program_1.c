/* Question 1:
WAP to create a 1D array of n elements and perform the following menu based operations using functions
i) Insert the given element at the last position of the array
ii) Insert the given element at the specific position
iii) Delete an element from the second position
iv) Search any element
v) Traversal of the array*/

#include <stdio.h>

// Function to insert element at specific position
void insertElement(int arr[], int *n, int pos, int element)
{
    if (pos < 0 || pos > *n)
    {
        printf("Invalid position\n");
        return;
    }

    for (int i = *n - 1; i >= pos; i--)
    {
        arr[i+1] = arr[i];
    }

    arr[pos] = element;
    (*n)++;
}

// Function to delete element from specific position
void deleteElement(int arr[], int *n, int pos)
{
    if (pos < 0 || pos >= *n)
    {
        printf("Invalid position\n");
        return;
    }

    for (int i = pos; i < *n - 1; i++)
    {
        arr[i] = arr[i+1];
    }

    (*n)--;
}

// Function for linear search
int linearSearch(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }

    return -1;
}

// Function to traverse the array
void traverseArray(int arr[], int n)
{
    printf("Array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[100], n, choice, pos, element, searchElement, index;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\nMenu:\n");
        printf("1. Insert element\n");
        printf("2. Delete element\n");
        printf("3. Linear search\n");
        printf("4. Traverse array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the index position to insert element: ");
                scanf("%d", &pos);
                printf("Enter the element to be inserted: ");
                scanf("%d", &element);
                insertElement(arr, &n, pos, element);
                break;
            case 2:
                printf("Enter the index position to delete element: ");
                scanf("%d", &pos);
                deleteElement(arr, &n, pos);
                break;
            case 3:
                printf("Enter the element to search: ");
                scanf("%d", &searchElement);
                index = linearSearch(arr, n, searchElement);
                if (index != -1)
                {
                    printf("Element found at index number %d (position = %d)\n", index, (index+1));
                }
                else
                {
                    printf("Element not found\n");
                }
                break;
            case 4:
                traverseArray(arr, n);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    while (choice != 5);
    return 0;
}
