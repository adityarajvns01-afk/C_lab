#include <stdio.h>

void displayArray(int *arr, int size)
{
    int i;

    if (size == 0)
    {
        printf("Array is empty.\n");
        return;
    }

    printf("Array: ");

    for (i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }

    printf("\n");
}

void insertElement(int *arr, int *size, int position, int value)
{
    int i;

    for (i = *size; i > position; i--)
    {
        *(arr + i) = *(arr + i - 1);
    }

    *(arr + position) = value;
    (*size)++;
}

int deleteElement(int *arr, int *size, int position, int *deletedValue)
{
    int i;

    if (*size == 0)
        return 0;

    *deletedValue = *(arr + position);

    for (i = position; i < *size - 1; i++)
    {
        *(arr + i) = *(arr + i + 1);
    }

    (*size)--;

    return 1;
}

int main()
{
    int arr[100];
    int size, i;
    int choice, position, value, deletedValue;

    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n--- Array Menu ---\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                displayArray(arr, size);
                break;

            case 2:
                if (size >= 100)
                {
                    printf("Array is full.\n");
                    break;
                }

                printf("Enter position (0 to %d): ", size);
                scanf("%d", &position);

                if (position < 0 || position > size)
                {
                    printf("Invalid position.\n");
                    break;
                }

                printf("Enter element: ");
                scanf("%d", &value);

                insertElement(arr, &size, position, value);

                printf("Element inserted successfully.\n");
                break;

            case 3:
                if (size == 0)
                {
                    printf("Array is empty.\n");
                    break;
                }

                printf("Enter position (0 to %d): ", size - 1);
                scanf("%d", &position);

                if (position < 0 || position >= size)
                {
                    printf("Invalid position.\n");
                    break;
                }

                deleteElement(arr, &size, position, &deletedValue);

                printf("Deleted value = %d\n", deletedValue);
                break;

            case 4:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}