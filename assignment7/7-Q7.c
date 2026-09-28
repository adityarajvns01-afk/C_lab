#include <stdio.h>

int main() {
    int arr[100];
    int n, i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array before sorting: ");

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {

            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nArray after sorting: ");

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}