#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100];
    int n, i;
    int largest, secondLargest;
    int smallest, secondSmallest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("At least 2 elements are required.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = INT_MIN;
    secondLargest = INT_MIN;
    smallest = INT_MAX;
    secondSmallest = INT_MAX;

    for(i = 0; i < n; i++) {

        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    if(secondLargest == INT_MIN)
        printf("Second-largest element does not exist.\n");
    else
        printf("Second-largest element = %d\n", secondLargest);

    if(secondSmallest == INT_MAX)
        printf("Second-smallest element does not exist.\n");
    else
        printf("Second-smallest element = %d\n", secondSmallest);

    return 0;
}