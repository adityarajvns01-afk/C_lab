// Program to search an element using recursive binary search

#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key)
{
    int mid;

    if (low > high)          
        return -1;

    mid = (low + high) / 2;

    if (arr[mid] == key)
        return mid;

    if (key < arr[mid])
        return binarySearch(arr, low, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, high, key);
}

int main()
{
    int arr[100];
    int n, i, key, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, 0, n - 1, key);

    if (result == -1)
        printf("Element not found.\n");
    else
        printf("Element found at position %d.\n", result + 1);

    return 0;
}