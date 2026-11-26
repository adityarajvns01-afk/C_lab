#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int *ptr;
    int largest, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr;
    largest = smallest = *ptr;

    for(i = 1; i < n; i++)
    {
        if(*(ptr + i) > largest)
            largest = *(ptr + i);

        if(*(ptr + i) < smallest)
            smallest = *(ptr + i);
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}