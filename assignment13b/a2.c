#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, i, j;
    int *ptr;
    int sum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);
    }

    ptr = &a[0][0];

    printf("\nRow sums:\n");

    for(i = 0; i < rows; i++)
    {
        sum = 0;

        for(j = 0; j < cols; j++)
            sum += *(ptr + i * cols + j);

        printf("Row %d = %d\n", i + 1, sum);
    }

    printf("\nColumn sums:\n");

    for(j = 0; j < cols; j++)
    {
        sum = 0;

        for(i = 0; i < rows; i++)
            sum += *(ptr + i * cols + j);

        printf("Column %d = %d\n", j + 1, sum);
    }

    return 0;
}