#include <stdio.h>

void sortAscending(int *arr, int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void sortDescending(int *arr, int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(arr + j) < *(arr + j + 1))
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void displayArray(int *arr, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }

    printf("\n");
}

int main()
{
    int arr[100];
    int n, i, choice;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n1. Ascending Order\n");
    printf("2. Descending Order\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        sortAscending(arr, n);

        printf("\nArray in ascending order:\n");
        displayArray(arr, n);
    }
    else if (choice == 2)
    {
        sortDescending(arr, n);

        printf("\nArray in descending order:\n");
        displayArray(arr, n);
    }
    else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}