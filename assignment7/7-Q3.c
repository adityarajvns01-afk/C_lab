#include <stdio.h>

int main() {
    int arr[100];
    int n, i, element, position;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position: ");
    scanf("%d", &position);

    if(position < 1 || position > n + 1) {
        printf("Invalid position.\n");
    }
    else {
        for(i = n; i >= position; i--) {
            arr[i] = arr[i - 1];
        }

        arr[position - 1] = element;
        n++;

        printf("Updated array: ");

        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}