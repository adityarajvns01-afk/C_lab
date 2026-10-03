#include <stdio.h>
#include <limits.h>

void findElements(int *arr, int size, int *smallest,
                   int *secondSmallest, int *greatest,
                   int *secondGreatest, int *distinctCount)
{
    int i;
    int min = INT_MAX;
    int max = INT_MIN;
    int secondMin = INT_MAX;
    int secondMax = INT_MIN;

    *distinctCount = 0;

    for (i = 0; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }

    for (i = 0; i < size; i++)
    {
        if (arr[i] > min && arr[i] < secondMin)
            secondMin = arr[i];

        if (arr[i] < max && arr[i] > secondMax)
            secondMax = arr[i];
    }

    *smallest = min;
    *greatest = max;

    if (secondMin != INT_MAX && secondMax != INT_MIN)
        *distinctCount = 2;

    *secondSmallest = secondMin;
    *secondGreatest = secondMax;
}

int main()
{
    int arr[100];
    int n, i;
    int smallest, secondSmallest;
    int greatest, secondGreatest;
    int distinctCount;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    findElements(arr, n, &smallest, &secondSmallest,
                 &greatest, &secondGreatest, &distinctCount);

    if (distinctCount < 2)
    {
        printf("\nFewer than two distinct values exist.\n");
    }
    else
    {
        printf("\nSmallest = %d\n", smallest);
        printf("Second Smallest = %d\n", secondSmallest);
        printf("Greatest = %d\n", greatest);
        printf("Second Greatest = %d\n", secondGreatest);
    }

    return 0;
}