// Program to find maximum element and count its occurrences using recursion

#include <stdio.h>

int findMaximum(int arr[], int n)
{
    int max;

    if (n == 1)              
        return arr[0];

    max = findMaximum(arr, n - 1);

    if (arr[n - 1] > max)
        return arr[n - 1];
    else
        return max;
}

int countOccurrences(int arr[], int n, int max)
{
    if (n == 0)              
        return 0;

    if (arr[n - 1] == max)
        return 1 + countOccurrences(arr, n - 1, max);
    else
        return countOccurrences(arr, n - 1, max);
}

int main()
{
    int arr[100];
    int n, i, max, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = findMaximum(arr, n);
    count = countOccurrences(arr, n, max);

    printf("Maximum element = %d\n", max);
    printf("Number of occurrences = %d\n", count);

    return 0;
}