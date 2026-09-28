#include<stdio.h>
int main() {
    int n, i, search, count = 0;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search);

    printf("Element found at position(s): ");

    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("%d", i + 1);

            count = count + 1;
        }
    }
    if (count == 0) {
        printf("Element not found.");
    }else{
        printf("Total number of occurence = %d\n", count);
    }
    return 0;

        }
    