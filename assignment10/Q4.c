// Program to find second-largest distinct element using recursion

#include <stdio.h>
#include <limits.h>

void findSecondLargest(int arr[], int n, int index, int *largest, int *second)
{
    if (index == n)          
        return;

    if (arr[index] > *largest)
    {
        *second = *largest;
        *largest = arr[index];
    }
    else if (arr[index] > *second && arr[index] != *largest)
    {
        *second = arr[index];
    }

    findSecondLargest(arr, n, index + 1, largest, second);
}

int main()
{
    int arr[100];
    int n, i;
    int largest = INT_MIN;
    int second = INT_MIN;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    findSecondLargest(arr, n, 0, &largest, &second);

    if (second == INT_MIN)
        printf("Fewer than two distinct elements exist.\n");
    else
        printf("Second-largest distinct element = %d\n", second);

    return 0;
}